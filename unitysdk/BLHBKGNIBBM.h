#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StageInvasionMonsterUIData.h"
class DCGIDEKLGAJ;
class ECJOICEMEGG;
class EFJCLCMOLGO;
class HEOLCLACIEI;
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
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define BLHBKGNIBBM_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xBA6C720)
#define BLHBKGNIBBM_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0xBA6DE20)
#define BLHBKGNIBBM_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0xBA6C910)
#define BLHBKGNIBBM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBA6E700)
#define BLHBKGNIBBM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBA6EAE0)
#define BLHBKGNIBBM_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xBA6E3D0)
#define BLHBKGNIBBM_BDHKBPHAFKP_OFFSET UNITYSDK_OFFSET(0xBA6D390)
#define BLHBKGNIBBM_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0xBA6C030)
#define BLHBKGNIBBM_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0xBA6E0E0)
#define BLHBKGNIBBM_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0xBA6DBA0)
#define BLHBKGNIBBM_CTOR_OFFSET UNITYSDK_OFFSET(0xBA6EEA0)
#define BLHBKGNIBBM_DFHKMNFAMEO_OFFSET UNITYSDK_OFFSET(0xBA6C150)
#define BLHBKGNIBBM_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0xBA6DC10)
#define BLHBKGNIBBM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBA6AA60)
#define BLHBKGNIBBM_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xBA6CF70)
#define BLHBKGNIBBM_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xBA6CC40)
#define BLHBKGNIBBM_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0xBA6C500)
#define BLHBKGNIBBM_EHAKPKPKDKB_OFFSET UNITYSDK_OFFSET(0xBA6B9F0)
#define BLHBKGNIBBM_EJOEBMLDKKB_OFFSET UNITYSDK_OFFSET(0xBA6E1D0)
#define BLHBKGNIBBM_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0xBA6B0F0)
#define BLHBKGNIBBM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBA6ACC0)
#define BLHBKGNIBBM_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0xBA6DEE0)
#define BLHBKGNIBBM_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0xBA6C9B0)
#define BLHBKGNIBBM_GMPPAPLKJNO_OFFSET UNITYSDK_OFFSET(0xBA6CEE0)
#define BLHBKGNIBBM_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0xBA6B7B0)
#define BLHBKGNIBBM_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0xBA6DCA0)
#define BLHBKGNIBBM_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0xBA6C630)
#define BLHBKGNIBBM_IBNEIAKMDKB_OFFSET UNITYSDK_OFFSET(0xBA6B400)
#define BLHBKGNIBBM_JCAEBCJGCDM_OFFSET UNITYSDK_OFFSET(0xBA6CE70)
#define BLHBKGNIBBM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xBA6B4F0)
#define BLHBKGNIBBM_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xBA6D1A0)
#define BLHBKGNIBBM_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xBA6E550)
#define BLHBKGNIBBM_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0xBA6DFD0)
#define BLHBKGNIBBM_KJEFLAFAAOB_OFFSET UNITYSDK_OFFSET(0xBA6DD60)
#define BLHBKGNIBBM_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0xBA6E490)
#define BLHBKGNIBBM_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0xBA6DAD0)
#define BLHBKGNIBBM_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0xBA6CA40)
#define BLHBKGNIBBM_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0xBA6B800)
#define BLHBKGNIBBM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xBA6A930)
#define BLHBKGNIBBM_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0xBA6B1D0)
#define BLHBKGNIBBM_MJLMLHIOMEI_OFFSET UNITYSDK_OFFSET(0xBA6D940)
#define BLHBKGNIBBM_NDIPOLGGHHF_OFFSET UNITYSDK_OFFSET(0xBA6D480)
#define BLHBKGNIBBM_NFGHPHBFEGE_OFFSET UNITYSDK_OFFSET(0xBA6E2C0)
#define BLHBKGNIBBM_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBA6AB20)
#define BLHBKGNIBBM_NLAODGOLFKG_OFFSET UNITYSDK_OFFSET(0xBA6C3C0)
#define BLHBKGNIBBM_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0xBA6BD50)
#define BLHBKGNIBBM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBA6A8E0)
#define BLHBKGNIBBM_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBA6AA10)
#define BLHBKGNIBBM_PAICDHFMCGK_OFFSET UNITYSDK_OFFSET(0xBA6CB70)
#define BLHBKGNIBBM_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0xBA6BB50)
#define BLHBKGNIBBM_PHMEJMELDOB_OFFSET UNITYSDK_OFFSET(0xBA6E610)
#define BLHBKGNIBBM__ONBIND_OFFSET UNITYSDK_OFFSET(0xBA6A470)
#define BLHBKGNIBBM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBA6B610)
#define BLHBKGNIBBM__ONTICK_OFFSET UNITYSDK_OFFSET(0xBA6B6D0)
#define BLHBKGNIBBM___FORCEPLAYHPTWEEN_B__35_0_OFFSET UNITYSDK_OFFSET(0xBA6EF00)

inline static constexpr unsigned int BLHBKGNIBBM_TypeDefinitionIndex = 71790;

	class BLHBKGNIBBM : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* EFKDBJCKBPK; // 0x60
		::HEOLCLACIEI* IIEBIBMCGNB; // 0x68
		::RPG::Client::MonsterHPBarStyle* GIMDNPHGDEJ; // 0x70
		::UnityEngine::Transform* HCOGIJGBHFB; // 0x78
		::UnityEngine::Transform* GHPLBANFEKF; // 0x80
		::KALGLFPKCGH* LFFBIIPBPJJ; // 0x88
		::ECJOICEMEGG* OPHCFDAACGK; // 0x90
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x98
		::RPG::Client::LocalizedText* LEFJHMGFOCH; // 0xA0
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0xA8
		::UnityEngine::RectTransform* COMKFDLOADC; // 0xB0
		::UnityEngine::Animation* KHONICBMFBP; // 0xB8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xC0
		::System::Single HHPNEFNNMJE; // 0xC8
		::UnityEngine::Color JPMHGCKOJBC; // 0xCC
		::System::Boolean AAGKIPFCNHO; // 0xDC
		::System::Byte _padding0[0x3];
		::UnityEngine::Color MKGFHLODOGJ; // 0xE0
		::System::Single IFOIKJADBIA; // 0xF0
		::UnityEngine::Color PPLOPNFNEDE; // 0xF4
		::System::Single AAHFGHOCABH; // 0x104
		// static const ::System::String* CBGCGEIAIAH; // 0x0
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EKGCGIDIFJJ_OFFSET))(this);
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

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_LCJLLGBJENF_OFFSET))(this);
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

		::System::Void LBBCPHPEHIO(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_LBBCPHPEHIO_OFFSET))(this, a1);
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

		::System::Void EHAKPKPKDKB(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EHAKPKPKDKB_OFFSET))(this, a1);
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

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_DGBGEJOLBEO_OFFSET))(this, a1);
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

		::System::Void EJOEBMLDKKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BLHBKGNIBBM_EJOEBMLDKKB_OFFSET))(this, a1);
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

		::System::Void __ForcePlayHPTween_b__35_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLHBKGNIBBM___FORCEPLAYHPTWEEN_B__35_0_OFFSET))(this);
		}

	};
