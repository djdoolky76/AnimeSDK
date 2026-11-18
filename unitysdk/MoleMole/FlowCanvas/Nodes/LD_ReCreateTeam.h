#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/FlowNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_PROCESS_OFFSET UNITYSDK_OFFSET(0x10D1C4C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D1C400)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__CTOR_OFFSET UNITYSDK_OFFSET(0x10D1C770)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x10D1C7B0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_ReCreateTeam_TypeDefinitionIndex = 46200;

	class LD_ReCreateTeam : public ::FlowCanvas::FlowNode
	{
	public:
		::FlowCanvas::FlowOutput* _flowOutput; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Process()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM_PROCESS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_RECREATETEAM__REGISTERPORTS_B__1_0_OFFSET))(this, f);
		}
	};
}
