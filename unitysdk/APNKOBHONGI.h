#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEOBNKPNPGP.h"

#define APNKOBHONGI_DIOOIKGBJCF_OFFSET UNITYSDK_OFFSET(0x126757D0)
#define APNKOBHONGI_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x126753E0)
#define APNKOBHONGI_HLNBJLLNIEK_OFFSET UNITYSDK_OFFSET(0x12675570)
#define APNKOBHONGI_NIBFINKDBJH_OFFSET UNITYSDK_OFFSET(0x12675860)
#define APNKOBHONGI_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x12675320)
#define APNKOBHONGI_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x126758F0)
#define APNKOBHONGI__CTOR_OFFSET UNITYSDK_OFFSET(0x126757C0)

inline static constexpr unsigned int APNKOBHONGI_TypeDefinitionIndex = 56953;

class APNKOBHONGI : public ::JEOBNKPNPGP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNKOBHONGI__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNKOBHONGI_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNKOBHONGI_HIABONACIDH_OFFSET))(this);
	}

	::System::Void HLNBJLLNIEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNKOBHONGI_HLNBJLLNIEK_OFFSET))(this);
	}

	::System::Void DIOOIKGBJCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNKOBHONGI_DIOOIKGBJCF_OFFSET))(this);
	}

	::System::Void NIBFINKDBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNKOBHONGI_NIBFINKDBJH_OFFSET))(this);
	}

	::System::Void OBBJKALBMFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APNKOBHONGI_OBBJKALBMFL_OFFSET))(this);
	}
};
