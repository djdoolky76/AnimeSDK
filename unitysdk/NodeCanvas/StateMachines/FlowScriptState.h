#pragma once
#include "unitysdk/unitysdk.h"

namespace FlowCanvas { class FlowScript; }
namespace NodeCanvas::Framework { class BBParameter; }
namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPHPARAMETER_OFFSET UNITYSDK_OFFSET(0x1F300D00)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1F300C40)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONENTER_OFFSET UNITYSDK_OFFSET(0x1F300D10)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONEXIT_OFFSET UNITYSDK_OFFSET(0x1F300FC0)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONFLOWSCRIPTFINISHED_OFFSET UNITYSDK_OFFSET(0x1F300F40)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F300ED0)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_SET_SUBGRAPH_OFFSET UNITYSDK_OFFSET(0x1F300CA0)
#define NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F301120)

namespace NodeCanvas::StateMachines
{
	inline static constexpr unsigned int FlowScriptState_TypeDefinitionIndex = 29555;

	class FlowScriptState
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::FlowCanvas::FlowScript*>* _flowScript; // 0x98
		::System::String* failureEvent; // 0xA0
		::System::String* successEvent; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE__CTOR_OFFSET))(this);
		}

		::FlowCanvas::FlowScript* get_subGraph()
		{
			return ((::FlowCanvas::FlowScript*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPH_OFFSET))(this);
		}

		::System::Void set_subGraph(::FlowCanvas::FlowScript* value)
		{
			return ((::System::Void(*)(::PVOID, ::FlowCanvas::FlowScript*))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_SET_SUBGRAPH_OFFSET))(this, value);
		}

		::NodeCanvas::Framework::BBParameter* get_subGraphParameter()
		{
			return ((::NodeCanvas::Framework::BBParameter*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_GET_SUBGRAPHPARAMETER_OFFSET))(this);
		}

		::System::Void OnEnter()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONENTER_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONUPDATE_OFFSET))(this);
		}

		::System::Void OnFlowScriptFinished(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONFLOWSCRIPTFINISHED_OFFSET))(this, success);
		}

		::System::Void OnExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_STATEMACHINES_FLOWSCRIPTSTATE_ONEXIT_OFFSET))(this);
		}
	};
}
