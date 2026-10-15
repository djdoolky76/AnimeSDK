#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define MONO_UTIL_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1EFD3C00)

namespace Mono::Util
{
	class MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + MONO_UTIL_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
