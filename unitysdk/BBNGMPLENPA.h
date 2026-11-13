#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class GEHLOHBBKLL;
class HGKIKKOLLFA;
class IIOGEFLNOCE;
class JPOKOHEHHLL;
class MOCALHHICIP;
class PMGOFCCJEDE;
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::Client { class PluralityHPBarValue; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TriggerUINotifyParam; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define BBNGMPLENPA_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x19D643E0)
#define BBNGMPLENPA_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0x19D65CA0)
#define BBNGMPLENPA_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x19D64960)
#define BBNGMPLENPA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x19D667E0)
#define BBNGMPLENPA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x19D66C40)
#define BBNGMPLENPA_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x19D66480)
#define BBNGMPLENPA_BJHKJBMJEJN_OFFSET UNITYSDK_OFFSET(0x19D655E0)
#define BBNGMPLENPA_BLJMEDLHDJI_OFFSET UNITYSDK_OFFSET(0x19D65D60)
#define BBNGMPLENPA_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x19D63FB0)
#define BBNGMPLENPA_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0x19D660F0)
#define BBNGMPLENPA_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x19D658C0)
#define BBNGMPLENPA_CTOR_OFFSET UNITYSDK_OFFSET(0x19D67080)
#define BBNGMPLENPA_DFHKABOABGJ_OFFSET UNITYSDK_OFFSET(0x19D65EF0)
#define BBNGMPLENPA_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x19D651C0)
#define BBNGMPLENPA_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0x19D64BC0)
#define BBNGMPLENPA_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x19D64E90)
#define BBNGMPLENPA_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0x19D64620)
#define BBNGMPLENPA_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0x19D661E0)
#define BBNGMPLENPA_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0x19D65930)
#define BBNGMPLENPA_FDAMOKINFFE_OFFSET UNITYSDK_OFFSET(0x19D64CD0)
#define BBNGMPLENPA_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0x19D65BB0)
#define BBNGMPLENPA_GLBNHFKDBFO_OFFSET UNITYSDK_OFFSET(0x19D65640)
#define BBNGMPLENPA_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0x19D64B40)
#define BBNGMPLENPA_GMPPAPLKJNO_OFFSET UNITYSDK_OFFSET(0x19D65130)
#define BBNGMPLENPA_GNEJCDGCODK_OFFSET UNITYSDK_OFFSET(0x19D64A50)
#define BBNGMPLENPA_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0x19D63B30)
#define BBNGMPLENPA_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x19D65AF0)
#define BBNGMPLENPA_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0x19D64760)
#define BBNGMPLENPA_IBNEIAKMDKB_OFFSET UNITYSDK_OFFSET(0x19D637D0)
#define BBNGMPLENPA_JCAEBCJGCDM_OFFSET UNITYSDK_OFFSET(0x19D650C0)
#define BBNGMPLENPA_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x19D653F0)
#define BBNGMPLENPA_KEPPMBALPFC_OFFSET UNITYSDK_OFFSET(0x19D65FF0)
#define BBNGMPLENPA_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x19D66600)
#define BBNGMPLENPA_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x19D65E20)
#define BBNGMPLENPA_KLOAJBKEKAA_OFFSET UNITYSDK_OFFSET(0x19D649C0)
#define BBNGMPLENPA_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x19D66540)
#define BBNGMPLENPA_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x19D657A0)
#define BBNGMPLENPA_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x19D63020)
#define BBNGMPLENPA_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0x19D636A0)
#define BBNGMPLENPA_MGJPOLKDPKB_OFFSET UNITYSDK_OFFSET(0x19D65A20)
#define BBNGMPLENPA_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0x19D66360)
#define BBNGMPLENPA_OFGBGCLLCPO_OFFSET UNITYSDK_OFFSET(0x19D64850)
#define BBNGMPLENPA_OFJPMMBPCJH_OFFSET UNITYSDK_OFFSET(0x19D666C0)
#define BBNGMPLENPA_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x19D63E20)
#define BBNGMPLENPA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x19D62FC0)
#define BBNGMPLENPA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x19D63100)
#define BBNGMPLENPA_PAFCJJNEOOC_OFFSET UNITYSDK_OFFSET(0x19D639F0)
#define BBNGMPLENPA_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0x19D64DA0)
#define BBNGMPLENPA_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x19D63B80)
#define BBNGMPLENPA_PEECLKDOHCJ_OFFSET UNITYSDK_OFFSET(0x19D662D0)
#define BBNGMPLENPA__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x19D63240)
#define BBNGMPLENPA__ONBIND_OFFSET UNITYSDK_OFFSET(0x19D62C00)
#define BBNGMPLENPA__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x19D63160)
#define BBNGMPLENPA__ONTICK_OFFSET UNITYSDK_OFFSET(0x19D63AA0)
#define BBNGMPLENPA__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x19D633F0)

inline static constexpr unsigned int BBNGMPLENPA_TypeDefinitionIndex = 73496;

	class BBNGMPLENPA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0x60
		::UnityEngine::Transform* OJGNPJNFLMB; // 0x68
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x70
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x78
		::RPG::Client::PluralityHPBarValue* FKLMODBKBMN; // 0x80
		::GEHLOHBBKLL* OKHDAMMMMLI; // 0x88
		::UnityEngine::UI::Text* CBFPCIBCOHL; // 0x90
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x98
		::IIOGEFLNOCE* JCOAIELFALK; // 0xA0
		::UnityEngine::Animation* KHONICBMFBP; // 0xA8
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xB0
		::RPG::Client::MonsterHPBarStyle* GIMDNPHGDEJ; // 0xB8
		::HGKIKKOLLFA* INFKHFPPPCN; // 0xC0
		::RPG::Client::PluralityHPBarValue* CGCNFLACMBB; // 0xC8
		::System::Decimal DODFNGKLPHK; // 0xD0
		::System::Int32 NNHBIPEOPJN; // 0xE0
		::UnityEngine::Color MKGFHLODOGJ; // 0xE4
		::UnityEngine::Color PPLOPNFNEDE; // 0xF4
		::System::Boolean AAGKIPFCNHO; // 0x104
		::System::Boolean EHCNHMLLAIC; // 0x105
		::System::Byte _padding0[0x2];
		::System::Single IFOIKJADBIA; // 0x108
		::System::Single HHPNEFNNMJE; // 0x10C
		// static const ::System::String* BKOOGOBKBBK; // 0x0
		// static const ::System::Object FBMEHBNMENP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BBNGMPLENPA__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBNGMPLENPA__ONTICK_OFFSET))(this, a1);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityRallyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void EDADOIOIJEL(::RPG::GameCore::AbilityDirtyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_EDADOIOIJEL_OFFSET))(this, a1);
		}

		::System::Void OFGBGCLLCPO(::RPG::GameCore::TriggerUINotifyParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerUINotifyParam*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_OFGBGCLLCPO_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void KLOAJBKEKAA(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + BBNGMPLENPA_KLOAJBKEKAA_OFFSET))(this, a1);
		}

		::System::Void GNEJCDGCODK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBNGMPLENPA_GNEJCDGCODK_OFFSET))(this, a1);
		}

		::System::Void GLPIALKAHDI(::MOCALHHICIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCALHHICIP*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_GLPIALKAHDI_OFFSET))(this, a1);
		}

		::System::Void DOJPGAOICJF(::JPOKOHEHHLL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JPOKOHEHHLL*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_DOJPGAOICJF_OFFSET))(this, a1);
		}

		::System::Void FDAMOKINFFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_FDAMOKINFFE_OFFSET))(this);
		}

		::System::Void PAICDHFMCGK(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + BBNGMPLENPA_PAICDHFMCGK_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void BJHKJBMJEJN(::PMGOFCCJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMGOFCCJEDE*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_BJHKJBMJEJN_OFFSET))(this, a1);
		}

		::System::Boolean JCAEBCJGCDM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_JCAEBCJGCDM_OFFSET))(this, a1);
		}

		::System::Void GMPPAPLKJNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_GMPPAPLKJNO_OFFSET))(this);
		}

		::System::Void IBNEIAKMDKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_IBNEIAKMDKB_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_OMNOCGOKIDP_OFFSET))(this);
		}

		::System::Void MFJOANOEHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_MFJOANOEHJD_OFFSET))(this);
		}

		::System::Void HOBCJKNLMGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_HOBCJKNLMGF_OFFSET))(this);
		}

		::System::Void GLBNHFKDBFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_GLBNHFKDBFO_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM(::System::Decimal a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Decimal))((::PBYTE)hIl2Cpp + BBNGMPLENPA_CCJBBIOCLIM_OFFSET))(this, a1);
		}

		::System::Void KOLBHPFLGHN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BBNGMPLENPA_KOLBHPFLGHN_OFFSET))(this, a1, a2);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void EKCHAHDIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_EKCHAHDIEFH_OFFSET))(this);
		}

		::System::Void MGJPOLKDPKB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BBNGMPLENPA_MGJPOLKDPKB_OFFSET))(this, a1);
		}

		::System::Void PAFCJJNEOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_PAFCJJNEOOC_OFFSET))(this);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void FHGAGLNCNMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_FHGAGLNCNMO_OFFSET))(this, a1);
		}

		::System::Void AIKDLOJOJOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_AIKDLOJOJOC_OFFSET))(this, a1);
		}

		::System::Void BLJMEDLHDJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_BLJMEDLHDJI_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void DFHKABOABGJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_DFHKABOABGJ_OFFSET))(this, a1);
		}

		::System::Void KEPPMBALPFC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_KEPPMBALPFC_OFFSET))(this, a1);
		}

		::System::Void CIHGFALFMFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_CIHGFALFMFK_OFFSET))(this, a1);
		}

		::System::Void EEMBDMEHHHH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_EEMBDMEHHHH_OFFSET))(this, a1);
		}

		::System::Void PEECLKDOHCJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_PEECLKDOHCJ_OFFSET))(this, a1);
		}

		::System::Void NFGHPHBFEGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_NFGHPHBFEGE_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void OFJPMMBPCJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_OFJPMMBPCJH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
