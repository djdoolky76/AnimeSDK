#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EPEHJCIMAEI_DEBHDMLJLKB_OFFSET UNITYSDK_OFFSET(0x14AB4CB0)
#define EPEHJCIMAEI_DEHEGACADBE_OFFSET UNITYSDK_OFFSET(0x14AB4CC0)
#define EPEHJCIMAEI_EBMPPMHKCAA_OFFSET UNITYSDK_OFFSET(0x14AB4D10)
#define EPEHJCIMAEI_JEAIFDNPIAH_OFFSET UNITYSDK_OFFSET(0x14AB4CD0)
#define EPEHJCIMAEI_PHOADBJGFBE_OFFSET UNITYSDK_OFFSET(0x14AB4D60)
#define EPEHJCIMAEI__CTOR_OFFSET UNITYSDK_OFFSET(0x14AB4D50)

inline static constexpr unsigned int EPEHJCIMAEI_TypeDefinitionIndex = 92216;

class EPEHJCIMAEI : public ::System::Object
{
public:
	::System::Int32 AMLEPKBLJDA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEHJCIMAEI__CTOR_OFFSET))(this);
	}

	::System::Boolean DEBHDMLJLKB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEHJCIMAEI_DEBHDMLJLKB_OFFSET))(this);
	}

	::System::Boolean DEHEGACADBE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEHJCIMAEI_DEHEGACADBE_OFFSET))(this);
	}

	::System::Void JEAIFDNPIAH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEHJCIMAEI_JEAIFDNPIAH_OFFSET))(this);
	}

	::System::Void EBMPPMHKCAA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEHJCIMAEI_EBMPPMHKCAA_OFFSET))(this);
	}

	::System::Void PHOADBJGFBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPEHJCIMAEI_PHOADBJGFBE_OFFSET))(this);
	}
};
