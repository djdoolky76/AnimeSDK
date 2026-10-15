#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_B2B37C544DC7BF18_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBBDDA0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_B2B37C544DC7BF18_TypeDefinitionIndex = 10170;

	class NullableContextAttribute_B2B37C544DC7BF18 : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_B2B37C544DC7BF18_CTOR_OFFSET))(this, a1);
		}

	};
}
