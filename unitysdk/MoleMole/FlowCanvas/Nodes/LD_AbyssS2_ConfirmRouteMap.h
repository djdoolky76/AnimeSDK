#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

class PKDEEDPGBOD;
namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x10D19320)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__CTOR_OFFSET UNITYSDK_OFFSET(0x10D193E0)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_0_OFFSET UNITYSDK_OFFSET(0x10D19420)
#define MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_1_OFFSET UNITYSDK_OFFSET(0x10D19590)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LD_AbyssS2_ConfirmRouteMap_TypeDefinitionIndex = 51190;

	class LD_AbyssS2_ConfirmRouteMap : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__1_0(::FlowCanvas::Flow flow)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_0_OFFSET))(this, flow);
		}

		::System::Void _RegisterPorts_b__1_1(::System::Boolean b, ::PKDEEDPGBOD* map)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::PKDEEDPGBOD*))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LD_ABYSSS2_CONFIRMROUTEMAP__REGISTERPORTS_B__1_1_OFFSET))(this, b, map);
		}
	};
}
