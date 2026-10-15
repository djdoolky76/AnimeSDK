#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_19A65C99E0FEC741_CTOR_OFFSET UNITYSDK_OFFSET(0x1BB61340)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullableContextAttribute_19A65C99E0FEC741_TypeDefinitionIndex = 6164;

	class NullableContextAttribute_19A65C99E0FEC741 : public ::System::Attribute
	{
	public:
		::System::Byte Flag; // 0x10
		::System::Void _ctor(::System::Byte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Byte))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLECONTEXTATTRIBUTE_19A65C99E0FEC741_CTOR_OFFSET))(this, a1);
		}

	};
}
