#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_D09382D509CA7BB1_CTOR_OFFSET UNITYSDK_OFFSET(0x1DD99FE0)

namespace System::Runtime::CompilerServices
{
	class NullableContextAttribute_D09382D509CA7BB1 : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_D09382D509CA7BB1_CTOR_OFFSET))(this, a1);
		}

	};
}
