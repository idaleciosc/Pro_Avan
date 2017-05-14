#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

class FiguraGeometrica{
public:
  FiguraGeometrica();
  // a funcao draw() eh uma
  // funcao virtual pura
  virtual void draw(Screen &t)=0;
};

#endif // FIGURAGEOMETRICA_H
