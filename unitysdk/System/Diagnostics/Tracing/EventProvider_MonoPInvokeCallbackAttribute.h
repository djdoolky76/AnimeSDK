#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E18B0)

namespace System::Diagnostics::Tracing
{
	class EventProvider_MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_TRACING_EVENTPROVIDER_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
