#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/SetObjectActive_SetActiveMode.h"

namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EA67F50)
#define NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EA68010)
#define NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EA68100)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectActive_TypeDefinitionIndex = 29977;

	class SetObjectActive
	{
	public:
		::NodeCanvas::Tasks::Actions::SetObjectActive_SetActiveMode setTo; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTACTIVE_ONEXECUTE_OFFSET))(this);
		}
	};
}
