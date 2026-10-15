#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_070DAF8871E000BD_CTOR_OFFSET UNITYSDK_OFFSET(0x1C426720)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_070DAF8871E000BD_TypeDefinitionIndex = 35891;

	class NullableContextAttribute_070DAF8871E000BD : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_070DAF8871E000BD_CTOR_OFFSET))(this, a1);
		}

	};
}
