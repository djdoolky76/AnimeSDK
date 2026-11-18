#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SENDEVENT_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1D5E7DE0)
#define NODECANVAS_TASKS_ACTIONS_SENDEVENT_ONUPDATE_OFFSET UNITYSDK_OFFSET(0x1D5E8100)
#define NODECANVAS_TASKS_ACTIONS_SENDEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E8220)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendEvent_TypeDefinitionIndex = 29724;

	class SendEvent
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* eventName; // 0x60
		::NodeCanvas::Framework::BBParameter_1<::System::Single>* delay; // 0x68
		::System::Boolean sendGlobal; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDEVENT__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDEVENT_GET_INFO_OFFSET))(this);
		}

		::System::Void OnUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDEVENT_ONUPDATE_OFFSET))(this);
		}
	};
}
