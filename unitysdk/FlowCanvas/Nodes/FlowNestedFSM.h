#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::StateMachines { class IState; }

#define FLOWCANVAS_NODES_FLOWNESTEDFSM_REGISTERPORTS_OFFSET UNITYSDK_OFFSET(0x1E9549B0)
#define FLOWCANVAS_NODES_FLOWNESTEDFSM__CTOR_OFFSET UNITYSDK_OFFSET(0x1E954A40)
#define FLOWCANVAS_NODES_FLOWNESTEDFSM__REGISTERPORTS_B__0_0_OFFSET UNITYSDK_OFFSET(0x1E954AD0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int FlowNestedFSM_TypeDefinitionIndex = 30057;

	class FlowNestedFSM
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDFSM__CTOR_OFFSET))(this);
		}

		::System::Void RegisterPorts()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDFSM_REGISTERPORTS_OFFSET))(this);
		}

		::NodeCanvas::StateMachines::IState* _RegisterPorts_b__0_0()
		{
			return ((::NodeCanvas::StateMachines::IState*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_FLOWNESTEDFSM__REGISTERPORTS_B__0_0_OFFSET))(this);
		}
	};
}
