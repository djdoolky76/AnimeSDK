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

#define EMAFOGNODKM_ABHGCOEANJC_OFFSET UNITYSDK_OFFSET(0x1552B6F0)
#define EMAFOGNODKM_ACMNLDLKINC_OFFSET UNITYSDK_OFFSET(0x1552E620)
#define EMAFOGNODKM_AIFLMCJJFKB_OFFSET UNITYSDK_OFFSET(0x1552A290)
#define EMAFOGNODKM_AOJMBDBLBIL_OFFSET UNITYSDK_OFFSET(0x1552EA50)
#define EMAFOGNODKM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1552ED20)
#define EMAFOGNODKM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1552F550)
#define EMAFOGNODKM_BECADHBHGGN_OFFSET UNITYSDK_OFFSET(0x1552C8B0)
#define EMAFOGNODKM_BJOGNFAIAPO_OFFSET UNITYSDK_OFFSET(0x1552A3C0)
#define EMAFOGNODKM_BLCMCABJHKP_OFFSET UNITYSDK_OFFSET(0x1552B980)
#define EMAFOGNODKM_BLGCKLHBOHE_OFFSET UNITYSDK_OFFSET(0x1552EC60)
#define EMAFOGNODKM_CCGFKCEHGGE_OFFSET UNITYSDK_OFFSET(0x1552DC60)
#define EMAFOGNODKM_CCTOR_OFFSET UNITYSDK_OFFSET(0x1552FD70)
#define EMAFOGNODKM_CDCFJGJECBJ_OFFSET UNITYSDK_OFFSET(0x1552DCF0)
#define EMAFOGNODKM_CFGDHOFNOBO_OFFSET UNITYSDK_OFFSET(0x1552D5F0)
#define EMAFOGNODKM_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x1552BF40)
#define EMAFOGNODKM_COBAKCGBEHK_OFFSET UNITYSDK_OFFSET(0x1552ADE0)
#define EMAFOGNODKM_CTOR_OFFSET UNITYSDK_OFFSET(0x1552FD40)
#define EMAFOGNODKM_DAOHLCBLMHO_OFFSET UNITYSDK_OFFSET(0x1552BD60)
#define EMAFOGNODKM_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x1552E720)
#define EMAFOGNODKM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x1552A9B0)
#define EMAFOGNODKM_DJKOANKJJMJ_OFFSET UNITYSDK_OFFSET(0x1552D150)
#define EMAFOGNODKM_DKLPDFMLPLC_OFFSET UNITYSDK_OFFSET(0x1552C230)
#define EMAFOGNODKM_DMPECNLMBJH_OFFSET UNITYSDK_OFFSET(0x1552D7B0)
#define EMAFOGNODKM_DOHMJNLJAJM_OFFSET UNITYSDK_OFFSET(0x1552D9E0)
#define EMAFOGNODKM_ECKOFMEAHNB_OFFSET UNITYSDK_OFFSET(0x1552BA50)
#define EMAFOGNODKM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x1552A610)
#define EMAFOGNODKM_FAEHNJHEPBO_OFFSET UNITYSDK_OFFSET(0x1552E8A0)
#define EMAFOGNODKM_FDKKHFFLFEA_OFFSET UNITYSDK_OFFSET(0x1552BCC0)
#define EMAFOGNODKM_FHNGDOCCDJE_OFFSET UNITYSDK_OFFSET(0x1552C3A0)
#define EMAFOGNODKM_FIHPNLLBGJK_OFFSET UNITYSDK_OFFSET(0x1552C7C0)
#define EMAFOGNODKM_FLFDNCNPDNI_OFFSET UNITYSDK_OFFSET(0x1552BC70)
#define EMAFOGNODKM_FNDCNHHGIAN_OFFSET UNITYSDK_OFFSET(0x1552C610)
#define EMAFOGNODKM_GCODCEFGANN_OFFSET UNITYSDK_OFFSET(0x1552BD10)
#define EMAFOGNODKM_GLJEEBDJJDO_OFFSET UNITYSDK_OFFSET(0x1552CDD0)
#define EMAFOGNODKM_GLJHJIDOJKG_OFFSET UNITYSDK_OFFSET(0x1552CAF0)
#define EMAFOGNODKM_GPDONHHMMCM_OFFSET UNITYSDK_OFFSET(0x1552A960)
#define EMAFOGNODKM_HBGFMIJAFEE_OFFSET UNITYSDK_OFFSET(0x1552E2C0)
#define EMAFOGNODKM_HBLDDEMEBJJ_OFFSET UNITYSDK_OFFSET(0x1552E200)
#define EMAFOGNODKM_HGMJKNEAANO_OFFSET UNITYSDK_OFFSET(0x1552DFC0)
#define EMAFOGNODKM_HIACEJHMHOA_OFFSET UNITYSDK_OFFSET(0x1552DAE0)
#define EMAFOGNODKM_HPEKDKCDBDL_OFFSET UNITYSDK_OFFSET(0x1552E540)
#define EMAFOGNODKM_IAAOBCKAGPF_OFFSET UNITYSDK_OFFSET(0x1552CD60)
#define EMAFOGNODKM_IDMNICKEPIN_OFFSET UNITYSDK_OFFSET(0x1552E380)
#define EMAFOGNODKM_IFDFMDHPBDO_OFFSET UNITYSDK_OFFSET(0x1552A910)
#define EMAFOGNODKM_IHJCDKFFJLF_OFFSET UNITYSDK_OFFSET(0x1552E140)
#define EMAFOGNODKM_IMFPCCDIFLL_OFFSET UNITYSDK_OFFSET(0x1552D1B0)
#define EMAFOGNODKM_IPEAGFMEOKB_OFFSET UNITYSDK_OFFSET(0x1552B890)
#define EMAFOGNODKM_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x1552E960)
#define EMAFOGNODKM_JDPJLKDNONC_OFFSET UNITYSDK_OFFSET(0x1552AD80)
#define EMAFOGNODKM_JFEILMNOCMK_OFFSET UNITYSDK_OFFSET(0x1552DD80)
#define EMAFOGNODKM_JFIMJONCKHC_OFFSET UNITYSDK_OFFSET(0x1552CFA0)
#define EMAFOGNODKM_JGBHCIFJOEO_OFFSET UNITYSDK_OFFSET(0x1552CA80)
#define EMAFOGNODKM_JHCNEPONPHI_OFFSET UNITYSDK_OFFSET(0x1552ACA0)
#define EMAFOGNODKM_JMNFOCENFLP_OFFSET UNITYSDK_OFFSET(0x1552C960)
#define EMAFOGNODKM_KBPMCFICODM_OFFSET UNITYSDK_OFFSET(0x1552D3C0)
#define EMAFOGNODKM_KFLHGEPJKFL_OFFSET UNITYSDK_OFFSET(0x1552B760)
#define EMAFOGNODKM_KHEDOIDHONF_OFFSET UNITYSDK_OFFSET(0x1552DBA0)
#define EMAFOGNODKM_KMGJGCBMNJH_OFFSET UNITYSDK_OFFSET(0x1552C6E0)
#define EMAFOGNODKM_KNBMBDNJLBK_OFFSET UNITYSDK_OFFSET(0x1552D440)
#define EMAFOGNODKM_KPKNGILFNBF_OFFSET UNITYSDK_OFFSET(0x1552E080)
#define EMAFOGNODKM_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x1552C900)
#define EMAFOGNODKM_LDALFMALDIE_OFFSET UNITYSDK_OFFSET(0x1552EB60)
#define EMAFOGNODKM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x1552A5A0)
#define EMAFOGNODKM_LNIILMCMEEP_OFFSET UNITYSDK_OFFSET(0x1552E480)
#define EMAFOGNODKM_MDIOIKCGIOL_OFFSET UNITYSDK_OFFSET(0x1552AF70)
#define EMAFOGNODKM_MNLFPHAOAGP_OFFSET UNITYSDK_OFFSET(0x1552BFD0)
#define EMAFOGNODKM_NAPEMFLELHM_OFFSET UNITYSDK_OFFSET(0x1552B910)
#define EMAFOGNODKM_NCCDDNFOFAO_OFFSET UNITYSDK_OFFSET(0x1552BDB0)
#define EMAFOGNODKM_NCKMAEILCDH_OFFSET UNITYSDK_OFFSET(0x1552DE40)
#define EMAFOGNODKM_NIHJLCJBDBO_OFFSET UNITYSDK_OFFSET(0x1552C510)
#define EMAFOGNODKM_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x1552AA60)
#define EMAFOGNODKM_OEHPIOOIJDN_OFFSET UNITYSDK_OFFSET(0x1552E7E0)
#define EMAFOGNODKM_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x1552CC40)
#define EMAFOGNODKM_OIFOAEBHMCM_OFFSET UNITYSDK_OFFSET(0x1552DF00)
#define EMAFOGNODKM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1552A4B0)
#define EMAFOGNODKM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1552A710)
#define EMAFOGNODKM_OPOCPDBMELE_OFFSET UNITYSDK_OFFSET(0x1552BA00)
#define EMAFOGNODKM_PKBHAKONAJA_OFFSET UNITYSDK_OFFSET(0x1552CE40)
#define EMAFOGNODKM_POAJNJEKEGC_OFFSET UNITYSDK_OFFSET(0x1552D310)
#define EMAFOGNODKM__ONBIND_OFFSET UNITYSDK_OFFSET(0x1552A130)
#define EMAFOGNODKM__ONRETURN_B__9_0_OFFSET UNITYSDK_OFFSET(0x1552FD90)

inline static constexpr unsigned int EMAFOGNODKM_TypeDefinitionIndex = 71807;

	class EMAFOGNODKM : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::TurnBasedGameMode* GICHGNGMBGD; // 0x60
		::RPG::GameCore::CharacterDataComponent* HKCICBFPGGF; // 0x68
		::CFDGKEDFBJP* NINEBKCLIOG; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::UnityEngine::Transform* PCGKMJANCNK; // 0x80
		::RPG::Client::UIFollow3DTarget* DIHCNFOOEFF; // 0x88
		::UnityEngine::RectTransform* HKONEDKHNMM; // 0x90
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x98
		::UnityEngine::Animation* BAFAAEFEBPJ; // 0xA0
		::RPG::GameCore::MonsterHUDVisibleType CFMDFAAKLGA; // 0xA8
		::System::Int32 ALLINIHNNJJ; // 0xAC
		::System::Boolean LPJHIOPCLID; // 0xB0
		::System::Boolean AKCAAKFHBNO; // 0xB1
		static ::System::Single* StaticGet_DMFNDMLIJCD()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x11390);
		}

		static ::System::Single* StaticGet_AJEHGNNEDFG()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x11394);
		}

		static ::System::Single* StaticGet_HEEPKPHCKOI()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x11398);
		}

		static ::System::Single* StaticGet_FMPCCGNHMJC()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x1139C);
		}

		static ::System::Single* StaticGet_GGMLAPKLIKB()
		{
			return (::System::Single*)UnitySDK::FromName("", "EMAFOGNODKM")->GetStaticField(0x113A0);
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + EMAFOGNODKM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMAFOGNODKM_EKGCGIDIFJJ_OFFSET))(this);
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
