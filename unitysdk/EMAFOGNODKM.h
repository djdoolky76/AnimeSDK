#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EMAFOGNODKM_ActiveType.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/MonsterHUDVisibleType.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector3.h"
class CFDGKEDFBJP;
namespace RPG::Client { class MonsterPhaseChangeParams; }
namespace RPG::Client { class NotifySetBattleEntityViewActive; }
namespace RPG::Client { class UIFollow3DTarget; }
namespace RPG::GameCore { class AbilityCharacterModelChange; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityCurrentSPChange; }
namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class CharacterDataComponent; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterBreakStateChange; }
namespace RPG::GameCore { class LevelEntityEscape; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedGameMode; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define EMAFOGNODKM_ABHGCOEANJC_OFFSET UNITYSDK_OFFSET(0x16475DC0)
#define EMAFOGNODKM_ACMNLDLKINC_OFFSET UNITYSDK_OFFSET(0x16478CF0)
#define EMAFOGNODKM_AIFLMCJJFKB_OFFSET UNITYSDK_OFFSET(0x16474960)
#define EMAFOGNODKM_AOJMBDBLBIL_OFFSET UNITYSDK_OFFSET(0x16479120)
#define EMAFOGNODKM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16479420)
#define EMAFOGNODKM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16479C40)
#define EMAFOGNODKM_BECADHBHGGN_OFFSET UNITYSDK_OFFSET(0x16476F60)
#define EMAFOGNODKM_BJOGNFAIAPO_OFFSET UNITYSDK_OFFSET(0x16474A90)
#define EMAFOGNODKM_BLCMCABJHKP_OFFSET UNITYSDK_OFFSET(0x16476040)
#define EMAFOGNODKM_BLGCKLHBOHE_OFFSET UNITYSDK_OFFSET(0x16479330)
#define EMAFOGNODKM_CCGFKCEHGGE_OFFSET UNITYSDK_OFFSET(0x16478330)
#define EMAFOGNODKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1647A460)
#define EMAFOGNODKM_CDCFJGJECBJ_OFFSET UNITYSDK_OFFSET(0x164783C0)
#define EMAFOGNODKM_CFGDHOFNOBO_OFFSET UNITYSDK_OFFSET(0x16477CA0)
#define EMAFOGNODKM_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x164765F0)
#define EMAFOGNODKM_COBAKCGBEHK_OFFSET UNITYSDK_OFFSET(0x164754A0)
#define EMAFOGNODKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1647A430)
#define EMAFOGNODKM_DAOHLCBLMHO_OFFSET UNITYSDK_OFFSET(0x16476410)
#define EMAFOGNODKM_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x16478DF0)
#define EMAFOGNODKM_DJKOANKJJMJ_OFFSET UNITYSDK_OFFSET(0x16477800)
#define EMAFOGNODKM_DKLPDFMLPLC_OFFSET UNITYSDK_OFFSET(0x164768E0)
#define EMAFOGNODKM_DMPECNLMBJH_OFFSET UNITYSDK_OFFSET(0x16477E80)
#define EMAFOGNODKM_DOHMJNLJAJM_OFFSET UNITYSDK_OFFSET(0x164780B0)
#define EMAFOGNODKM_ECKOFMEAHNB_OFFSET UNITYSDK_OFFSET(0x16476110)
#define EMAFOGNODKM_FAEHNJHEPBO_OFFSET UNITYSDK_OFFSET(0x16478F70)
#define EMAFOGNODKM_FDKKHFFLFEA_OFFSET UNITYSDK_OFFSET(0x16476370)
#define EMAFOGNODKM_FHNGDOCCDJE_OFFSET UNITYSDK_OFFSET(0x16476A50)
#define EMAFOGNODKM_FIHPNLLBGJK_OFFSET UNITYSDK_OFFSET(0x16476E70)
#define EMAFOGNODKM_FLFDNCNPDNI_OFFSET UNITYSDK_OFFSET(0x16476320)
#define EMAFOGNODKM_FNDCNHHGIAN_OFFSET UNITYSDK_OFFSET(0x16476CC0)
#define EMAFOGNODKM_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x164763C0)
#define EMAFOGNODKM_GLJEEBDJJDO_OFFSET UNITYSDK_OFFSET(0x16477480)
#define EMAFOGNODKM_GLJHJIDOJKG_OFFSET UNITYSDK_OFFSET(0x164771A0)
#define EMAFOGNODKM_GPDONHHMMCM_OFFSET UNITYSDK_OFFSET(0x16475030)
#define EMAFOGNODKM_HBGFMIJAFEE_OFFSET UNITYSDK_OFFSET(0x16478990)
#define EMAFOGNODKM_HBLDDEMEBJJ_OFFSET UNITYSDK_OFFSET(0x164788D0)
#define EMAFOGNODKM_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x16478690)
#define EMAFOGNODKM_HIACEJHMHOA_OFFSET UNITYSDK_OFFSET(0x164781B0)
#define EMAFOGNODKM_HPEKDKCDBDL_OFFSET UNITYSDK_OFFSET(0x16478C10)
#define EMAFOGNODKM_IAAOBCKAGPF_OFFSET UNITYSDK_OFFSET(0x16477410)
#define EMAFOGNODKM_IDMNICKEPIN_OFFSET UNITYSDK_OFFSET(0x16478A50)
#define EMAFOGNODKM_IFDFMDHPBDO_OFFSET UNITYSDK_OFFSET(0x16474FE0)
#define EMAFOGNODKM_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x16478810)
#define EMAFOGNODKM_IMFPCCDIFLL_OFFSET UNITYSDK_OFFSET(0x16477860)
#define EMAFOGNODKM_IPEAGFMEOKB_OFFSET UNITYSDK_OFFSET(0x16475F50)
#define EMAFOGNODKM_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x16479030)
#define EMAFOGNODKM_JDPJLKDNONC_OFFSET UNITYSDK_OFFSET(0x16475440)
#define EMAFOGNODKM_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x16478450)
#define EMAFOGNODKM_JFIMJONCKHC_OFFSET UNITYSDK_OFFSET(0x16477650)
#define EMAFOGNODKM_JGBHCIFJOEO_OFFSET UNITYSDK_OFFSET(0x16477130)
#define EMAFOGNODKM_JHCNEPONPHI_OFFSET UNITYSDK_OFFSET(0x16475360)
#define EMAFOGNODKM_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x16477010)
#define EMAFOGNODKM_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x16477A70)
#define EMAFOGNODKM_KFLHGEPJKFL_OFFSET UNITYSDK_OFFSET(0x16475E30)
#define EMAFOGNODKM_KHEDOIDHONF_OFFSET UNITYSDK_OFFSET(0x16478270)
#define EMAFOGNODKM_KMGJGCBMNJH_OFFSET UNITYSDK_OFFSET(0x16476D90)
#define EMAFOGNODKM_KNBMBDNJLBK_OFFSET UNITYSDK_OFFSET(0x16477AF0)
#define EMAFOGNODKM_KPKNGILFNBF_OFFSET UNITYSDK_OFFSET(0x16478750)
#define EMAFOGNODKM_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x16476FB0)
#define EMAFOGNODKM_LDALFMALDIE_OFFSET UNITYSDK_OFFSET(0x16479230)
#define EMAFOGNODKM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x16474C70)
#define EMAFOGNODKM_LNIILMCMEEP_OFFSET UNITYSDK_OFFSET(0x16478B50)
#define EMAFOGNODKM_MDIOIKCGIOL_OFFSET UNITYSDK_OFFSET(0x16475630)
#define EMAFOGNODKM_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x16476680)
#define EMAFOGNODKM_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0x16475FD0)
#define EMAFOGNODKM_NCCDDNFOFAO_OFFSET UNITYSDK_OFFSET(0x16476460)
#define EMAFOGNODKM_NCKMAEILCDH_OFFSET UNITYSDK_OFFSET(0x16478510)
#define EMAFOGNODKM_NIHJLCJBDBO_OFFSET UNITYSDK_OFFSET(0x16476BC0)
#define EMAFOGNODKM_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0x16478EB0)
#define EMAFOGNODKM_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x164772F0)
#define EMAFOGNODKM_OIFOAEBHMCM_OFFSET UNITYSDK_OFFSET(0x164785D0)
#define EMAFOGNODKM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16474B80)
#define EMAFOGNODKM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16474DE0)
#define EMAFOGNODKM_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x164760C0)
#define EMAFOGNODKM_PKBHAKONAJA_OFFSET UNITYSDK_OFFSET(0x164774F0)
#define EMAFOGNODKM_POAJNJEKEGC_OFFSET UNITYSDK_OFFSET(0x164779C0)
#define EMAFOGNODKM__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16475130)
#define EMAFOGNODKM__ONBIND_OFFSET UNITYSDK_OFFSET(0x16474760)
#define EMAFOGNODKM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16475080)
#define EMAFOGNODKM__ONRETURN_B__9_0_OFFSET UNITYSDK_OFFSET(0x1647A480)
#define EMAFOGNODKM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16474CE0)

inline static constexpr unsigned int EMAFOGNODKM_TypeDefinitionIndex = 73827;

	class EMAFOGNODKM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* PCGKMJANCNK; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::RectTransform* HKONEDKHNMM; // 0x70
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x78
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x80
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0x88
		::CFDGKEDFBJP* NINEBKCLIOG; // 0x90
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x98
		::RPG::Client::UIFollow3DTarget* DIHCNFOOEFF; // 0xA0
		::RPG::GameCore::MonsterHUDVisibleType CFMDFAAKLGA; // 0xA8
		::System::Int32 ALLINIHNNJJ; // 0xAC
		::System::Boolean AKCAAKFHBNO; // 0xB0
		::System::Boolean LPJHIOPCLID; // 0xB1
		static ::System::Single* StaticGet_DMFNDMLIJCD()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x8140);
		}

		static ::System::Single* StaticGet_AJEHGNNEDFG()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x8144);
		}

		static ::System::Single* StaticGet_GGMLAPKLIKB()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x8148);
		}

		static ::System::Single* StaticGet_HEEPKPHCKOI()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x814C);
		}

		static ::System::Single* StaticGet_FMPCCGNHMJC()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x8150);
		}

		// static const ::System::String* JGKANGIDLNN; // 0x0
		// static const ::System::String* KCEHPJJPPAA; // 0x0
		// static const ::System::String* MGOJPACMFIJ; // 0x0
		// static const ::System::String* GLDEPHDKOBO; // 0x0
		// static const ::System::Object LOEJIAFIPKK; // 0x0
		// static const ::System::Object BEABEEPLLID; // 0x0
		// static const ::System::Object PKOIALJCEPE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + EMAFOGNODKM_CCTOR_OFFSET))();
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM__ONBIND_OFFSET))(this);
		}

		::System::Void AIFLMCJJFKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_AIFLMCJJFKB_OFFSET))(this);
		}

		::System::Void BJOGNFAIAPO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_BJOGNFAIAPO_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EMAFOGNODKM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void IPEAGFMEOKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_IPEAGFMEOKB_OFFSET))(this);
		}

		::System::Void BLCMCABJHKP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_BLCMCABJHKP_OFFSET))(this);
		}

		::System::Void OPOCPDBMELE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_OPOCPDBMELE_OFFSET))(this);
		}

		::System::Void FLFDNCNPDNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_FLFDNCNPDNI_OFFSET))(this);
		}

		::System::Void FDKKHFFLFEA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_FDKKHFFLFEA_OFFSET))(this);
		}

		::System::Void GCODCEFGANN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_GCODCEFGANN_OFFSET))(this);
		}

		::System::Void DAOHLCBLMHO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_DAOHLCBLMHO_OFFSET))(this);
		}

		::System::Void NCCDDNFOFAO(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_NCCDDNFOFAO_OFFSET))(this, a1);
		}

		::System::Void MNLFPHAOAGP(::RPG::GameCore::AbilityCurrentSPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentSPChange*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_MNLFPHAOAGP_OFFSET))(this, a1);
		}

		::System::Void DKLPDFMLPLC(::RPG::GameCore::AbilityCurrentShieldChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentShieldChange*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_DKLPDFMLPLC_OFFSET))(this, a1);
		}

		::System::Void FHNGDOCCDJE(::RPG::GameCore::AbilityCurrentStanceChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_FHNGDOCCDJE_OFFSET))(this, a1);
		}

		::System::Void NIHJLCJBDBO(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + EMAFOGNODKM_NIHJLCJBDBO_OFFSET))(this, a1);
		}

		::System::Void FNDCNHHGIAN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_FNDCNHHGIAN_OFFSET))(this, a1);
		}

		::System::Void KMGJGCBMNJH(::RPG::Client::NotifySetBattleEntityViewActive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifySetBattleEntityViewActive*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_KMGJGCBMNJH_OFFSET))(this, a1);
		}

		::System::Void FIHPNLLBGJK(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EMAFOGNODKM_FIHPNLLBGJK_OFFSET))(this, a1);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void JMNFOCENFLP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_JMNFOCENFLP_OFFSET))(this, a1);
		}

		::System::Void GLJHJIDOJKG(::RPG::GameCore::LevelEntityEscape* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelEntityEscape*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_GLJHJIDOJKG_OFFSET))(this, a1);
		}

		::System::Void OGPAMKGAGJF(::RPG::GameCore::EntityRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void IAAOBCKAGPF(::RPG::Client::MonsterPhaseChangeParams* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonsterPhaseChangeParams*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_IAAOBCKAGPF_OFFSET))(this, a1);
		}

		::System::Void GLJEEBDJJDO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_GLJEEBDJJDO_OFFSET))(this, a1);
		}

		::System::Void PKBHAKONAJA(::RPG::GameCore::LevelCharacterBreakStateChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterBreakStateChange*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_PKBHAKONAJA_OFFSET))(this, a1);
		}

		::System::Void JFIMJONCKHC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_JFIMJONCKHC_OFFSET))(this, a1);
		}

		::System::Void IMFPCCDIFLL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_IMFPCCDIFLL_OFFSET))(this, a1);
		}

		::System::Void KFLHGEPJKFL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_KFLHGEPJKFL_OFFSET))(this);
		}

		::System::Void GPDONHHMMCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_GPDONHHMMCM_OFFSET))(this);
		}

		::System::Void POAJNJEKEGC(::RPG::GameCore::AbilityCharacterModelChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCharacterModelChange*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_POAJNJEKEGC_OFFSET))(this, a1);
		}

		::System::Void JHCNEPONPHI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_JHCNEPONPHI_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void KBPMCFICODM(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMAFOGNODKM_KBPMCFICODM_OFFSET))(this, a1);
		}

		::System::Void MDIOIKCGIOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_MDIOIKCGIOL_OFFSET))(this);
		}

		::System::Void CFGDHOFNOBO(::RPG::Client::UIFollow3DTarget* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::UIFollow3DTarget*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_CFGDHOFNOBO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 DMPECNLMBJH(::UnityEngine::Vector3 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + EMAFOGNODKM_DMPECNLMBJH_OFFSET))(this, a1);
		}

		::UnityEngine::Rect KNBMBDNJLBK()
		{
			return ((::UnityEngine::Rect(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_KNBMBDNJLBK_OFFSET))(this);
		}

		::System::Void ABHGCOEANJC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_ABHGCOEANJC_OFFSET))(this);
		}

		::System::Void JGBHCIFJOEO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_JGBHCIFJOEO_OFFSET))(this);
		}

		::System::Void CIINDFONDLC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMAFOGNODKM_CIINDFONDLC_OFFSET))(this, a1);
		}

		::System::Void DJKOANKJJMJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMAFOGNODKM_DJKOANKJJMJ_OFFSET))(this, a1);
		}

		::System::Void BECADHBHGGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_BECADHBHGGN_OFFSET))(this);
		}

		::System::Void COBAKCGBEHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_COBAKCGBEHK_OFFSET))(this);
		}

		::System::Void JDPJLKDNONC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_JDPJLKDNONC_OFFSET))(this);
		}

		::System::Void ECKOFMEAHNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_ECKOFMEAHNB_OFFSET))(this);
		}

		::System::Void NAPEMFLELHM(::EMAFOGNODKM_ActiveType a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::EMAFOGNODKM_ActiveType, ::System::Boolean))((::PBYTE)hIl2Cpp + EMAFOGNODKM_NAPEMFLELHM_OFFSET))(this, a1, a2);
		}

		::System::Void DOHMJNLJAJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_DOHMJNLJAJM_OFFSET))(this);
		}

		::System::Void IFDFMDHPBDO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_IFDFMDHPBDO_OFFSET))(this);
		}

		::System::Void HIACEJHMHOA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_HIACEJHMHOA_OFFSET))(this, a1);
		}

		::System::Void KHEDOIDHONF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_KHEDOIDHONF_OFFSET))(this, a1);
		}

		::System::Void CCGFKCEHGGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_CCGFKCEHGGE_OFFSET))(this, a1);
		}

		::System::Void CDCFJGJECBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_CDCFJGJECBJ_OFFSET))(this, a1);
		}

		::System::Void JFEILMNOCMK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_JFEILMNOCMK_OFFSET))(this, a1);
		}

		::System::Void NCKMAEILCDH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_NCKMAEILCDH_OFFSET))(this, a1);
		}

		::System::Void OIFOAEBHMCM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_OIFOAEBHMCM_OFFSET))(this, a1);
		}

		::System::Void HGMJKNEAANO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_HGMJKNEAANO_OFFSET))(this, a1);
		}

		::System::Void KPKNGILFNBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_KPKNGILFNBF_OFFSET))(this, a1);
		}

		::System::Void IHJCDKFFJLF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_IHJCDKFFJLF_OFFSET))(this, a1);
		}

		::System::Void HBLDDEMEBJJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_HBLDDEMEBJJ_OFFSET))(this, a1);
		}

		::System::Void HBGFMIJAFEE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_HBGFMIJAFEE_OFFSET))(this, a1);
		}

		::System::Void IDMNICKEPIN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_IDMNICKEPIN_OFFSET))(this, a1);
		}

		::System::Void LNIILMCMEEP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_LNIILMCMEEP_OFFSET))(this, a1);
		}

		::System::Void HPEKDKCDBDL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_HPEKDKCDBDL_OFFSET))(this, a1);
		}

		::System::Void ACMNLDLKINC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_ACMNLDLKINC_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void OEHPIOOIJDN(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_OEHPIOOIJDN_OFFSET))(this, a1);
		}

		::System::Void FAEHNJHEPBO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_FAEHNJHEPBO_OFFSET))(this, a1);
		}

		::System::Void IPMGACIGPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_IPMGACIGPOE_OFFSET))(this, a1);
		}

		::System::Void AOJMBDBLBIL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_AOJMBDBLBIL_OFFSET))(this, a1);
		}

		::System::Void LDALFMALDIE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_LDALFMALDIE_OFFSET))(this, a1);
		}

		::System::Void BLGCKLHBOHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + EMAFOGNODKM_BLGCKLHBOHE_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void _OnReturn_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM__ONRETURN_B__9_0_OFFSET))(this);
		}

	};
