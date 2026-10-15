#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_7CFBCD6AD964D348_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB4C8C0)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_7CFBCD6AD964D348_TypeDefinitionIndex = 10116;

	class NullableContextAttribute_7CFBCD6AD964D348 : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_7CFBCD6AD964D348_CTOR_OFFSET))(this, a1);
		}

	};
}
