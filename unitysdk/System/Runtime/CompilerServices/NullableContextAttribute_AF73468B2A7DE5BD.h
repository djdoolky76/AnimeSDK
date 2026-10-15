#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_AF73468B2A7DE5BD_CTOR_OFFSET UNITYSDK_OFFSET(0xE9E13D0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_AF73468B2A7DE5BD_TypeDefinitionIndex = 47060;

	class NullableContextAttribute_AF73468B2A7DE5BD : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_AF73468B2A7DE5BD_CTOR_OFFSET))(this, a1);
		}

	};
}
