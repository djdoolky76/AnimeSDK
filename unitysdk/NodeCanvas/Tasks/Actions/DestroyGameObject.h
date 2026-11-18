#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1F3014E0)
#define NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1F301580)
#define NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F301750)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int DestroyGameObject_TypeDefinitionIndex = 29472;

	class DestroyGameObject
	{
	public:
		::System::Boolean immediately; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_DESTROYGAMEOBJECT_ONUPDATE_OFFSET))(this);
		}
	};
}
