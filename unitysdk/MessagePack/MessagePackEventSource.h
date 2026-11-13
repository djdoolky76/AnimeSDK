#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Diagnostics/Tracing/EventSource.h"
namespace MessagePack { class MessagePackEventSource; }
namespace System { class String; }

#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_CCTOR_OFFSET UNITYSDK_OFFSET(0x174D03F0)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x174D03A0)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTART_OFFSET UNITYSDK_OFFSET(0x174B4C90)
#define MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET UNITYSDK_OFFSET(0x174D03E0)

namespace MessagePack
{
	inline static constexpr unsigned int MessagePackEventSource_TypeDefinitionIndex = 7180;

	class MessagePackEventSource : public ::System::Diagnostics::Tracing::EventSource
	{
	public:
		static ::MessagePack::MessagePackEventSource** StaticGet_Instance()
		{
			return (::MessagePack::MessagePackEventSource**)UnitySDK::FromName("MessagePack", "MessagePackEventSource")->GetStaticField(0x2DCD0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_CCTOR_OFFSET))();
		}

		::System::Void FormatterDynamicallyGeneratedStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTART_OFFSET))(this);
		}

		::System::Void FormatterDynamicallyGeneratedStop(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESSAGEPACK_MESSAGEPACKEVENTSOURCE_FORMATTERDYNAMICALLYGENERATEDSTOP_OFFSET))(this, a1);
		}

	};
}
