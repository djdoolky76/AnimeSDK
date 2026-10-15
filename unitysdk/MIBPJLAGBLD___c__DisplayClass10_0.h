#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFNMFGDGMA;
class MIBPJLAGBLD;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace System { class Action; }

#define MIBPJLAGBLD___C__DISPLAYCLASS10_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB94AD10)
#define MIBPJLAGBLD___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__0_OFFSET UNITYSDK_OFFSET(0xB94B270)
#define MIBPJLAGBLD___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__1_OFFSET UNITYSDK_OFFSET(0xB94B400)

inline static constexpr unsigned int MIBPJLAGBLD___c__DisplayClass10_0_TypeDefinitionIndex = 76461;

	class MIBPJLAGBLD___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::EEFNMFGDGMA* loanServerSyncData; // 0x10
		::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x18
		::MIBPJLAGBLD* __4__this; // 0x20
		::System::Action* __9__1; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS10_0_CTOR_OFFSET))(this);
		}

		::System::Void __ShowLoanPerformence_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__0_OFFSET))(this);
		}

		::System::Void __ShowLoanPerformence_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS10_0___SHOWLOANPERFORMENCE_B__1_OFFSET))(this);
		}

	};
