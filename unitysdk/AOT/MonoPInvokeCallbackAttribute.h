#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"
namespace System { class Type; }

#define AOT_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1F3C35B0)

namespace AOT
{
	class MonoPInvokeCallbackAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor(::System::Type* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + AOT_MONOPINVOKECALLBACKATTRIBUTE_CTOR_OFFSET))(this, a1);
		}

	};
}
