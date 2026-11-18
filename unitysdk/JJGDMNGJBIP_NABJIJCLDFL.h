#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UserLocalDataItem_SummerTideBeachStageLocalData.h"
#include "unitysdk/System/Object.h"

class JJGDMNGJBIP;
class JJGDMNGJBIP_LLHPFBMNJCJ;

#define JJGDMNGJBIP_NABJIJCLDFL_NGHAKJHJKMM_OFFSET UNITYSDK_OFFSET(0x17B28A80)
#define JJGDMNGJBIP_NABJIJCLDFL__CTOR_OFFSET UNITYSDK_OFFSET(0x17B28A70)

inline static constexpr unsigned int JJGDMNGJBIP_NABJIJCLDFL_TypeDefinitionIndex = 68394;

class JJGDMNGJBIP_NABJIJCLDFL : public ::System::Object
{
public:
	::JJGDMNGJBIP_LLHPFBMNJCJ* LJBPECKCCEA; // 0x10
	::JJGDMNGJBIP* KLHPEBKNIFB; // 0x18
	::MoleMole::UserLocalDataItem_SummerTideBeachStageLocalData BNHIFIHNCHD; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGDMNGJBIP_NABJIJCLDFL__CTOR_OFFSET))(this);
	}

	::System::Void NGHAKJHJKMM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGDMNGJBIP_NABJIJCLDFL_NGHAKJHJKMM_OFFSET))(this);
	}
};
