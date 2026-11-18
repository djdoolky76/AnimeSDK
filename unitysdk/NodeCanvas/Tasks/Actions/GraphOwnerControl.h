#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/GraphOwnerControl_Control.h"

namespace System { class String; }
namespace System::Collections { class IEnumerator; }

#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_DO_OFFSET UNITYSDK_OFFSET(0x1EF58460)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF580D0)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF581A0)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONSTOP_OFFSET UNITYSDK_OFFSET(0x1EF58540)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_YIELDDO_OFFSET UNITYSDK_OFFSET(0x1EF58410)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF585B0)
#define NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__ONEXECUTE_B__5_0_OFFSET UNITYSDK_OFFSET(0x1EF585C0)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int GraphOwnerControl_TypeDefinitionIndex = 29499;

	class GraphOwnerControl
	{
	public:
		::System::Boolean waitActionFinish; // 0x60
		::System::Byte _padding0[0x3];
		::NodeCanvas::Tasks::Actions::GraphOwnerControl_Control control; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONEXECUTE_OFFSET))(this);
		}

		::System::Collections::IEnumerator* YieldDo()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_YIELDDO_OFFSET))(this);
		}

		::System::Void Do()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_DO_OFFSET))(this);
		}

		::System::Void OnStop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL_ONSTOP_OFFSET))(this);
		}

		::System::Void _OnExecute_b__5_0(::System::Boolean s)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_GRAPHOWNERCONTROL__ONEXECUTE_B__5_0_OFFSET))(this, s);
		}
	};
}
