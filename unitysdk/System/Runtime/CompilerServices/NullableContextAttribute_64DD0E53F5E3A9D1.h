#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_64DD0E53F5E3A9D1_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED873B0)

namespace System::Runtime::CompilerServices
{
	class NullableContextAttribute_64DD0E53F5E3A9D1 : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_64DD0E53F5E3A9D1_CTOR_OFFSET))(this, a1);
		}

	};
}
