#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NodeCanvas/Tasks/Actions/SetObjectVisibility_SetVisibleMode.h"

namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SETOBJECTVISIBILITY_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EBB84A0)
#define NODECANVAS_TASKS_ACTIONS_SETOBJECTVISIBILITY_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EBB8560)
#define NODECANVAS_TASKS_ACTIONS_SETOBJECTVISIBILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBB8630)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SetObjectVisibility_TypeDefinitionIndex = 30538;

	class SetObjectVisibility
	{
	public:
		::NodeCanvas::Tasks::Actions::SetObjectVisibility_SetVisibleMode setTo; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTVISIBILITY__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTVISIBILITY_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SETOBJECTVISIBILITY_ONEXECUTE_OFFSET))(this);
		}
	};
}
