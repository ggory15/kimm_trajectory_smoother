#include "kimm_trajectory/bindings/Path.hpp"
#include "kimm_trajectory/bindings/expose_Path.hpp"

namespace kimmtraj
{
  namespace python
  {
    void expose_Path()
    {
      PathPythonVisitor<kimmtraj::Path>::expose("Path");
      StdlistPythonVisitor<kimmtraj::stdlist_Eigenvec>::expose("stdlist");
    }
  }
}
