#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace FlowCanvas { template <typename T> class ValueInput_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_BEGIN_OFFSET UNITYSDK_OFFSET(0x1244CBE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1244CA90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__CTOR_OFFSET UNITYSDK_OFFSET(0x1244CEE0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1244CF20)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDLevelQuestStart_TypeDefinitionIndex = 88886;

	class LDLevelQuestStart : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowOutput* succeedOutput; // 0xA8
		::FlowCanvas::ValueInput_1<::System::Int32>* LevelQuestID; // 0xB0
		::FlowCanvas::FlowOutput* cancelOutput; // 0xB8
		::FlowCanvas::FlowOutput* output; // 0xC0
		::FlowCanvas::FlowOutput* failOutput; // 0xC8
		::FlowCanvas::FlowInput* input; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDLEVELQUESTSTART__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
