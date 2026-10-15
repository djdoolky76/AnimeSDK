#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEPUBLICONLYATTRIBUTE_3B2AB4D9A1F113D1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BBDE590)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullablePublicOnlyAttribute_3B2AB4D9A1F113D1_TypeDefinitionIndex = 10171;

	class NullablePublicOnlyAttribute_3B2AB4D9A1F113D1 : public ::System::Attribute
	{
	public:
		::System::Boolean IncludesInternals; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEPUBLICONLYATTRIBUTE_3B2AB4D9A1F113D1_CTOR_OFFSET))(this, a1);
		}

	};
}
