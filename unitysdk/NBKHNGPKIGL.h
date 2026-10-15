#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BOFJDFJMKGA;
class IFACPINCOEC;
class KFLKNAENGDO;
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class BattleOnEntityWeaknessRefreshParam; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBreakStateChange; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }

#define NBKHNGPKIGL_AJBOHBCKEPP_OFFSET UNITYSDK_OFFSET(0xBAD9EE0)
#define NBKHNGPKIGL_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBADBA50)
#define NBKHNGPKIGL_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBADBE70)
#define NBKHNGPKIGL_BBMBDFEMGLK_OFFSET UNITYSDK_OFFSET(0xBADA6C0)
#define NBKHNGPKIGL_CPBKEHMMCOE_OFFSET UNITYSDK_OFFSET(0xBADB540)
#define NBKHNGPKIGL_CTOR_OFFSET UNITYSDK_OFFSET(0xBADC250)
#define NBKHNGPKIGL_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xBADB750)
#define NBKHNGPKIGL_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xBADB6C0)
#define NBKHNGPKIGL_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBAD9B60)
#define NBKHNGPKIGL_DLEOICBFCIH_OFFSET UNITYSDK_OFFSET(0xBADA8D0)
#define NBKHNGPKIGL_DPPCOMFGOOL_OFFSET UNITYSDK_OFFSET(0xBADAD20)
#define NBKHNGPKIGL_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBAD9700)
#define NBKHNGPKIGL_FCIKNMFEDFK_OFFSET UNITYSDK_OFFSET(0xBAD9F30)
#define NBKHNGPKIGL_FDKKHFFLFEA_OFFSET UNITYSDK_OFFSET(0xBADAE50)
#define NBKHNGPKIGL_GLHDFOOELAI_OFFSET UNITYSDK_OFFSET(0xBADB600)
#define NBKHNGPKIGL_HEBDKKGOLNL_OFFSET UNITYSDK_OFFSET(0xBADAB40)
#define NBKHNGPKIGL_INPLJBMLGPB_OFFSET UNITYSDK_OFFSET(0xBADAEA0)
#define NBKHNGPKIGL_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0xBADB810)
#define NBKHNGPKIGL_KBCEOFGFGMM_OFFSET UNITYSDK_OFFSET(0xBADA720)
#define NBKHNGPKIGL_KHEDOIDHONF_OFFSET UNITYSDK_OFFSET(0xBADB390)
#define NBKHNGPKIGL_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xBADAC80)
#define NBKHNGPKIGL_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xBADAAA0)
#define NBKHNGPKIGL_MDHAKKBHBDB_OFFSET UNITYSDK_OFFSET(0xBADB1B0)
#define NBKHNGPKIGL_MKHKJJPJNEJ_OFFSET UNITYSDK_OFFSET(0xBADB450)
#define NBKHNGPKIGL_NKLGIADGGMN_OFFSET UNITYSDK_OFFSET(0xBADA200)
#define NBKHNGPKIGL_NLHCLOPCJFJ_OFFSET UNITYSDK_OFFSET(0xBADAFA0)
#define NBKHNGPKIGL_NPLMADLHIGB_OFFSET UNITYSDK_OFFSET(0xBADB990)
#define NBKHNGPKIGL_OIFOAEBHMCM_OFFSET UNITYSDK_OFFSET(0xBADB8D0)
#define NBKHNGPKIGL_OMLHCBPOKHE_OFFSET UNITYSDK_OFFSET(0xBADA7B0)
#define NBKHNGPKIGL_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBAD9440)
#define NBKHNGPKIGL_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBAD98C0)
#define NBKHNGPKIGL_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0xBADACD0)
#define NBKHNGPKIGL_PKBHAKONAJA_OFFSET UNITYSDK_OFFSET(0xBADAEF0)
#define NBKHNGPKIGL__ONBIND_OFFSET UNITYSDK_OFFSET(0xBAD9350)
#define NBKHNGPKIGL__ONTICK_OFFSET UNITYSDK_OFFSET(0xBAD9FC0)

	class NBKHNGPKIGL : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* JPHOOFFIAAH; // 0x60
		::KFLKNAENGDO* EMOGILLDJFJ; // 0x68
		::IFACPINCOEC* HOLOEFEIBDC; // 0x70
		::IFACPINCOEC* IHBIPNAPLAG; // 0x78
		::RPG::GameCore::AttackDamageType GDKNKDJMJCF; // 0x80
		::System::Boolean DIDNAANOHHB; // 0x84
		::System::Boolean LCNHIFDMDND; // 0x85
		// static const ::System::String* FAPHHPECOFL; // 0x0
		// static const ::System::String* KBBHCOMPMAI; // 0x0
		// static const ::System::String* CJONLJJPLJM; // 0x0
		// static const ::System::String* JHNBEJJJLCO; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NBKHNGPKIGL__ONTICK_OFFSET))(this, a1);
		}

		::System::Void NKLGIADGGMN(::BOFJDFJMKGA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BOFJDFJMKGA*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_NKLGIADGGMN_OFFSET))(this, a1);
		}

		::System::Void KBCEOFGFGMM(::RPG::GameCore::BattleOnEntityWeaknessRefreshParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BattleOnEntityWeaknessRefreshParam*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_KBCEOFGFGMM_OFFSET))(this, a1);
		}

		::System::Void OMLHCBPOKHE(::RPG::GameCore::AbilityCurrentStanceChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_OMLHCBPOKHE_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void OPOCPDBMELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_OPOCPDBMELE_OFFSET))(this);
		}

		::System::Void FDKKHFFLFEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_FDKKHFFLFEA_OFFSET))(this);
		}

		::System::Void INPLJBMLGPB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_INPLJBMLGPB_OFFSET))(this);
		}

		::System::Void PKBHAKONAJA(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_PKBHAKONAJA_OFFSET))(this, a1);
		}

		::System::Void HEBDKKGOLNL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_HEBDKKGOLNL_OFFSET))(this, a1);
		}

		::System::Void DPPCOMFGOOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_DPPCOMFGOOL_OFFSET))(this);
		}

		::System::Void NLHCLOPCJFJ(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::AttackDamageType a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_NLHCLOPCJFJ_OFFSET))(this, a1, a2);
		}

		::System::Void MDHAKKBHBDB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_MDHAKKBHBDB_OFFSET))(this);
		}

		::System::Void DLEOICBFCIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_DLEOICBFCIH_OFFSET))(this);
		}

		::IFACPINCOEC* BBMBDFEMGLK()
		{
			return ((::IFACPINCOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_BBMBDFEMGLK_OFFSET))(this);
		}

		::System::Boolean AJBOHBCKEPP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_AJBOHBCKEPP_OFFSET))(this);
		}

		::IFACPINCOEC* FCIKNMFEDFK()
		{
			return ((::IFACPINCOEC*(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_FCIKNMFEDFK_OFFSET))(this);
		}

		::System::Void KHEDOIDHONF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_KHEDOIDHONF_OFFSET))(this, a1);
		}

		::System::Void MKHKJJPJNEJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_MKHKJJPJNEJ_OFFSET))(this, a1);
		}

		::System::Void CPBKEHMMCOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_CPBKEHMMCOE_OFFSET))(this, a1);
		}

		::System::Void GLHDFOOELAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_GLHDFOOELAI_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JFEILMNOCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_JFEILMNOCMK_OFFSET))(this, a1);
		}

		::System::Void OIFOAEBHMCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_OIFOAEBHMCM_OFFSET))(this, a1);
		}

		::System::Void NPLMADLHIGB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_NPLMADLHIGB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKHNGPKIGL_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
