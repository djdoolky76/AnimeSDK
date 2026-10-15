#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/InControl/InputDeviceClass.h"
#include "unitysdk/RPG/Client/FateRin/Battle/FateRinBattleHudInputBrainBase.h"
class ALIACDLNBJB;
class HNEICEMPOPC;
class IBNJKFGBNGJ;
class OBJANKHLNGO;
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudCardAreaViewModel; }
namespace RPG::Client::FateRin::Battle { class IFateRinBattleHudInputSource; }
namespace RPG::Client::FateRin::Battle { class IFateRinCardHitTestService; }

#define BILDMDIPIHH_AGAFLCIPHHD_OFFSET UNITYSDK_OFFSET(0xB4B2D40)
#define BILDMDIPIHH_BAKHOKFCNDD_OFFSET UNITYSDK_OFFSET(0xB4B2B20)
#define BILDMDIPIHH_CIMOAHOLHME_OFFSET UNITYSDK_OFFSET(0xB4B3200)
#define BILDMDIPIHH_CTOR_OFFSET UNITYSDK_OFFSET(0xB4B14C0)
#define BILDMDIPIHH_DDHJMAJNEBN_OFFSET UNITYSDK_OFFSET(0xB4B2640)
#define BILDMDIPIHH_DNCAJHNJIAB_OFFSET UNITYSDK_OFFSET(0xB4B2810)
#define BILDMDIPIHH_ENGILBAGMNF_1_OFFSET UNITYSDK_OFFSET(0xB4B2880)
#define BILDMDIPIHH_ENGILBAGMNF_OFFSET UNITYSDK_OFFSET(0xB4B1BB0)
#define BILDMDIPIHH_FEKIIMFELHH_OFFSET UNITYSDK_OFFSET(0xB4B2E70)
#define BILDMDIPIHH_FLGOENCPPKJ_OFFSET UNITYSDK_OFFSET(0xB4B2CF0)
#define BILDMDIPIHH_GEGHPNAHIBK_OFFSET UNITYSDK_OFFSET(0xB4B2BA0)
#define BILDMDIPIHH_HLONHKDPMJO_OFFSET UNITYSDK_OFFSET(0xB4B30F0)
#define BILDMDIPIHH_IGMBNAMOFBI_OFFSET UNITYSDK_OFFSET(0xB4B2C00)
#define BILDMDIPIHH_JILAENMKDLN_OFFSET UNITYSDK_OFFSET(0xB4B2F70)
#define BILDMDIPIHH_JKDDKNOPAFG_OFFSET UNITYSDK_OFFSET(0xB4B22A0)
#define BILDMDIPIHH_NDKLFHLCMFL_OFFSET UNITYSDK_OFFSET(0xB4B26D0)
#define BILDMDIPIHH_OEDJAIMMIIM_OFFSET UNITYSDK_OFFSET(0xB4B2440)
#define BILDMDIPIHH_OEDKOPDEDJH_OFFSET UNITYSDK_OFFSET(0xB4B23C0)
#define BILDMDIPIHH_OIALFFNHENI_OFFSET UNITYSDK_OFFSET(0xB4B2560)
#define BILDMDIPIHH_OJCJCEKMNBB_OFFSET UNITYSDK_OFFSET(0xB4B2790)
#define BILDMDIPIHH__ONINPUTDEVICECLASSSWITCH_OFFSET UNITYSDK_OFFSET(0xB4B2200)
#define BILDMDIPIHH__ONINPUTINTERRUPTED_OFFSET UNITYSDK_OFFSET(0xB4B3290)
#define BILDMDIPIHH__SUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0xB4B14E0)
#define BILDMDIPIHH__UNSUBSCRIBEEVENTS_OFFSET UNITYSDK_OFFSET(0xB4B1C00)

	class BILDMDIPIHH : public ::RPG::Client::FateRin::Battle::FateRinBattleHudInputBrainBase
	{
	public:
		::OBJANKHLNGO* GJALMBBNNOF; // 0x40
		::HNEICEMPOPC* DCAAPLCBHPF; // 0x48
		::System::Void _ctor(::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel* a1, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService* a2, ::ALIACDLNBJB* a3, ::OBJANKHLNGO* a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudCardAreaViewModel*, ::RPG::Client::FateRin::Battle::IFateRinCardHitTestService*, ::ALIACDLNBJB*, ::OBJANKHLNGO*))((::PBYTE)hIl2Cpp + BILDMDIPIHH_CTOR_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _SubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + BILDMDIPIHH__SUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _UnsubscribeEvents(::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::FateRin::Battle::IFateRinBattleHudInputSource*))((::PBYTE)hIl2Cpp + BILDMDIPIHH__UNSUBSCRIBEEVENTS_OFFSET))(this, a1);
		}

		::System::Void _OnInputDeviceClassSwitch(::InControl::InputDeviceClass a1)
		{
			return ((::System::Void(*)(::PVOID, ::InControl::InputDeviceClass))((::PBYTE)hIl2Cpp + BILDMDIPIHH__ONINPUTDEVICECLASSSWITCH_OFFSET))(this, a1);
		}

		::System::Void OEDKOPDEDJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_OEDKOPDEDJH_OFFSET))(this);
		}

		::System::Void OEDJAIMMIIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_OEDJAIMMIIM_OFFSET))(this);
		}

		::System::Void OIALFFNHENI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_OIALFFNHENI_OFFSET))(this);
		}

		::System::Void DDHJMAJNEBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_DDHJMAJNEBN_OFFSET))(this);
		}

		::System::Void NDKLFHLCMFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_NDKLFHLCMFL_OFFSET))(this);
		}

		::System::Void OJCJCEKMNBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_OJCJCEKMNBB_OFFSET))(this);
		}

		::System::Void DNCAJHNJIAB(::IBNJKFGBNGJ* a1)
		{
			return ((::System::Void(*)(::PVOID, ::IBNJKFGBNGJ*))((::PBYTE)hIl2Cpp + BILDMDIPIHH_DNCAJHNJIAB_OFFSET))(this, a1);
		}

		::System::Void ENGILBAGMNF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_ENGILBAGMNF_OFFSET))(this);
		}

		::System::Void ENGILBAGMNF_1(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BILDMDIPIHH_ENGILBAGMNF_1_OFFSET))(this, a1);
		}

		::System::Void GEGHPNAHIBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_GEGHPNAHIBK_OFFSET))(this);
		}

		::System::Void IGMBNAMOFBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_IGMBNAMOFBI_OFFSET))(this);
		}

		::System::Void FLGOENCPPKJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_FLGOENCPPKJ_OFFSET))(this);
		}

		::System::Void AGAFLCIPHHD(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BILDMDIPIHH_AGAFLCIPHHD_OFFSET))(this, a1);
		}

		::System::Void FEKIIMFELHH(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BILDMDIPIHH_FEKIIMFELHH_OFFSET))(this, a1);
		}

		::System::Void JILAENMKDLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_JILAENMKDLN_OFFSET))(this);
		}

		::System::Void CIMOAHOLHME()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_CIMOAHOLHME_OFFSET))(this);
		}

		::System::Void _OnInputInterrupted()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH__ONINPUTINTERRUPTED_OFFSET))(this);
		}

		::System::Void JKDDKNOPAFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_JKDDKNOPAFG_OFFSET))(this);
		}

		::System::Boolean BAKHOKFCNDD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_BAKHOKFCNDD_OFFSET))(this);
		}

		::System::Void HLONHKDPMJO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BILDMDIPIHH_HLONHKDPMJO_OFFSET))(this);
		}

	};
