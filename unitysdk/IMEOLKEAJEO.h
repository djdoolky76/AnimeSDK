#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define IMEOLKEAJEO_JDAPDDEOCEA_OFFSET UNITYSDK_OFFSET(0x718D80)
#define IMEOLKEAJEO__CTOR_OFFSET UNITYSDK_OFFSET(0x359150)

inline static constexpr unsigned int IMEOLKEAJEO_TypeDefinitionIndex = 92393;

struct alignas(4) IMEOLKEAJEO
{
	::System::Int32 DJJGLILJKEA; // 0x10

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IMEOLKEAJEO__CTOR_OFFSET))(this, MGMDLMBEDJF);
	}

	::System::Boolean JDAPDDEOCEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IMEOLKEAJEO_JDAPDDEOCEA_OFFSET))(this);
	}
};
