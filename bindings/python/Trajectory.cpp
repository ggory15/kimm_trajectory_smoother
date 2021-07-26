#include "kimm_trajectory/bindings/Trajectory.hpp"
#include "kimm_trajectory/bindings/expose_Trajectory.hpp"

namespace kimmtraj
{
  namespace python
  {
    void expose_Trajectory()
    {
      TrajectoryPythonVisitor<kimmtraj::Trajectory>::expose("Trajectory");
    }
  }
}
