#ifndef _Painter_Painter_h_
#define _Painter_Painter_h_

#include <Draw/Draw.h>

#define PAINTER_TIMING(x)  //RTIMING(x)

NAMESPACE_UPP

struct Xform2D {
	Pointf x, y, t;
	
	Pointf GetScaleXY() const;
	double GetScale() const;
	bool   IsRegular() const;
	Pointf Transform(const Pointf& f) const;
	
	static Xform2D Identity();
	static Xform2D Translation(double x, double y);
	static Xform2D Scale(double sx, double sy);
	static Xform2D Scale(double scale);
	static Xform2D Rotation(double fi);
	static Xform2D Sheer(double fi);	
	
	Xform2D();
};

Xform2D operator*(const Xform2D& a, const Xform2D& b);
Xform2D Inverse(const Xform2D& m);

enum {
	LINECAP_BUTT,
	LINECAP_SQUARE,
	LINECAP_ROUND,

	LINEJOIN_MITER,
	LINEJOIN_ROUND,
	LINEJOIN_BEVEL,
	
	FILL_EXACT      = 0,

	FILL_HPAD       = 1,
	FILL_HREPEAT    = 2,
	FILL_HREFLECT   = 3,

	FILL_VPAD       = 4,
	FILL_VREPEAT    = 8,
	FILL_VREFLECT   = 12,

	FILL_PAD        = FILL_HPAD|FILL_VPAD,
	FILL_REPEAT     = FILL_HREPEAT|FILL_VREPEAT,
	FILL_REFLECT    = FILL_HREFLECT|FILL_VREFLECT,
	
	FILL_FAST       = 128,
	
	GRADIENT_PAD     = 0,
	GRADIENT_REPEAT  = 1,
	GRADIENT_REFLECT = 2,
};

class Painter {
protected:
	virtual void   ClearOp(const RGBA& color) = 0;

	virtual void   MoveOp(const Pointf& p, bool rel) = 0;
	virtual void   LineOp(const Pointf& p, bool rel) = 0;
	virtual void   QuadraticOp(const Pointf& p1, const Pointf& p, bool rel) = 0;
	virtual void   QuadraticOp(const Pointf& p, bool rel) = 0;
	virtual void   CubicOp(const Pointf& p1, const Pointf& p2, const Pointf& p, bool rel) = 0;
	virtual void   CubicOp(const Pointf& p2, const Pointf& p, bool rel) = 0;
	virtual void   ArcOp(const Pointf& c, const Pointf& r, double angle, double sweep, bool rel) = 0;
	virtual void   CloseOp() = 0;
	virtual void   DivOp() = 0;

	virtual void   FillOp(const RGBA& color) = 0;
	virtual void   FillOp(const Image& image, const Xform2D& transsrc, dword flags) = 0;
	virtual void   FillOp(const Pointf& p1, const RGBA& color1,
	                      const Pointf& p2, const RGBA& color2,
	                      int style) = 0;
	virtual void   FillOp(const Pointf& f, const RGBA& color1, 
	                      const Pointf& c, double r, const RGBA& color2,
	                      int style) = 0;

	virtual void   StrokeOp(double width, const RGBA& rgba) = 0;
	virtual void   StrokeOp(double width, const Image& image, const Xform2D& transsrc,
	                        dword flags) = 0;
	virtual void   StrokeOp(double width, const Pointf& p1, const RGBA& color1,
	                        const Pointf& p2, const RGBA& color2,
	                        int style) = 0;
	virtual void   StrokeOp(double width, const Pointf& f, const RGBA& color1, 
	                        const Pointf& c, double r, const RGBA& color2,
	                        int style) = 0;

	virtual void   CharacterOp(double x, double y, int ch, Font fnt);
	virtual void   TextOp(double x, double y, const wchar *text, Font fnt, int n = -1, double *dx = NULL);

	virtual void   ColorStopOp(double pos, const RGBA& color) = 0;
	virtual void   ClearStopsOp() = 0;
	
	virtual void   OpacityOp(double o) = 0;
	virtual void   LineCapOp(int linecap) = 0;
	virtual void   LineJoinOp(int linejoin) = 0;
	virtual void   MiterLimitOp(double l) = 0;
	virtual void   EvenOddOp(bool evenodd) = 0;
	virtual void   DashOp(const Vector<double>& dash, double start = 0) = 0;
	virtual void   NoAAOp(bool noaa) = 0;

	virtual void   TransformOp(const Xform2D& m) = 0;

	virtual void   BeginOp() = 0;
	virtual void   EndOp() = 0;

protected:
	Pointf ReadPoint(CParser& p);

public:
	void     Clear(const RGBA& color);

	Painter& Move(const Pointf& p, bool rel);
	Painter& Move(const Pointf& p);
	Painter& Move(double x, double y, bool rel);
	Painter& Move(double x, double y);
	Painter& RelMove(const Pointf& p);
	Painter& RelMove(double x, double y);

	Painter& Line(const Pointf& p, bool rel);
	Painter& Line(const Pointf& p);
	Painter& Line(double x, double y, bool rel);
	Painter& Line(double x, double y);
	Painter& RelLine(const Pointf& p);
	Painter& RelLine(double x, double y);

	Painter& Quadratic(const Pointf& p1, const Pointf& p, bool rel);
	Painter& Quadratic(const Pointf& p1, const Pointf& p);
	Painter& Quadratic(const Pointf& p);
	Painter& Quadratic(double x, double y, bool rel);
	Painter& Quadratic(double x1, double y1, double x, double y, bool rel);
	Painter& Quadratic(const Pointf& p, bool rel);
	Painter& Quadratic(double x1, double y1, double x, double y);
	Painter& Quadratic(double x, double y);
	Painter& RelQuadratic(const Pointf& p1, const Pointf& p);
	Painter& RelQuadratic(double x1, double y1, double x, double y);
	Painter& RelQuadratic(double x, double y);
	Painter& RelQuadratic(const Pointf& p);

	Painter& Cubic(const Pointf& p1, const Pointf& p2, const Pointf& p, bool rel);
	Painter& Cubic(const Pointf& p2, const Pointf& p, bool rel);
	Painter& Cubic(const Pointf& p1, const Pointf& p2, const Pointf& p);
	Painter& Cubic(const Pointf& p2, const Pointf& p);
	Painter& Cubic(double x1, double y1, double x2, double y2, double x, double y, bool rel);
	Painter& Cubic(double x2, double y2, double x, double y, bool rel);
	Painter& Cubic(double x1, double y1, double x2, double y2, double x, double y);
	Painter& Cubic(double x2, double y2, double x, double y);
	Painter& RelCubic(const Pointf& p1, const Pointf& p2, const Pointf& p);
	Painter& RelCubic(const Pointf& p2, const Pointf& p);
	Painter& RelCubic(double x1, double y1, double x2, double y2, double x, double y);
	Painter& RelCubic(double x2, double y2, double x, double y);

	Painter& Arc(const Pointf& c, const Pointf& r, double angle, double sweep, bool rel);
	Painter& Arc(const Pointf& c, double rx, double ry, double angle, double sweep, bool rel);
	Painter& Arc(const Pointf& c, double r, double angle, double sweep, bool rel);
	Painter& Arc(double x, double y, double rx, double ry, double angle, double sweep, bool rel);
	Painter& Arc(double x, double y, double r, double angle, double sweep, bool rel);
	Painter& Arc(const Pointf& c, const Pointf& r, double angle, double sweep);
	Painter& Arc(const Pointf& c, double rx, double ry, double angle, double sweep);
	Painter& Arc(const Pointf& c, double r, double angle, double sweep);
	Painter& Arc(double x, double y, double rx, double ry, double angle, double sweep);
	Painter& Arc(double x, double y, double r, double angle, double sweep);
	Painter& RelArc(const Pointf& c, const Pointf& r, double angle, double sweep);
	Painter& RelArc(const Pointf& c, double rx, double ry, double angle, double sweep);
	Painter& RelArc(const Pointf& c, double r, double angle, double sweep);
	Painter& RelArc(double x, double y, double rx, double ry, double angle, double sweep);
	Painter& RelArc(double x, double y, double r, double angle, double sweep);

	Painter& Close();
	Painter& Div();

	Painter& Path(CParser& p);
	Painter& Path(const char *path);

	Painter& Fill(const RGBA& color);
	Painter& Fill(const Image& image, const Xform2D& transsrc = Xform2D::Identity(), dword flags = 0);
	Painter& Fill(const Image& image, Pointf p1, Pointf p2, dword flags = 0);
	Painter& Fill(const Image& image, double x1, double y1, double x2, double y2,
	              dword flags = 0);
	Painter& Fill(const Pointf& p1, const RGBA& color1,
	              const Pointf& p2, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Fill(double x1, double y1, const RGBA& color1,
	              double x2, double y2, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Fill(const Pointf& f, const RGBA& color1,
	              const Pointf& c, double r, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Fill(double fx, double fy, const RGBA& color1,
	              double cx, double cy, double r, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Fill(const Pointf& c, const RGBA& color1,
	              double r, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Fill(double x, double y, const RGBA& color1,
	              double r, const RGBA& color2, int style = GRADIENT_PAD);

	Painter& Stroke(double width, const RGBA& color);
	Painter& Stroke(double width, const Image& image, const Xform2D& transsrc, dword flags = 0);
	Painter& Stroke(double width, const Image& image, const Pointf& p1, const Pointf& p2,
	                dword flags = 0);
	Painter& Stroke(double width, const Image& image, double x1, double y1, double x2, double y2,
	                dword flags = 0);
	Painter& Stroke(double width, const Pointf& p1, const RGBA& color1,
	                const Pointf& p2, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Stroke(double width, double x1, double y1, const RGBA& color1,
	                double x2, double y2, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Stroke(double width, const Pointf& f, const RGBA& color1,
	                const Pointf& c, double r, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Stroke(double width, double fx, double fy, const RGBA& color1,
	                double cx, double cy, double r, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Stroke(double width, const Pointf& c, const RGBA& color1,
	                double r, const RGBA& color2, int style = GRADIENT_PAD);
	Painter& Stroke(double width, double x, double y, const RGBA& color1,
	                double r, const RGBA& color2, int style = GRADIENT_PAD);

	Painter& Character(double x, double y, int ch, Font fnt);
	Painter& Text(double x, double y, const wchar *text, Font fnt, int n = -1, double *dx = NULL);
	Painter& Text(double x, double y, const WString& s, Font fnt, double *dx = NULL);
	Painter& Text(double x, double y, const String& s, Font fnt, double *dx = NULL);
	Painter& Text(double x, double y, const char *text, Font fnt, int n = -1, double *dx = NULL);

	void Begin();
	void End();

	Painter& ColorStop(double pos, const RGBA& color);
	Painter& ClearStops();
	Painter& Opacity(double o);
	Painter& LineCap(int linecap);
	Painter& LineJoin(int linejoin);
	Painter& MiterLimit(double l);
	Painter& EvenOdd(bool evenodd = true);
	Painter& Dash(const Vector<double>& dash, double start);
	Painter& Dash(const char *dash, double start = 0);
	Painter& NoAA(bool noaa);

	Painter& Transform(const Xform2D& m);
	Painter& Translate(double x, double y);
	Painter& Rotate(double a);
	Painter& Scale(double scalex, double scaley);
	Painter& Scale(double scale);

	Painter& Rectangle(double x, double y, double cx, double cy);
	Painter& Ellipse(double x, double y, double rx, double ry);
	Painter& Circle(double x, double y, double r);
};

#include "Painter.hpp"
#include "BufferPainter.h"

END_UPP_NAMESPACE

#endif
