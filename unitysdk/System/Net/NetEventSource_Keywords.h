#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define SYSTEM_NET_NETEVENTSOURCE_KEYWORDS__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0C2A50)

namespace System::Net
{
	inline static constexpr unsigned int NetEventSource_Keywords_TypeDefinitionIndex = 3257;

	class NetEventSource_Keywords : public ::System::Object
	{
	public:
		// static const ::System::Diagnostics::Tracing::EventKeywords Default = 0x1; // 0x0
		// static const ::System::Diagnostics::Tracing::EventKeywords Debug = 0x2; // 0x0
		// static const ::System::Diagnostics::Tracing::EventKeywords EnterExit = 0x4; // 0x0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_NET_NETEVENTSOURCE_KEYWORDS__CTOR_OFFSET))(this);
		}
	};
}
