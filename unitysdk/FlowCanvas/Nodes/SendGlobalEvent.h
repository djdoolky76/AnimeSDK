#pragma once
#include "unitysdk/unitysdk.h"

namespace System { class String; }

#define FLOWCANVAS_NODES_SENDGLOBALEVENT_INVOKE_OFFSET UNITYSDK_OFFSET(0x1EBAC5B0)
#define FLOWCANVAS_NODES_SENDGLOBALEVENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1EBAC5C0)

namespace FlowCanvas::Nodes
{
	inline static constexpr unsigned int SendGlobalEvent_TypeDefinitionIndex = 29968;

	class SendGlobalEvent
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SENDGLOBALEVENT__CTOR_OFFSET))(this);
		}

		::System::Void Invoke(::System::String* eventName)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FLOWCANVAS_NODES_SENDGLOBALEVENT_INVOKE_OFFSET))(this, eventName);
		}
	};
}
