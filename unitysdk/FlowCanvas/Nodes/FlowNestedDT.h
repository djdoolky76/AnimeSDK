#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::DialogueTrees { class IDialogueActor; }

#define FLOWCANVAS_NODES_FLOWNESTEDDT_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1EF4DD50)
#define FLOWCANVAS_NODES_FLOWNESTEDDT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF4DDE0)
#define FLOWCANVAS_NODES_FLOWNESTEDDT__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1EF4DE70)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedDT_TypeDefinitionIndex = 30422;

	class FlowNestedDT
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDDT__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDDT_REGISTERPORTS_OFFSET))(this);
		}

		::NodeCanvas::DialogueTrees::IDialogueActor* _RegisterPorts_b__0_0()
		{
			return ((::NodeCanvas::DialogueTrees::IDialogueActor*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDDT__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
