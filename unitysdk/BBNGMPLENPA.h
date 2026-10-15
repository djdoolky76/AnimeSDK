#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/System/Decimal.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class EFJCLCMOLGO;
class GEHLOHBBKLL;
class HEOLCLACIEI;
class HGKIKKOLLFA;
class IIOGEFLNOCE;
class JPOKOHEHHLL;
class MOCALHHICIP;
class PMGOFCCJEDE;
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class BattleInstance; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class ParticleSystem; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define BBNGMPLENPA_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x15E897D0)
#define BBNGMPLENPA_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0x15E8B270)
#define BBNGMPLENPA_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x15E89C40)
#define BBNGMPLENPA_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15E8BDD0)
#define BBNGMPLENPA_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15E8C230)
#define BBNGMPLENPA_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x15E8BA70)
#define BBNGMPLENPA_BJHKJBMJEJN_OFFSET UNITYSDK_OFFSET(0x15E8ABC0)
#define BBNGMPLENPA_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x15E893E0)
#define BBNGMPLENPA_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0x15E8B600)
#define BBNGMPLENPA_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x15E8AEA0)
#define BBNGMPLENPA_CTOR_OFFSET UNITYSDK_OFFSET(0x15E8C670)
#define BBNGMPLENPA_DFHKABOABGJ_OFFSET UNITYSDK_OFFSET(0x15E8B400)
#define BBNGMPLENPA_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15E882A0)
#define BBNGMPLENPA_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x15E8A7A0)
#define BBNGMPLENPA_DOJPGAOICJF_OFFSET UNITYSDK_OFFSET(0x15E8A1C0)
#define BBNGMPLENPA_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x15E8A470)
#define BBNGMPLENPA_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0x15E89A20)
#define BBNGMPLENPA_EEMBDMEHHHH_OFFSET UNITYSDK_OFFSET(0x15E8B7E0)
#define BBNGMPLENPA_EJOEBMLDKKB_OFFSET UNITYSDK_OFFSET(0x15E8B6F0)
#define BBNGMPLENPA_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0x15E8AF00)
#define BBNGMPLENPA_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15E88530)
#define BBNGMPLENPA_FDAMOKINFFE_OFFSET UNITYSDK_OFFSET(0x15E8A2D0)
#define BBNGMPLENPA_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0x15E8B180)
#define BBNGMPLENPA_GLBNHFKDBFO_OFFSET UNITYSDK_OFFSET(0x15E8AC20)
#define BBNGMPLENPA_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0x15E89E30)
#define BBNGMPLENPA_GMPPAPLKJNO_OFFSET UNITYSDK_OFFSET(0x15E8A710)
#define BBNGMPLENPA_GNEJCDGCODK_OFFSET UNITYSDK_OFFSET(0x15E89D40)
#define BBNGMPLENPA_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0x15E88DA0)
#define BBNGMPLENPA_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x15E8B0C0)
#define BBNGMPLENPA_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0x15E89B50)
#define BBNGMPLENPA_IBNEIAKMDKB_OFFSET UNITYSDK_OFFSET(0x15E88A40)
#define BBNGMPLENPA_JCAEBCJGCDM_OFFSET UNITYSDK_OFFSET(0x15E8A6A0)
#define BBNGMPLENPA_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x15E8A9D0)
#define BBNGMPLENPA_KEPPMBALPFC_OFFSET UNITYSDK_OFFSET(0x15E8B500)
#define BBNGMPLENPA_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x15E8BBF0)
#define BBNGMPLENPA_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x15E8B330)
#define BBNGMPLENPA_KLOAJBKEKAA_OFFSET UNITYSDK_OFFSET(0x15E89CA0)
#define BBNGMPLENPA_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x15E8BB30)
#define BBNGMPLENPA_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x15E8AD80)
#define BBNGMPLENPA_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0x15E89EC0)
#define BBNGMPLENPA_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x15E88160)
#define BBNGMPLENPA_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0x15E88900)
#define BBNGMPLENPA_MGJPOLKDPKB_OFFSET UNITYSDK_OFFSET(0x15E8AFF0)
#define BBNGMPLENPA_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0x15E8B960)
#define BBNGMPLENPA_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15E88380)
#define BBNGMPLENPA_OFJPMMBPCJH_OFFSET UNITYSDK_OFFSET(0x15E8BCB0)
#define BBNGMPLENPA_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x15E89090)
#define BBNGMPLENPA_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15E88100)
#define BBNGMPLENPA_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15E88240)
#define BBNGMPLENPA_PAFCJJNEOOC_OFFSET UNITYSDK_OFFSET(0x15E88C60)
#define BBNGMPLENPA_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0x15E8A3A0)
#define BBNGMPLENPA_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x15E88DF0)
#define BBNGMPLENPA_PEECLKDOHCJ_OFFSET UNITYSDK_OFFSET(0x15E8B8D0)
#define BBNGMPLENPA__ONBIND_OFFSET UNITYSDK_OFFSET(0x15E87EA0)
#define BBNGMPLENPA__ONTICK_OFFSET UNITYSDK_OFFSET(0x15E88D10)

inline static constexpr unsigned int BBNGMPLENPA_TypeDefinitionIndex = 71511;

	class BBNGMPLENPA : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* KHONICBMFBP; // 0x60
		::IIOGEFLNOCE* JCOAIELFALK; // 0x68
		::RPG::Client::MonsterHPBarStyle* GIMDNPHGDEJ; // 0x70
		::UnityEngine::UI::Text* CBFPCIBCOHL; // 0x78
		::UnityEngine::ParticleSystem* HDNJKMJLOOG; // 0x80
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x88
		::HGKIKKOLLFA* INFKHFPPPCN; // 0x90
		::UnityEngine::Transform* OJGNPJNFLMB; // 0x98
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xA0
		::HEOLCLACIEI* IIEBIBMCGNB; // 0xA8
		::GEHLOHBBKLL* OKHDAMMMMLI; // 0xB0
		::RPG::GameCore::BattleInstance* IFKCCHIFMOC; // 0xB8
		::UnityEngine::RectTransform* COMKFDLOADC; // 0xC0
		::System::Decimal DODFNGKLPHK; // 0xC8
		::System::Single IFOIKJADBIA; // 0xD8
		::UnityEngine::Color PPLOPNFNEDE; // 0xDC
		::UnityEngine::Color MKGFHLODOGJ; // 0xEC
		::System::Int32 NNHBIPEOPJN; // 0xFC
		::System::Boolean EHCNHMLLAIC; // 0x100
		::System::Boolean AAGKIPFCNHO; // 0x101
		::System::Byte _padding0[0x2];
		::System::Single HHPNEFNNMJE; // 0x104
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BBNGMPLENPA_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBNGMPLENPA_EKGCGIDIFJJ_OFFSET))(this);
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

		::System::Void LBBCPHPEHIO(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_LBBCPHPEHIO_OFFSET))(this, a1);
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

		::System::Void EJOEBMLDKKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BBNGMPLENPA_EJOEBMLDKKB_OFFSET))(this, a1);
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
