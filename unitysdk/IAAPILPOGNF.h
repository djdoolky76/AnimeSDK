#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BLPHAKIGKLK;
class CLHHHJEKMHC;
class CNADKCFAIEB;
class DCGIDEKLGAJ;
class EELDIPDFMNB;
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterReviveFromRevivable; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IAAPILPOGNF_ABLDFEINJOP_OFFSET UNITYSDK_OFFSET(0x16DA4FB0)
#define IAAPILPOGNF_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x16DA21E0)
#define IAAPILPOGNF_AIGJIKFEHEP_OFFSET UNITYSDK_OFFSET(0x16DA2650)
#define IAAPILPOGNF_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0x16DA4CF0)
#define IAAPILPOGNF_APHAMGIHNNO_OFFSET UNITYSDK_OFFSET(0x16DA3440)
#define IAAPILPOGNF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16DA5370)
#define IAAPILPOGNF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16DA5850)
#define IAAPILPOGNF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x16DA5070)
#define IAAPILPOGNF_CDLBPIDKIIB_OFFSET UNITYSDK_OFFSET(0x16DA4490)
#define IAAPILPOGNF_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0x16DA2800)
#define IAAPILPOGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x16DA5CF0)
#define IAAPILPOGNF_DFJOJCBFFAM_OFFSET UNITYSDK_OFFSET(0x16DA3820)
#define IAAPILPOGNF_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x16DA3D70)
#define IAAPILPOGNF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x16DA36C0)
#define IAAPILPOGNF_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0x16DA3010)
#define IAAPILPOGNF_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0x16DA2010)
#define IAAPILPOGNF_FFIOHDEPPMJ_OFFSET UNITYSDK_OFFSET(0x16DA40C0)
#define IAAPILPOGNF_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0x16DA4C30)
#define IAAPILPOGNF_FJEEHFBCCLH_OFFSET UNITYSDK_OFFSET(0x16DA52B0)
#define IAAPILPOGNF_FJGLNPIJLOH_OFFSET UNITYSDK_OFFSET(0x16DA45B0)
#define IAAPILPOGNF_GLBNHFKDBFO_OFFSET UNITYSDK_OFFSET(0x16DA2EF0)
#define IAAPILPOGNF_HJLGMAOIONF_OFFSET UNITYSDK_OFFSET(0x16DA2D00)
#define IAAPILPOGNF_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0x16DA49C0)
#define IAAPILPOGNF_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0x16DA2E50)
#define IAAPILPOGNF_IBFMGHKJAGF_OFFSET UNITYSDK_OFFSET(0x16DA1FB0)
#define IAAPILPOGNF_INLELPPAJKD_OFFSET UNITYSDK_OFFSET(0x16DA4DB0)
#define IAAPILPOGNF_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x16DA4EC0)
#define IAAPILPOGNF_JBBPFHNIKNH_OFFSET UNITYSDK_OFFSET(0x16DA4020)
#define IAAPILPOGNF_JEIKIJCOKHJ_OFFSET UNITYSDK_OFFSET(0x16DA4B40)
#define IAAPILPOGNF_JMFPBHMJJIJ_OFFSET UNITYSDK_OFFSET(0x16DA3230)
#define IAAPILPOGNF_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x16DA3EC0)
#define IAAPILPOGNF_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x16DA4A80)
#define IAAPILPOGNF_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x16DA51F0)
#define IAAPILPOGNF_KMAGNFLJNGE_OFFSET UNITYSDK_OFFSET(0x16DA3550)
#define IAAPILPOGNF_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0x16DA34A0)
#define IAAPILPOGNF_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x16DA5130)
#define IAAPILPOGNF_LFINLNIOODA_OFFSET UNITYSDK_OFFSET(0x16DA4320)
#define IAAPILPOGNF_MJCCEAFDBHF_OFFSET UNITYSDK_OFFSET(0x16DA2BA0)
#define IAAPILPOGNF_MMPJOCOLCDF_OFFSET UNITYSDK_OFFSET(0x16DA16F0)
#define IAAPILPOGNF_NLEKGFJGGCI_OFFSET UNITYSDK_OFFSET(0x16DA4240)
#define IAAPILPOGNF_NNMBNFKDGIC_OFFSET UNITYSDK_OFFSET(0x16DA30E0)
#define IAAPILPOGNF_NPEEPDCMPOL_OFFSET UNITYSDK_OFFSET(0x16DA4540)
#define IAAPILPOGNF_OAJCDLOOFDG_OFFSET UNITYSDK_OFFSET(0x16DA44E0)
#define IAAPILPOGNF_OCDMHKGIFHN_OFFSET UNITYSDK_OFFSET(0x16DA2520)
#define IAAPILPOGNF_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x16DA32D0)
#define IAAPILPOGNF_OKMCJCFNEHF_OFFSET UNITYSDK_OFFSET(0x16DA38C0)
#define IAAPILPOGNF_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x16DA2430)
#define IAAPILPOGNF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16DA1250)
#define IAAPILPOGNF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16DA1810)
#define IAAPILPOGNF_PDCHEOHHDMJ_OFFSET UNITYSDK_OFFSET(0x16DA4430)
#define IAAPILPOGNF_PHAPBAEDGII_OFFSET UNITYSDK_OFFSET(0x16DA1860)
#define IAAPILPOGNF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16DA1000)
#define IAAPILPOGNF__ONBIND_OFFSET UNITYSDK_OFFSET(0x16DA1A60)
#define IAAPILPOGNF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16DA11E0)
#define IAAPILPOGNF__ONTICK_OFFSET UNITYSDK_OFFSET(0x16DA4660)
#define IAAPILPOGNF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16DA12C0)

inline static constexpr unsigned int IAAPILPOGNF_TypeDefinitionIndex = 73470;

	class IAAPILPOGNF : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::HashSet_1<::System::String*>* NHKNBCHIDPP; // 0x60
		::UnityEngine::UI::Text* MNNOKJCEOME; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BLPHAKIGKLK*>* DPDFANMBFCB; // 0x70
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x78
		::UnityEngine::UI::Text* NOPPGJEMCPM; // 0x80
		::UnityEngine::UI::Text* GCDCJINLCIK; // 0x88
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LJNPOOOBPIG; // 0x90
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x98
		::UnityEngine::Transform* PJBEBENBCAL; // 0xA0
		::EELDIPDFMNB* GBJFOAPCOGB; // 0xA8
		::UnityEngine::Transform* MKPEFFCAPKI; // 0xB0
		::CLHHHJEKMHC* DCBPJKBDPFJ; // 0xB8
		::CNADKCFAIEB* IIEBIBMCGNB; // 0xC0
		::System::Single IFOIKJADBIA; // 0xC8
		::UnityEngine::Color KOONDAECICP; // 0xCC
		::System::Single NCDEHGBPMFC; // 0xDC
		::UnityEngine::Color EMFMJHGCGGO; // 0xE0
		::System::Boolean ELDELIKOKFF; // 0xF0
		::System::Boolean PEFACPDHDDA; // 0xF1
		::System::Boolean NHMPFHBPHOE; // 0xF2
		::System::Byte _padding0[0x1];
		::UnityEngine::Color LBKNLANLLPM; // 0xF4
		::UnityEngine::Color KONOIBAIJLP; // 0x104
		::UnityEngine::Color PPLOPNFNEDE; // 0x114
		::System::Single HHPNEFNNMJE; // 0x124
		::System::Single EJODMPPDFPE; // 0x128
		::UnityEngine::Color MKGFHLODOGJ; // 0x12C
		// static const ::System::Object EFLLOMHDLLO; // 0x0
		// static const ::System::String* IALFONPILCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_CTOR_OFFSET))(this);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF__INITVARONCE_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IAAPILPOGNF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF__ONBIND_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void AIGJIKFEHEP(::RPG::GameCore::AbilityRallyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_AIGJIKFEHEP_OFFSET))(this, a1);
		}

		::System::Void CLLJFELLOBF(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_CLLJFELLOBF_OFFSET))(this, a1);
		}

		::System::Void EDADOIOIJEL(::RPG::GameCore::AbilityDirtyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_EDADOIOIJEL_OFFSET))(this, a1);
		}

		::System::Void JMFPBHMJJIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_JMFPBHMJJIJ_OFFSET))(this);
		}

		::System::Void OGPAMKGAGJF(::RPG::GameCore::EntityRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void KMKEGNFJIOI(::RPG::GameCore::LevelCharacterReviveFromRevivable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterReviveFromRevivable*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_KMKEGNFJIOI_OFFSET))(this, a1);
		}

		::System::Void KMAGNFLJNGE(::RPG::GameCore::AbilityBeingLimbo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_KMAGNFLJNGE_OFFSET))(this, a1);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void NLEKGFJGGCI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_NLEKGFJGGCI_OFFSET))(this, a1);
		}

		::System::Void MMPJOCOLCDF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_MMPJOCOLCDF_OFFSET))(this);
		}

		::System::Void OKMCJCFNEHF(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_OKMCJCFNEHF_OFFSET))(this, a1);
		}

		::System::Void PHAPBAEDGII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_PHAPBAEDGII_OFFSET))(this);
		}

		::System::Void FFIOHDEPPMJ(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_FFIOHDEPPMJ_OFFSET))(this, a1);
		}

		::System::Boolean LFINLNIOODA(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_LFINLNIOODA_OFFSET))(this, a1);
		}

		::System::Void DFJOJCBFFAM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_DFJOJCBFFAM_OFFSET))(this, a1);
		}

		::System::Void JBBPFHNIKNH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_JBBPFHNIKNH_OFFSET))(this, a1);
		}

		::System::Boolean PDCHEOHHDMJ(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_PDCHEOHHDMJ_OFFSET))(this, a1);
		}

		::System::Void EHFEKJGMMPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_EHFEKJGMMPG_OFFSET))(this);
		}

		::System::Void IBFMGHKJAGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAPILPOGNF_IBFMGHKJAGF_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAPILPOGNF_OMNOCGOKIDP_OFFSET))(this, a1);
		}

		::System::Single CDLBPIDKIIB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_CDLBPIDKIIB_OFFSET))(this);
		}

		::System::Void HOBCJKNLMGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAPILPOGNF_HOBCJKNLMGF_OFFSET))(this, a1);
		}

		::System::Void NNMBNFKDGIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_NNMBNFKDGIC_OFFSET))(this);
		}

		::System::Boolean OAJCDLOOFDG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAPILPOGNF_OAJCDLOOFDG_OFFSET))(this, a1);
		}

		::System::Void GLBNHFKDBFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_GLBNHFKDBFO_OFFSET))(this);
		}

		::System::Void NPEEPDCMPOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAPILPOGNF_NPEEPDCMPOL_OFFSET))(this, a1);
		}

		::System::Void HJLGMAOIONF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAPILPOGNF_HJLGMAOIONF_OFFSET))(this, a1);
		}

		::System::Void OCDMHKGIFHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_OCDMHKGIFHN_OFFSET))(this);
		}

		::System::Void FJGLNPIJLOH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAPILPOGNF_FJGLNPIJLOH_OFFSET))(this, a1);
		}

		::System::Void MJCCEAFDBHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_MJCCEAFDBHF_OFFSET))(this);
		}

		::System::Void APHAMGIHNNO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IAAPILPOGNF_APHAMGIHNNO_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IAAPILPOGNF__ONTICK_OFFSET))(this, a1);
		}

		::System::Void HKLCKJEOOAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_HKLCKJEOOAI_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void JEIKIJCOKHJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_JEIKIJCOKHJ_OFFSET))(this, a1);
		}

		::System::Void FHEBAMAAGPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_FHEBAMAAGPD_OFFSET))(this, a1);
		}

		::System::Void AIKDLOJOJOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_AIKDLOJOJOC_OFFSET))(this, a1);
		}

		::System::Void INLELPPAJKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_INLELPPAJKD_OFFSET))(this, a1);
		}

		::System::Void IPMGACIGPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_IPMGACIGPOE_OFFSET))(this, a1);
		}

		::System::Void ABLDFEINJOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_ABLDFEINJOP_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void FJEEHFBCCLH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_FJEEHFBCCLH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
