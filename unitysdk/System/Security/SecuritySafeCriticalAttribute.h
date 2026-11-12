#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_SECURITY_SECURITYSAFECRITICALATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D27B040)

namespace System::Security
{
	inline static constexpr unsigned int SecuritySafeCriticalAttribute_TypeDefinitionIndex = 940;

	class SecuritySafeCriticalAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_SECURITYSAFECRITICALATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
