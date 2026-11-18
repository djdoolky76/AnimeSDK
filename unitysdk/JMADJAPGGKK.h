#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGELKBLKFHE.h"

#define JMADJAPGGKK_DOPGAFCKMNF_OFFSET UNITYSDK_OFFSET(0x155A44D0)
#define JMADJAPGGKK_ONSHUTDOWN_OFFSET UNITYSDK_OFFSET(0x155A4460)
#define JMADJAPGGKK__CTOR_OFFSET UNITYSDK_OFFSET(0x155A44C0)

inline static constexpr unsigned int JMADJAPGGKK_TypeDefinitionIndex = 75720;

class JMADJAPGGKK : public ::JGELKBLKFHE
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMADJAPGGKK__CTOR_OFFSET))(this);
	}

	::System::Void OnShutDown()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMADJAPGGKK_ONSHUTDOWN_OFFSET))(this);
	}

	::System::Void DOPGAFCKMNF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMADJAPGGKK_DOPGAFCKMNF_OFFSET))(this);
	}
};
