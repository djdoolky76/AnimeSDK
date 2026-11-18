#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace ParadoxNotion { class IEventData; }
namespace System { class String; }

#define NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1E9D4CE0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONCHECK_OFFSET UNITYSDK_OFFSET(0x1E9D4EE0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONCUSTOMEVENT_OFFSET UNITYSDK_OFFSET(0x1E9D4EF0)
#define NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x1E9D4E10)
#define NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1E9D4D40)
#define NODECANVAS_TASKS_CONDITIONS_CHECKEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1E9D5040)

namespace NodeCanvas::Tasks::Conditions
{
	inline static constexpr unsigned int CheckEvent_TypeDefinitionIndex = 30167;

	class CheckEvent
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONDISABLE_OFFSET))(this);
		}

		::System::Boolean OnCheck()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONCHECK_OFFSET))(this);
		}

		::System::Void OnCustomEvent(::System::String* eventName, ::ParadoxNotion::IEventData* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::ParadoxNotion::IEventData*))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_CONDITIONS_CHECKEVENT_ONCUSTOMEVENT_OFFSET))(this, eventName, data);
		}
	};
}
