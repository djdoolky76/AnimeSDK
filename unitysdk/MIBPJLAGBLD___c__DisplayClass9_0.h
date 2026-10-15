#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFNMFGDGMA;
class MIBPJLAGBLD;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }

#define MIBPJLAGBLD___C__DISPLAYCLASS9_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB950A90)
#define MIBPJLAGBLD___C__DISPLAYCLASS9_0___TRYSHOWLOANPERFORMENCE_B__0_OFFSET UNITYSDK_OFFSET(0xB9515F0)

	class MIBPJLAGBLD___c__DisplayClass9_0 : public ::System::Object
	{
	public:
		::EEFNMFGDGMA* loanServerSyncData; // 0x10
		::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x18
		::MIBPJLAGBLD* __4__this; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS9_0_CTOR_OFFSET))(this);
		}

		::System::Void __TryShowLoanPerformence_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS9_0___TRYSHOWLOANPERFORMENCE_B__0_OFFSET))(this);
		}

	};
