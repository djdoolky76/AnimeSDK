#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class CNADKCFAIEB;
class DCGIDEKLGAJ;
class ECJOICEMEGG;
class KALGLFPKCGH;
class MOCALHHICIP;
class PFMAHFAJHLC_MEBEAAGEOKK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::Client { class MonsterHPBarStyle; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TriggerUINotifyParam; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define BLHBKGNIBBM_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x18B4AEF0)
#define BLHBKGNIBBM_AIGLPGDHLKO_OFFSET UNITYSDK_OFFSET(0x18B4C6F0)
#define BLHBKGNIBBM_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0x18B4C4B0)
#define BLHBKGNIBBM_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x18B4B0E0)
#define BLHBKGNIBBM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18B4CFB0)
#define BLHBKGNIBBM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18B4D410)
#define BLHBKGNIBBM_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x18B4CC80)
#define BLHBKGNIBBM_BDHKBPHAFKP_OFFSET UNITYSDK_OFFSET(0x18B4BA50)
#define BLHBKGNIBBM_BLJMEDLHDJI_OFFSET UNITYSDK_OFFSET(0x18B4C570)
#define BLHBKGNIBBM_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x18B4A500)
#define BLHBKGNIBBM_CDPPNHNHJBK_OFFSET UNITYSDK_OFFSET(0x18B4AE20)
#define BLHBKGNIBBM_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0x18B4CA70)
#define BLHBKGNIBBM_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x18B4C2C0)
#define BLHBKGNIBBM_CTOR_OFFSET UNITYSDK_OFFSET(0x18B4D850)
#define BLHBKGNIBBM_DFHKMNFAMEO_OFFSET UNITYSDK_OFFSET(0x18B4A620)
#define BLHBKGNIBBM_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x18B4B630)
#define BLHBKGNIBBM_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x18B4B300)
#define BLHBKGNIBBM_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0x18B4A9D0)
#define BLHBKGNIBBM_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0x18B49990)
#define BLHBKGNIBBM_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0x18B4C870)
#define BLHBKGNIBBM_FMAMJMEFMNC_OFFSET UNITYSDK_OFFSET(0x18B4C190)
#define BLHBKGNIBBM_FNKFKLJFODH_OFFSET UNITYSDK_OFFSET(0x18B4ADD0)
#define BLHBKGNIBBM_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0x18B4B180)
#define BLHBKGNIBBM_GMPPAPLKJNO_OFFSET UNITYSDK_OFFSET(0x18B4B5A0)
#define BLHBKGNIBBM_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0x18B4A050)
#define BLHBKGNIBBM_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x18B4C330)
#define BLHBKGNIBBM_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0x18B4AB10)
#define BLHBKGNIBBM_IBNEIAKMDKB_OFFSET UNITYSDK_OFFSET(0x18B49CA0)
#define BLHBKGNIBBM_JCAEBCJGCDM_OFFSET UNITYSDK_OFFSET(0x18B4B530)
#define BLHBKGNIBBM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x18B49D90)
#define BLHBKGNIBBM_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x18B4B860)
#define BLHBKGNIBBM_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x18B4CE00)
#define BLHBKGNIBBM_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x18B4C960)
#define BLHBKGNIBBM_KJEFLAFAAOB_OFFSET UNITYSDK_OFFSET(0x18B4C3F0)
#define BLHBKGNIBBM_KLOAJBKEKAA_OFFSET UNITYSDK_OFFSET(0x18B4AD80)
#define BLHBKGNIBBM_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x18B4CD40)
#define BLHBKGNIBBM_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x18B4C1F0)
#define BLHBKGNIBBM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x18B492C0)
#define BLHBKGNIBBM_LLNMAFEKGAF_OFFSET UNITYSDK_OFFSET(0x18B4C7B0)
#define BLHBKGNIBBM_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0x18B49A70)
#define BLHBKGNIBBM_MJLMLHIOMEI_OFFSET UNITYSDK_OFFSET(0x18B4C000)
#define BLHBKGNIBBM_NDIPOLGGHHF_OFFSET UNITYSDK_OFFSET(0x18B4BB40)
#define BLHBKGNIBBM_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0x18B4CB60)
#define BLHBKGNIBBM_NLAODGOLFKG_OFFSET UNITYSDK_OFFSET(0x18B4A890)
#define BLHBKGNIBBM_OFGBGCLLCPO_OFFSET UNITYSDK_OFFSET(0x18B4AC70)
#define BLHBKGNIBBM_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x18B4A2A0)
#define BLHBKGNIBBM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x18B49270)
#define BLHBKGNIBBM_ONRETURN_OFFSET UNITYSDK_OFFSET(0x18B493A0)
#define BLHBKGNIBBM_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0x18B4B210)
#define BLHBKGNIBBM_PDHIABLOAIP_OFFSET UNITYSDK_OFFSET(0x18B4C630)
#define BLHBKGNIBBM_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x18B4A0A0)
#define BLHBKGNIBBM_PHMEJMELDOB_OFFSET UNITYSDK_OFFSET(0x18B4CEC0)
#define BLHBKGNIBBM__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x18B494B0)
#define BLHBKGNIBBM__ONBIND_OFFSET UNITYSDK_OFFSET(0x18B48B70)
#define BLHBKGNIBBM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x18B49EB0)
#define BLHBKGNIBBM__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x18B493F0)
#define BLHBKGNIBBM__ONTICK_OFFSET UNITYSDK_OFFSET(0x18B49F70)
#define BLHBKGNIBBM__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x18B49650)
#define BLHBKGNIBBM___FORCEPLAYHPTWEEN_B__36_0_OFFSET UNITYSDK_OFFSET(0x18B4D8B0)

inline static constexpr unsigned int BLHBKGNIBBM_TypeDefinitionIndex = 73809;

	class BLHBKGNIBBM : public ::FMPCODLIOLG
	{
	public:
		::CNADKCFAIEB* IIEBIBMCGNB; // 0x60
		::UnityEngine::Transform* HCOGIJGBHFB; // 0x68
		::RPG::Client::MonsterHPBarStyle* GIMDNPHGDEJ; // 0x70
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x78
		::ECJOICEMEGG* OPHCFDAACGK; // 0x80
		::UnityEngine::Animation* KHONICBMFBP; // 0x88
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x90
		::KALGLFPKCGH* LFFBIIPBPJJ; // 0x98
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xA0
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0xA8
		::UnityEngine::Transform* GHPLBANFEKF; // 0xB0
		::RPG::Client::LocalizedText* LEFJHMGFOCH; // 0xB8
		::System::Single AAHFGHOCABH; // 0xC0
		::UnityEngine::Color MKGFHLODOGJ; // 0xC4
		::UnityEngine::Color PPLOPNFNEDE; // 0xD4
		::System::Single IFOIKJADBIA; // 0xE4
		::UnityEngine::Color JPMHGCKOJBC; // 0xE8
		::System::Single HHPNEFNNMJE; // 0xF8
		::System::Boolean AAGKIPFCNHO; // 0xFC
		// static const ::System::String* IALFONPILCN; // 0x0
		// static const ::System::String* BKOOGOBKBBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLHBKGNIBBM__ONTICK_OFFSET))(this, a1);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void DFHKMNFAMEO(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_DFHKMNFAMEO_OFFSET))(this, a1);
		}

		::System::Void EDADOIOIJEL(::RPG::GameCore::AbilityDirtyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EDADOIOIJEL_OFFSET))(this, a1);
		}

		::System::Void OFGBGCLLCPO(::RPG::GameCore::TriggerUINotifyParam* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TriggerUINotifyParam*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_OFGBGCLLCPO_OFFSET))(this, a1);
		}

		::System::Void KLOAJBKEKAA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KLOAJBKEKAA_OFFSET))(this);
		}

		::System::Void FNKFKLJFODH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_FNKFKLJFODH_OFFSET))(this);
		}

		::System::Void CDPPNHNHJBK(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CDPPNHNHJBK_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityRallyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void GLPIALKAHDI(::MOCALHHICIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCALHHICIP*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_GLPIALKAHDI_OFFSET))(this, a1);
		}

		::System::Void PAICDHFMCGK(::RPG::GameCore::StageInvasionMonsterUIData a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::StageInvasionMonsterUIData))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PAICDHFMCGK_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Boolean JCAEBCJGCDM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_JCAEBCJGCDM_OFFSET))(this, a1);
		}

		::System::Void GMPPAPLKJNO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_GMPPAPLKJNO_OFFSET))(this);
		}

		::System::Void BDHKBPHAFKP(::PFMAHFAJHLC_MEBEAAGEOKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMAHFAJHLC_MEBEAAGEOKK*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_BDHKBPHAFKP_OFFSET))(this, a1);
		}

		::System::Void NDIPOLGGHHF(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NDIPOLGGHHF_OFFSET))(this, a1, a2);
		}

		::System::Void MJLMLHIOMEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_MJLMLHIOMEI_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_OMNOCGOKIDP_OFFSET))(this);
		}

		::System::Void NLAODGOLFKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NLAODGOLFKG_OFFSET))(this);
		}

		::System::Void HOBCJKNLMGF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_HOBCJKNLMGF_OFFSET))(this);
		}

		::System::Boolean FMAMJMEFMNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_FMAMJMEFMNC_OFFSET))(this);
		}

		::System::Void MFJOANOEHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_MFJOANOEHJD_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CCJBBIOCLIM_OFFSET))(this);
		}

		::System::Void KOLBHPFLGHN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KOLBHPFLGHN_OFFSET))(this, a1);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void EKCHAHDIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EKCHAHDIEFH_OFFSET))(this);
		}

		::System::Void IBNEIAKMDKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_IBNEIAKMDKB_OFFSET))(this);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void KJEFLAFAAOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KJEFLAFAAOB_OFFSET))(this, a1);
		}

		::System::Void AIKDLOJOJOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AIKDLOJOJOC_OFFSET))(this, a1);
		}

		::System::Void BLJMEDLHDJI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_BLJMEDLHDJI_OFFSET))(this, a1);
		}

		::System::Void PDHIABLOAIP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PDHIABLOAIP_OFFSET))(this, a1);
		}

		::System::Void AIGLPGDHLKO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AIGLPGDHLKO_OFFSET))(this, a1);
		}

		::System::Void LLNMAFEKGAF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_LLNMAFEKGAF_OFFSET))(this, a1);
		}

		::System::Void FHGAGLNCNMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_FHGAGLNCNMO_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void CIHGFALFMFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_CIHGFALFMFK_OFFSET))(this, a1);
		}

		::System::Void NFGHPHBFEGE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NFGHPHBFEGE_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void PHMEJMELDOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_PHMEJMELDOB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __ForcePlayHPTween_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM___FORCEPLAYHPTWEEN_B__36_0_OFFSET))(this);
		}

	};
