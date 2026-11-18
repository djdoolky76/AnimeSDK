#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBMIHDHMCKI.h"
#include "unitysdk/System/ValueType.h"

#define LENLINBGJBF_AANFFNKGLDK_OFFSET UNITYSDK_OFFSET(0x8D42D0)
#define LENLINBGJBF_BNJICKBCOEC_OFFSET UNITYSDK_OFFSET(0x52DC40)
#define LENLINBGJBF_CEDMBGDBMKP_OFFSET UNITYSDK_OFFSET(0x8D42E0)
#define LENLINBGJBF_GDHAPAGGPOD_OFFSET UNITYSDK_OFFSET(0x8D4060)
#define LENLINBGJBF_JFOPOBJOBMO_OFFSET UNITYSDK_OFFSET(0x8D4120)
#define LENLINBGJBF_KGLDOGLGELM_OFFSET UNITYSDK_OFFSET(0x8D4000)
#define LENLINBGJBF_MAKFEEODOPE_OFFSET UNITYSDK_OFFSET(0x3E3C90)
#define LENLINBGJBF_MDOMPFBKIFP_OFFSET UNITYSDK_OFFSET(0x8D4260)
#define LENLINBGJBF_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x8D4210)
#define LENLINBGJBF_OKEHGHFELOB_OFFSET UNITYSDK_OFFSET(0x8D4190)
#define LENLINBGJBF_OLJHFHANJMP_OFFSET UNITYSDK_OFFSET(0x8D40C0)
#define LENLINBGJBF_PHLFAGECGIL_OFFSET UNITYSDK_OFFSET(0x64AE60)
#define LENLINBGJBF_PJLCEJEKINF_OFFSET UNITYSDK_OFFSET(0x8D4200)

inline static constexpr unsigned int LENLINBGJBF_TypeDefinitionIndex = 93805;

struct alignas(4) LENLINBGJBF
{
	::System::UInt32 KCENECAAFDB; // 0x10
	::System::Single JCDNPDPENDA; // 0x14
	::PBMIHDHMCKI FEFHPFAMKDP; // 0x18

	::System::UInt32 KGLDOGLGELM(::System::UInt32 IDBLKJLCHGJ)
	{
		return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LENLINBGJBF_KGLDOGLGELM_OFFSET))(this, IDBLKJLCHGJ);
	}

	::System::Boolean PHLFAGECGIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_PHLFAGECGIL_OFFSET))(this);
	}

	::PBMIHDHMCKI MAKFEEODOPE()
	{
		return ((::PBMIHDHMCKI(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_MAKFEEODOPE_OFFSET))(this);
	}

	::System::Boolean BNJICKBCOEC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_BNJICKBCOEC_OFFSET))(this);
	}

	::System::Boolean GDHAPAGGPOD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_GDHAPAGGPOD_OFFSET))(this);
	}

	::System::Boolean OLJHFHANJMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_OLJHFHANJMP_OFFSET))(this);
	}

	::System::Boolean JFOPOBJOBMO(::System::Single EIGJANKGJNA)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LENLINBGJBF_JFOPOBJOBMO_OFFSET))(this, EIGJANKGJNA);
	}

	::System::Void OKEHGHFELOB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LENLINBGJBF_OKEHGHFELOB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Boolean PJLCEJEKINF(::System::UInt32 IDBLKJLCHGJ, ::System::UInt32 ELABNPKPIEP)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + LENLINBGJBF_PJLCEJEKINF_OFFSET))(this, IDBLKJLCHGJ, ELABNPKPIEP);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean MDOMPFBKIFP(::System::UInt32 BOCFPJKOPMF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LENLINBGJBF_MDOMPFBKIFP_OFFSET))(this, BOCFPJKOPMF);
	}

	::System::Boolean AANFFNKGLDK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_AANFFNKGLDK_OFFSET))(this);
	}

	::System::Boolean CEDMBGDBMKP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LENLINBGJBF_CEDMBGDBMKP_OFFSET))(this);
	}
};
