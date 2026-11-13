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

#define IODDFPHCIEM_AEPBGGMMGMK_OFFSET UNITYSDK_OFFSET(0x1A600770)
#define IODDFPHCIEM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A600BE0)
#define IODDFPHCIEM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1A600D40)
#define IODDFPHCIEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1A600E70)
#define IODDFPHCIEM_EEELCPMDPMD_OFFSET UNITYSDK_OFFSET(0x1A600890)
#define IODDFPHCIEM_HAEIGAPHDDE_OFFSET UNITYSDK_OFFSET(0x1A600AD0)
#define IODDFPHCIEM_IKJMNHELMAH_OFFSET UNITYSDK_OFFSET(0x1A600700)
#define IODDFPHCIEM_KNBCKMGJIKH_OFFSET UNITYSDK_OFFSET(0x1A600350)
#define IODDFPHCIEM_LJNJJEEPBEN_OFFSET UNITYSDK_OFFSET(0x1A6005F0)
#define IODDFPHCIEM_LKBFLOIDENI_OFFSET UNITYSDK_OFFSET(0x1A600800)
#define IODDFPHCIEM_OKKPGNMENDN_OFFSET UNITYSDK_OFFSET(0x1A600660)
#define IODDFPHCIEM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1A600290)
#define IODDFPHCIEM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1A600460)
#define IODDFPHCIEM_PBBEPOODCFN_OFFSET UNITYSDK_OFFSET(0x1A6009A0)
#define IODDFPHCIEM__ONBIND_OFFSET UNITYSDK_OFFSET(0x1A6004B0)
#define IODDFPHCIEM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1A600070)
#define IODDFPHCIEM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A6005A0)

inline static constexpr unsigned int IODDFPHCIEM_TypeDefinitionIndex = 74045;

	class IODDFPHCIEM : public ::FMPCODLIOLG
	{
	public:
		::KBPAADAANEO* GHKCPONOGLN; // 0x60
		::CLKHCMABFLO* EAIHADBPIFO; // 0x68
		::FAOGNFIIOBL* APDEJCGNFIC; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::PIHHLBIOOKE* FJIIIDHIKJC; // 0x80
		::FFLLDBBCLDI* JHFGNEFFKLO; // 0x88
		::RPG::GameCore::EntityTypeMask JKAGAKJELHA; // 0x90
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IODDFPHCIEM__ONINITPARAMS_OFFSET))(this, a1);
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

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IODDFPHCIEM__SETUPVIEW_OFFSET))(this);
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
