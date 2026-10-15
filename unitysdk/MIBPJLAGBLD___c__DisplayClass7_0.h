#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFNMFGDGMA;
class MIBPJLAGBLD;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { class IPromise; }

#define MIBPJLAGBLD___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0xB9504D0)
#define MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET UNITYSDK_OFFSET(0xB951520)
#define MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET UNITYSDK_OFFSET(0xB9515C0)

	class MIBPJLAGBLD___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MIBPJLAGBLD* __4__this; // 0x10
		::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise* _ConfirmLoan_b__0()
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET))(this);
		}

		::System::Void _ConfirmLoan_b__1(::EEFNMFGDGMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEFNMFGDGMA*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET))(this, a1);
		}

	};
