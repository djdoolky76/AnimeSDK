#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPKOIBEFPAO.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/MoleMole/LevelStateDefine_ELevelStateName.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class String; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_BEGIN_OFFSET UNITYSDK_OFFSET(0x12B35690)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x12B353B0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x12B35780)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_0_OFFSET UNITYSDK_OFFSET(0x12B357C0)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_1_OFFSET UNITYSDK_OFFSET(0x12B35870)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_2_OFFSET UNITYSDK_OFFSET(0x12B35920)
#define MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_3_OFFSET UNITYSDK_OFFSET(0x12B359C0)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDGetLevelState_TypeDefinitionIndex = 75962;

	class LDGetLevelState : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* beginFlowInput; // 0xA8
		::DPKOIBEFPAO stateValue; // 0xB0
		::FlowCanvas::FlowOutput* _output; // 0xC8
		::MoleMole::LevelStateDefine_ELevelStateName LevelStateName; // 0xD0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE_BEGIN_OFFSET))(this, f);
		}

		::System::Boolean _RegisterPorts_b__4_0()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_0_OFFSET))(this);
		}

		::System::String* _RegisterPorts_b__4_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_1_OFFSET))(this);
		}

		::System::Single _RegisterPorts_b__4_2()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_2_OFFSET))(this);
		}

		::System::Int32 _RegisterPorts_b__4_3()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDGETLEVELSTATE__REGISTERPORTS_B__4_3_OFFSET))(this);
		}
	};
}
