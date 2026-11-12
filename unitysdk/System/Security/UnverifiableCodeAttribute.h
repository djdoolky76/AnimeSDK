#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_SECURITY_UNVERIFIABLECODEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D27B050)

namespace System::Security
{
	inline static constexpr unsigned int UnverifiableCodeAttribute_TypeDefinitionIndex = 938;

	class UnverifiableCodeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UNVERIFIABLECODEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
