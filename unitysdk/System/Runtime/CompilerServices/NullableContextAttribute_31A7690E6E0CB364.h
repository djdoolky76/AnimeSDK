#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_31A7690E6E0CB364_CTOR_OFFSET UNITYSDK_OFFSET(0x1C57E350)

namespace System::Runtime::CompilerServices
{
	class NullableContextAttribute_31A7690E6E0CB364 : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_31A7690E6E0CB364_CTOR_OFFSET))(this, a1);
		}

	};
}
