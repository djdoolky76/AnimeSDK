#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ParadoxNotion/MouseClickEvent.h"
#include "unitysdk/ParadoxNotion/EventData.h"

namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1DEAC7E0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1DEAC850)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1DEACAF0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1DEAC860)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEDOWN_OFFSET UNITYSDK_OFFSET(0x1DEACD80)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEUP_OFFSET UNITYSDK_OFFSET(0x1DEACE60)
#define NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DEACF40)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckMouseClick_TypeDefinitionIndex = 30499;

	class CheckMouseClick
	{
	public:
		::ParadoxNotion::MouseClickEvent checkType; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_GET_INFO_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONCHECK_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnMouseDown(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEDOWN_OFFSET))(this, msg);
		}

		::System::Void OnMouseUp(::ParadoxNotion::EventData msg)
		{
			return ((::System::Void(*)(::PVOID, ::ParadoxNotion::EventData))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKMOUSECLICK_ONMOUSEUP_OFFSET))(this, msg);
		}
	};
}
