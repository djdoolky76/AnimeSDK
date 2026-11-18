#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/CallableActionNode.h"

#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRUN_INVOKE_OFFSET UNITYSDK_OFFSET(0x1245F550)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRUN__CTOR_OFFSET UNITYSDK_OFFSET(0x1245F5D0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_SurfRun_TypeDefinitionIndex = 88805;

	class LD_SurfRun : public ::FlowCanvas::Nodes::CallableActionNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRUN__CTOR_OFFSET))(this);
		}

		::System::Void Invoke()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_SURFRUN_INVOKE_OFFSET))(this);
		}
	};
}
