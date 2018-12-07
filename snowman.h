//snowman.h, Final Project
// Bella Murrer and Hannah Sarkey

class Snowman {
  public:
  // constructor and destructor
  Snowman();
  ~Snowman();
  // utility methods
  bool inbounds();
  bool hitobject();
  void getsnowflake();
  private:
  float cx1, cy1, cx2, cy2, cx3, cy3, r1, r2, r3;
  float sqhatx,sqhaty, rhatx, rhaty;
};
