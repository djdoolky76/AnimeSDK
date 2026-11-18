#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JEOBNKPNPGP.h"

#define HPGJEMENPMP_DIOOIKGBJCF_OFFSET UNITYSDK_OFFSET(0x1538A0C0)
#define HPGJEMENPMP_HIABONACIDH_OFFSET UNITYSDK_OFFSET(0x15389BB0)
#define HPGJEMENPMP_HLNBJLLNIEK_OFFSET UNITYSDK_OFFSET(0x15389D40)
#define HPGJEMENPMP_NIBFINKDBJH_OFFSET UNITYSDK_OFFSET(0x15389FA0)
#define HPGJEMENPMP_NKPAGONEHCH_OFFSET UNITYSDK_OFFSET(0x15389AF0)
#define HPGJEMENPMP_OBBJKALBMFL_OFFSET UNITYSDK_OFFSET(0x1538A030)
#define HPGJEMENPMP__CTOR_OFFSET UNITYSDK_OFFSET(0x15389F90)

inline static constexpr unsigned int HPGJEMENPMP_TypeDefinitionIndex = 42382;

class HPGJEMENPMP : public ::JEOBNKPNPGP
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGJEMENPMP__CTOR_OFFSET))(this);
	}

	::System::Void NKPAGONEHCH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGJEMENPMP_NKPAGONEHCH_OFFSET))(this);
	}

	::System::Void HIABONACIDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGJEMENPMP_HIABONACIDH_OFFSET))(this);
	}

	::System::Void HLNBJLLNIEK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGJEMENPMP_HLNBJLLNIEK_OFFSET))(this);
	}

	::System::Void NIBFINKDBJH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGJEMENPMP_NIBFINKDBJH_OFFSET))(this);
	}

	::System::Void OBBJKALBMFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGJEMENPMP_OBBJKALBMFL_OFFSET))(this);
	}

	::System::Void DIOOIKGBJCF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HPGJEMENPMP_DIOOIKGBJCF_OFFSET))(this);
	}
};
