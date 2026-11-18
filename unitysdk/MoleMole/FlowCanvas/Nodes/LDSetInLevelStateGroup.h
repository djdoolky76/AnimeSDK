#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FlowCanvas/Nodes/FlowControlNode.h"
#include "unitysdk/FlowCanvas/Flow.h"

namespace FlowCanvas { class FlowInput; }
namespace FlowCanvas { class FlowOutput; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_BEGIN_OFFSET UNITYSDK_OFFSET(0x1B4B5C50)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1B4B5B90)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4B5F30)
#define MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__REGISTERPORTS_B__6_0_OFFSET UNITYSDK_OFFSET(0x1B4B5F70)

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDSetInLevelStateGroup_TypeDefinitionIndex = 91803;

	class LDSetInLevelStateGroup : public ::FlowCanvas::Nodes::FlowControlNode
	{
	public:
		::FlowCanvas::FlowInput* input; // 0xA8
		::System::Collections::Generic::List_1<::System::Object*>* stateGroups; // 0xB0
		::FlowCanvas::FlowOutput* output; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_REGISTERPORTS_OFFSET))(this);
		}

		::System::Void Begin(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP_BEGIN_OFFSET))(this, f);
		}

		::System::Void _RegisterPorts_b__6_0(::FlowCanvas::Flow f)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::Flow))((::PBYTE)hIl2Cpp + MOLEMOLE_FLOWCANVAS_NODES_LDSETINLEVELSTATEGROUP__REGISTERPORTS_B__6_0_OFFSET))(this, f);
		}
	};
}
