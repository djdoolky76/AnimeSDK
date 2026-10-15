#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/EquipSelectUiData.h"
#include "unitysdk/RPG/Client/ActivityIdleLive/IdleLiveDecimal.h"
class CBNNMKNBLDI;
class EMPEDCMNCKD;
namespace RPG::Client { class UIController; }
namespace RPG::Client::ActivityIdleLive { class IdleLiveEquipmentData; }
namespace RPG::Client::Promises { class IPromise; }
namespace RPG::Client::Promises { class Promise; }

#define BCLCINADMBJ_CTOR_OFFSET UNITYSDK_OFFSET(0x162E3BF0)
#define BCLCINADMBJ_FKCPBFHNJGO_OFFSET UNITYSDK_OFFSET(0x162E3730)
#define BCLCINADMBJ_HGGABIEGFJB_OFFSET UNITYSDK_OFFSET(0x162E3B10)
#define BCLCINADMBJ_NDILIOOMBII_OFFSET UNITYSDK_OFFSET(0x162E37F0)
#define BCLCINADMBJ_OFFAMCNEAAH_OFFSET UNITYSDK_OFFSET(0x162E2A60)
#define BCLCINADMBJ_PDPDAJDEKCD_OFFSET UNITYSDK_OFFSET(0x162E3980)
#define BCLCINADMBJ_PFCNAKKHFOA_OFFSET UNITYSDK_OFFSET(0x162E2F10)
#define BCLCINADMBJ___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET UNITYSDK_OFFSET(0x162E3C00)
#define BCLCINADMBJ___TRYEXITEQUIPSELECTDIALOG_B__8_0_OFFSET UNITYSDK_OFFSET(0x162E3C30)

	class BCLCINADMBJ : public ::System::Object
	{
	public:
		::RPG::Client::UIController* PGHCMIHLPHJ; // 0x10
		::RPG::Client::ActivityIdleLive::IdleLiveEquipmentData* NDCHFDJLAML; // 0x18
		::RPG::Client::Promises::Promise* MIOMNCPCKEL; // 0x20
		::RPG::Client::UIController* DGOJKJCOIHF; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLCINADMBJ_CTOR_OFFSET))(this);
		}

		::System::Void OFFAMCNEAAH(::CBNNMKNBLDI* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
		{
			return ((::System::Void(*)(::PVOID, ::CBNNMKNBLDI*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + BCLCINADMBJ_OFFAMCNEAAH_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::ActivityIdleLive::EquipSelectUiData PFCNAKKHFOA(::EMPEDCMNCKD* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a4, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal a5)
		{
			return ((::RPG::Client::ActivityIdleLive::EquipSelectUiData(*)(::PVOID, ::EMPEDCMNCKD*, ::System::UInt32, ::System::UInt32, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal, ::RPG::Client::ActivityIdleLive::IdleLiveDecimal))((::PBYTE)hIl2Cpp + BCLCINADMBJ_PFCNAKKHFOA_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::RPG::Client::Promises::IPromise* FKCPBFHNJGO(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BCLCINADMBJ_FKCPBFHNJGO_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* NDILIOOMBII(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BCLCINADMBJ_NDILIOOMBII_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Promises::IPromise* PDPDAJDEKCD(::System::Boolean a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::Promises::IPromise*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + BCLCINADMBJ_PDPDAJDEKCD_OFFSET))(this, a1, a2);
		}

		::System::Void HGGABIEGFJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLCINADMBJ_HGGABIEGFJB_OFFSET))(this);
		}

		::System::Void __TryExitEquipGotDialog_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLCINADMBJ___TRYEXITEQUIPGOTDIALOG_B__7_0_OFFSET))(this);
		}

		::System::Void __TryExitEquipSelectDialog_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCLCINADMBJ___TRYEXITEQUIPSELECTDIALOG_B__8_0_OFFSET))(this);
		}

	};
