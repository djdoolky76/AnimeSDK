#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFCNEOOAHFC.h"
#include "unitysdk/FLLHHBJMAMO.h"

#define DNHNNBHDMDH_GHCGMKJFDGG_OFFSET UNITYSDK_OFFSET(0x1CCAC510)
#define DNHNNBHDMDH__CTOR_OFFSET UNITYSDK_OFFSET(0x1CCAC520)

inline static constexpr unsigned int DNHNNBHDMDH_TypeDefinitionIndex = 94317;

class DNHNNBHDMDH : public ::FLLHHBJMAMO
{
public:
	::System::Single JPMEPFNNDPF; // 0x10
	::System::Single HPHJGCFMCBI; // 0x14
	::System::Single KBKHLJPDCFO; // 0x18
	::System::Single ICNIPKFOFIP; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHNNBHDMDH__CTOR_OFFSET))(this);
	}

	::DFCNEOOAHFC GHCGMKJFDGG()
	{
		return ((::DFCNEOOAHFC(*)(::PVOID))((::PBYTE)hIl2Cpp + DNHNNBHDMDH_GHCGMKJFDGG_OFFSET))(this);
	}
};
