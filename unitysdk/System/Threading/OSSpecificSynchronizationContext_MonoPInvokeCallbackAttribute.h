#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C1498A0)

namespace System::Threading
{
	class OSSpecificSynchronizationContext_MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_THREADING_OSSPECIFICSYNCHRONIZATIONCONTEXT_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
