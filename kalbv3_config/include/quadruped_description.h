#ifndef QUADRUPED_DESCRIPTION_H
#define QUADRUPED_DESCRIPTION_H

#include <quadruped_base/quadruped_base.h>

namespace champ
{
    namespace URDF
    {
        void loadFromHeader(champ::QuadrupedBase &base)
        {
      base.lf.hip.setOrigin(0.07345, 0.034003, -0.0101, 0.0, 0.0, 0.0);
base.lf.upper_leg.setOrigin(0.0261, 0.024847, -0.00012167, 0.0, 0.0, 0.0);
base.lf.lower_leg.setOrigin(0.0032307, 0.0039169, -0.10496, 0.0, 0.0, 0.0);
     base.lf.foot.setOrigin(-0.00072509, 0.0046997, -0.10399, 0.0, 0.0, 0.0);

      base.rf.hip.setOrigin(0.07345, -0.034004, -0.0101, 0.0, 0.0, 0.0);
base.rf.upper_leg.setOrigin(0.0261, -0.024846, -0.00026422, 0.0, 0.0, 0.0);
base.rf.lower_leg.setOrigin(0.00043479, -0.003315, -0.10493, 0.0, 0.0, 0.0);
     base.rf.foot.setOrigin(0.0022471, -0.0041023, -0.1041, 0.0, 0.0, 0.0);

      base.lh.hip.setOrigin(-0.14905, 0.0340041681403332, -0.0101001740368266, 0.0, 0.0, 0.0);
base.lh.upper_leg.setOrigin(0.0260999999999995, 0.0248399013528206, -0.000592698894318884, 0.0, 0.0, 0.0);
base.lh.lower_leg.setOrigin(0.00544229229119725, 0.00192863337347882, -0.104908340746083, 0.0, 0.0, 0.0);
     base.lh.foot.setOrigin(0.00163565806616556, 0.00272710242669384, -0.104071642837333, 0.0, 0.0, 0.0);

      base.rh.hip.setOrigin(-0.14905, -0.0340037258178606, -0.0101001390104264, 0.0, 0.0, 0.0);
base.rh.upper_leg.setOrigin(0.0261000000000121, -0.024844182919385, -0.000372244899679972, 0.0, 0.0, 0.0);
base.rh.lower_leg.setOrigin(0.00259755916284909, -0.00285720746757014, -0.105065322967171, 0.0, 0.0, 0.0);
     base.rh.foot.setOrigin(8.76219262720968e-05, -0.00365133832138143, -0.103981239766041, 0.0, 0.0, 0.0);
        }
    }
}
#endif