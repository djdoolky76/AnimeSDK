#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/EntityTypeMask.h"
#include "unitysdk/AOPEILFBPHP.h"
#include "unitysdk/CMJPOKJIEGP.h"
#include "unitysdk/IGKFNIEJGLM.h"
class CLKHCMABFLO;
class EANJILGOKBE;
class FAOGNFIIOBL;
class FFLLDBBCLDI;
class KBPAADAANEO;
class PIHHLBIOOKE;
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define IODDFPHCIEM_AEPBGGMMGMK_OFFSET UNITYSDK_OFFSET(0x164FE910)
#define IODDFPHCIEM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x164FED80)
#define IODDFPHCIEM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x164FEEE0)
#define IODDFPHCIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x164FF010)
#define IODDFPHCIEM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x164FE180)
#define IODDFPHCIEM_EEELCPMDPMD_OFFSET UNITYSDK_OFFSET(0x164FEA30)
#define IODDFPHCIEM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x164FE740)
#define IODDFPHCIEM_HAEIGAPHDDE_OFFSET UNITYSDK_OFFSET(0x164FEC70)
#define IODDFPHCIEM_IKJMNHELMAH_OFFSET UNITYSDK_OFFSET(0x164FE8A0)
#define IODDFPHCIEM_KNBCKMGJIKH_OFFSET UNITYSDK_OFFSET(0x164FE4F0)
#define IODDFPHCIEM_LJNJJEEPBEN_OFFSET UNITYSDK_OFFSET(0x164FE790)
#define IODDFPHCIEM_LKBFLOIDENI_OFFSET UNITYSDK_OFFSET(0x164FE9A0)
#define IODDFPHCIEM_OKKPGNMENDN_OFFSET UNITYSDK_OFFSET(0x164FE800)
#define IODDFPHCIEM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x164FE3A0)
#define IODDFPHCIEM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x164FE600)
#define IODDFPHCIEM_PBBEPOODCFN_OFFSET UNITYSDK_OFFSET(0x164FEB40)
#define IODDFPHCIEM__ONBIND_OFFSET UNITYSDK_OFFSET(0x164FE650)

	class IODDFPHCIEM : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::PIHHLBIOOKE* FJIIIDHIKJC; // 0x68
		::KBPAADAANEO* GHKCPONOGLN; // 0x70
		::CLKHCMABFLO* EAIHADBPIFO; // 0x78
		::FFLLDBBCLDI* JHFGNEFFKLO; // 0x80
		::FAOGNFIIOBL* APDEJCGNFIC; // 0x88
		::RPG::GameCore::EntityTypeMask JKAGAKJELHA; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_CTOR_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IODDFPHCIEM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IODDFPHCIEM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void KNBCKMGJIKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_KNBCKMGJIKH_OFFSET))(this);
		}

		::System::Void OKKPGNMENDN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_OKKPGNMENDN_OFFSET))(this);
		}

		::System::Void LJNJJEEPBEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_LJNJJEEPBEN_OFFSET))(this);
		}

		::System::Void IKJMNHELMAH(::EANJILGOKBE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EANJILGOKBE*))((::PBYTE)hIl2Cpp + IODDFPHCIEM_IKJMNHELMAH_OFFSET))(this, a1);
		}

		::System::Void AEPBGGMMGMK(::CMJPOKJIEGP a1)
		{
			return ((::System::Void(*)(::PVOID, ::CMJPOKJIEGP))((::PBYTE)hIl2Cpp + IODDFPHCIEM_AEPBGGMMGMK_OFFSET))(this, a1);
		}

		::System::Void LKBFLOIDENI(::AOPEILFBPHP a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOPEILFBPHP))((::PBYTE)hIl2Cpp + IODDFPHCIEM_LKBFLOIDENI_OFFSET))(this, a1);
		}

		::System::Void EEELCPMDPMD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IODDFPHCIEM_EEELCPMDPMD_OFFSET))(this, a1);
		}

		::System::Void PBBEPOODCFN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IODDFPHCIEM_PBBEPOODCFN_OFFSET))(this, a1);
		}

		::System::Void HAEIGAPHDDE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IODDFPHCIEM_HAEIGAPHDDE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
