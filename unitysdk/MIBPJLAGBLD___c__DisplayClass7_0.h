#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class EEFNMFGDGMA;
class MIBPJLAGBLD;
namespace RPG::Client::CakeRace { class CakeRaceLoanPrepareData; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define MIBPJLAGBLD___C__DISPLAYCLASS7_0_CTOR_OFFSET UNITYSDK_OFFSET(0x1A389FC0)
#define MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET UNITYSDK_OFFSET(0x1A38B010)
#define MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET UNITYSDK_OFFSET(0x1A38B0B0)

inline static constexpr unsigned int MIBPJLAGBLD___c__DisplayClass7_0_TypeDefinitionIndex = 78793;

	class MIBPJLAGBLD___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::RPG::Client::CakeRace::CakeRaceLoanPrepareData* prepareData; // 0x10
		::MIBPJLAGBLD* __4__this; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS7_0_CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::EEFNMFGDGMA*>* _ConfirmLoan_b__0()
		{
			return ((::RPG::Client::Promises::IPromise_1<::EEFNMFGDGMA*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__0_OFFSET))(this);
		}

		::System::Void _ConfirmLoan_b__1(::EEFNMFGDGMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EEFNMFGDGMA*))((::PBYTE)hIl2Cpp + MIBPJLAGBLD___C__DISPLAYCLASS7_0__CONFIRMLOAN_B__1_OFFSET))(this, a1);
		}

	};
