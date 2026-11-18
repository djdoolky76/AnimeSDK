#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas::Nodes { class FlipFlop; }

#define FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1EDC3FE0)
#define FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET UNITYSDK_OFFSET(0x1EDC3FF0)
#define FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__1_OFFSET UNITYSDK_OFFSET(0x1EDC4070)
#define FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__2_OFFSET UNITYSDK_OFFSET(0x1EDC4090)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlipFlop___c__DisplayClass6_0_TypeDefinitionIndex = 29825;

	class FlipFlop___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::FlowCanvas::Nodes::FlipFlop* __4__this; // 0x10
		::FlowCanvas::FlowOutput* fFlip; // 0x18
		::FlowCanvas::FlowOutput* fFlop; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterPorts_b__0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__0_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__1(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__1_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLIPFLOP___C__DISPLAYCLASS6_0__REGISTERPORTS_B__2_OFFSET))(this);
		}
	};
}
