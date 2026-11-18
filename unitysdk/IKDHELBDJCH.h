#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FJIBNMPHJGF.h"

#define IKDHELBDJCH_BHMBCHALEDE_OFFSET UNITYSDK_OFFSET(0x15A98550)
#define IKDHELBDJCH_EIIAJNKGDNC_OFFSET UNITYSDK_OFFSET(0x15A986F0)
#define IKDHELBDJCH_HEIMCOKAFHE_OFFSET UNITYSDK_OFFSET(0x15A986D0)
#define IKDHELBDJCH_INFNBBALMAA_OFFSET UNITYSDK_OFFSET(0x15A982E0)
#define IKDHELBDJCH_JKCBPADALFG_OFFSET UNITYSDK_OFFSET(0x15A98750)
#define IKDHELBDJCH_ODIPGADGPCI_OFFSET UNITYSDK_OFFSET(0x15A985B0)
#define IKDHELBDJCH_PKBLNCELIID_OFFSET UNITYSDK_OFFSET(0x15A98610)
#define IKDHELBDJCH_PPLAJDPBHNC_OFFSET UNITYSDK_OFFSET(0x15A98670)

inline static constexpr unsigned int IKDHELBDJCH_TypeDefinitionIndex = 13693;

class IKDHELBDJCH : public ::FJIBNMPHJGF
{
public:
	::Il2CppArray<::System::Single>* CFGKMKHMLHM; // 0x78

	::System::Single INFNBBALMAA(::System::Int32 EEMBCHLMOLG)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IKDHELBDJCH_INFNBBALMAA_OFFSET))(this, EEMBCHLMOLG);
	}

	::System::Single BHMBCHALEDE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHELBDJCH_BHMBCHALEDE_OFFSET))(this);
	}

	::System::Single ODIPGADGPCI()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHELBDJCH_ODIPGADGPCI_OFFSET))(this);
	}

	::System::Single PKBLNCELIID()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHELBDJCH_PKBLNCELIID_OFFSET))(this);
	}

	::System::Single PPLAJDPBHNC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHELBDJCH_PPLAJDPBHNC_OFFSET))(this);
	}

	::System::Single HEIMCOKAFHE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHELBDJCH_HEIMCOKAFHE_OFFSET))(this);
	}

	::System::Single EIIAJNKGDNC()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHELBDJCH_EIIAJNKGDNC_OFFSET))(this);
	}

	::System::Single JKCBPADALFG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHELBDJCH_JKCBPADALFG_OFFSET))(this);
	}
};
