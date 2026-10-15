#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

#define SYSTEM_SECURITY_UNVERIFIABLECODEATTRIBUTE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0F3F00)

namespace System::Security
{
	class UnverifiableCodeAttribute : public ::System::Attribute
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_SECURITY_UNVERIFIABLECODEATTRIBUTE_CTOR_OFFSET))(this);
		}

	};
}
