#pragma once
#include "unitysdk/unitysdk.h"

#define MMKCMEDLCMG_CKMPKBIJKGK_OFFSET UNITYSDK_OFFSET(0x12178B60)
#define MMKCMEDLCMG_JILCNMBFAGN_OFFSET UNITYSDK_OFFSET(0x12175FE0)
#define MMKCMEDLCMG_KMMMGAAGOJC_OFFSET UNITYSDK_OFFSET(0x12178BF0)
#define MMKCMEDLCMG_PMJHAFBNOHB_OFFSET UNITYSDK_OFFSET(0x12174620)
#define MMKCMEDLCMG__CTOR_OFFSET UNITYSDK_OFFSET(0x121737C0)

inline static constexpr unsigned int MMKCMEDLCMG_TypeDefinitionIndex = 51983;

class MMKCMEDLCMG
{
public:
	// static const ::System::String* NACNGMCPOAG; // 0x0
	// static const ::System::String* BJMBIIIHDDN; // 0x0
	// static const ::System::String* CCMOPDJCIHC; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKCMEDLCMG__CTOR_OFFSET))(this);
	}

	::System::Boolean PMJHAFBNOHB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKCMEDLCMG_PMJHAFBNOHB_OFFSET))(this);
	}

	::System::Void JILCNMBFAGN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKCMEDLCMG_JILCNMBFAGN_OFFSET))(this);
	}

	::System::Void CKMPKBIJKGK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKCMEDLCMG_CKMPKBIJKGK_OFFSET))(this);
	}

	::System::Boolean KMMMGAAGOJC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MMKCMEDLCMG_KMMMGAAGOJC_OFFSET))(this);
	}
};
