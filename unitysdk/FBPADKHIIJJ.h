#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipSelectUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
class CBNNMKNBLDI;
class EMPEDCMNCKD;
namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityIdleLive { class SpecialEquip; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FBPADKHIIJJ_CTOR_OFFSET UNITYSDK_OFFSET(0x156AD9D0)
#define FBPADKHIIJJ_FKCPBFHNJGO_OFFSET UNITYSDK_OFFSET(0x156AD690)
#define FBPADKHIIJJ_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0x156AD880)
#define FBPADKHIIJJ_NDILIOOMBII_OFFSET UNITYSDK_OFFSET(0x156AD6F0)
#define FBPADKHIIJJ_OFFAMCNEAAH_OFFSET UNITYSDK_OFFSET(0x156AC210)
#define FBPADKHIIJJ_PDAFKOEHLLP_OFFSET UNITYSDK_OFFSET(0x156AD010)
#define FBPADKHIIJJ_PFCNAKKHFOA_OFFSET UNITYSDK_OFFSET(0x156AC9C0)
#define FBPADKHIIJJ___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0x156AD9E0)

inline static constexpr unsigned int FBPADKHIIJJ_TypeDefinitionIndex = 75233;

	class FBPADKHIIJJ : public ::System::Object
	{
	public:
		::RPG::Client::UIController* PGHCMIHLPHJ; // 0x10
		::RPG::Client::ActivityIdleLive::SpecialEquip* NDCHFDJLAML; // 0x18
		::RPG::Client::Promises::Promise* MIOMNCPCKEL; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPADKHIIJJ_CTOR_OFFSET))(this);
		}

		::System::Void OFFAMCNEAAH(::CBNNMKNBLDI* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + FBPADKHIIJJ_OFFAMCNEAAH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::ActivityIdleLive::EquipSelectUiData PFCNAKKHFOA(::EMPEDCMNCKD* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
		{
			return ((::RPG::Client::ActivityIdleLive::EquipSelectUiData(*)(::PVOID, ::EMPEDCMNCKD*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + FBPADKHIIJJ_PFCNAKKHFOA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Collections::Generic::List_1<::System::Int32>* PDAFKOEHLLP(::RPG::Client::ActivityIdleLive::SpecialEquip* a1, ::RPG::Client::ActivityIdleLive::SpecialEquip* a2)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::RPG::Client::ActivityIdleLive::SpecialEquip*, ::RPG::Client::ActivityIdleLive::SpecialEquip*))((::PBYTE)hIl2Cpp + FBPADKHIIJJ_PDAFKOEHLLP_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* FKCPBFHNJGO(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FBPADKHIIJJ_FKCPBFHNJGO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* NDILIOOMBII(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + FBPADKHIIJJ_NDILIOOMBII_OFFSET))(this, a1, a2);
		}

		::System::Void HGGABIEGFJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPADKHIIJJ_HGGABIEGFJB_OFFSET))(this);
		}

		::System::Void __TryExitEquipGotDialog_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBPADKHIIJJ___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET))(this);
		}

	};
