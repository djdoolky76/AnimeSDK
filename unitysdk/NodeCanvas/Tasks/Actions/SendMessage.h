#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework { template <typename T> class BBParameter_1; }
namespace System { class String; }

#define NODECANVAS_TASKS_ACTIONS_SENDMESSAGE_GET_INFO_OFFSET UNITYSDK_OFFSET(0x1EF6BA60)
#define NODECANVAS_TASKS_ACTIONS_SENDMESSAGE_ONEXECUTE_OFFSET UNITYSDK_OFFSET(0x1EF6BAD0)
#define NODECANVAS_TASKS_ACTIONS_SENDMESSAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF6BB80)

namespace NodeCanvas::Tasks::Actions
{
	inline static constexpr unsigned int SendMessage_TypeDefinitionIndex = 29833;

	class SendMessage
	{
	public:
		::NodeCanvas::Framework::BBParameter_1<::System::String*>* methodName; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDMESSAGE__CTOR_OFFSET))(this);
		}

		::System::String* get_info()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDMESSAGE_GET_INFO_OFFSET))(this);
		}

		::System::Void OnExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NODECANVAS_TASKS_ACTIONS_SENDMESSAGE_ONEXECUTE_OFFSET))(this);
		}
	};
}
