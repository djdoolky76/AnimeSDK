#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowOutput; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x180DE730)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS_START_OFFSET UNITYSDK_OFFSET(0x180DE8C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__CTOR_OFFSET UNITYSDK_OFFSET(0x180DEA70)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x180DEAB0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x180DEAC0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x180DEAD0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDQueryDailyProgress_TypeDefinitionIndex = 51009;

	class LDQueryDailyProgress : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* _output; // 0xA8
		::System::Int32 maxIndexOut; // 0xB0
		::System::Int32 currentIndexOut; // 0xB4
		::System::Boolean isFinalCardOut; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Start(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS_START_OFFSET))(this, f);
		}

		::System::Int32 _RegisterPorts_b__4_0()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__4_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::System::Boolean _RegisterPorts_b__4_2()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDQUERYDAILYPROGRESS__REGISTERPORTS_B__4_2_OFFSET))(this);
		}
	};
}
