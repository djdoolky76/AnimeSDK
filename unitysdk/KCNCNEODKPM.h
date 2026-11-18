#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LICBHCFJLNF.h"

#define KCNCNEODKPM_ANEOCOIFDDJ_OFFSET UNITYSDK_OFFSET(0x1860A430)
#define KCNCNEODKPM_BBPCBEEHALC_OFFSET UNITYSDK_OFFSET(0x1860A3A0)
#define KCNCNEODKPM_FCMNHLDLJCI_OFFSET UNITYSDK_OFFSET(0x1860A2C0)
#define KCNCNEODKPM__CTOR_OFFSET UNITYSDK_OFFSET(0x1860A390)

inline static constexpr unsigned int KCNCNEODKPM_TypeDefinitionIndex = 71187;

class KCNCNEODKPM : public ::LICBHCFJLNF
{
public:
	::System::UInt32 MNAIIBHLHMA; // 0x10
	::System::UInt32 IFPCGBJDKCH; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNCNEODKPM__CTOR_OFFSET))(this);
	}

	::System::Void FCMNHLDLJCI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNCNEODKPM_FCMNHLDLJCI_OFFSET))(this);
	}

	static ::KCNCNEODKPM* BBPCBEEHALC()
	{
		return ((::KCNCNEODKPM*(*)())((::PBYTE)hIl2Cpp + KCNCNEODKPM_BBPCBEEHALC_OFFSET))();
	}

	::System::Void ANEOCOIFDDJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCNCNEODKPM_ANEOCOIFDDJ_OFFSET))(this);
	}
};
