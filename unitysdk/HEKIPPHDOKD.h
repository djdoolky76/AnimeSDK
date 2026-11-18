#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KPKLLKKBMDA.h"

#define HEKIPPHDOKD_EEOOAGEDKLM_OFFSET UNITYSDK_OFFSET(0x17E41E50)
#define HEKIPPHDOKD_LCJEELHBNHG_OFFSET UNITYSDK_OFFSET(0x17E41BF0)
#define HEKIPPHDOKD__CTOR_OFFSET UNITYSDK_OFFSET(0x17E41E00)

inline static constexpr unsigned int HEKIPPHDOKD_TypeDefinitionIndex = 81040;

class HEKIPPHDOKD : public ::KPKLLKKBMDA
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKIPPHDOKD__CTOR_OFFSET))(this);
	}

	::System::Void LCJEELHBNHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKIPPHDOKD_LCJEELHBNHG_OFFSET))(this);
	}

	::System::Void EEOOAGEDKLM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEKIPPHDOKD_EEOOAGEDKLM_OFFSET))(this);
	}
};
