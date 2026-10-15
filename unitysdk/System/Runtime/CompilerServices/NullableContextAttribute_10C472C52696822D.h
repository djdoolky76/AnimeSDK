#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_10C472C52696822D_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBD90F0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_10C472C52696822D_TypeDefinitionIndex = 7151;

	class NullableContextAttribute_10C472C52696822D : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_10C472C52696822D_CTOR_OFFSET))(this, a1);
		}

	};
}
