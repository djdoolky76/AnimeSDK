#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEPUBLICONLYATTRIBUTE_E1EC333C362B048D_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED59A60)

namespace System::Runtime::CompilerServices
{
	inline static constexpr unsigned int NullablePublicOnlyAttribute_E1EC333C362B048D_TypeDefinitionIndex = 6575;

	class NullablePublicOnlyAttribute_E1EC333C362B048D : public ::System::Attribute
	{
	public:
		::System::Boolean IncludesInternals; // 0x10
		::System::Void _ctor(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_RUNTIME_COMPILERSERVICES_NULLABLEPUBLICONLYATTRIBUTE_E1EC333C362B048D_CTOR_OFFSET))(this, a1);
		}

	};
}
