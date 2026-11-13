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

#define IAAPILPOGNF_ABLDFEINJOP_OFFSET UNITYSDK_OFFSET(0x1940EA50)
#define IAAPILPOGNF_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x1940BC20)
#define IAAPILPOGNF_AIGJIKFEHEP_OFFSET UNITYSDK_OFFSET(0x1940C0B0)
#define IAAPILPOGNF_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0x1940E790)
#define IAAPILPOGNF_APHAMGIHNNO_OFFSET UNITYSDK_OFFSET(0x1940CEB0)
#define IAAPILPOGNF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x1940EE10)
#define IAAPILPOGNF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x1940F2F0)
#define IAAPILPOGNF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x1940EB10)
#define IAAPILPOGNF_CDLBPIDKIIB_OFFSET UNITYSDK_OFFSET(0x1940DF20)
#define IAAPILPOGNF_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0x1940C260)
#define IAAPILPOGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x1940F790)
#define IAAPILPOGNF_DFJOJCBFFAM_OFFSET UNITYSDK_OFFSET(0x1940D290)
#define IAAPILPOGNF_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x1940D800)
#define IAAPILPOGNF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x1940D130)
#define IAAPILPOGNF_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0x1940CA70)
#define IAAPILPOGNF_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0x1940BA50)
#define IAAPILPOGNF_FFIOHDEPPMJ_OFFSET UNITYSDK_OFFSET(0x1940DB50)
#define IAAPILPOGNF_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0x1940E6D0)
#define IAAPILPOGNF_FJEEHFBCCLH_OFFSET UNITYSDK_OFFSET(0x1940ED50)
#define IAAPILPOGNF_FJGLNPIJLOH_OFFSET UNITYSDK_OFFSET(0x1940E040)
#define IAAPILPOGNF_GLBNHFKDBFO_OFFSET UNITYSDK_OFFSET(0x1940C960)
#define IAAPILPOGNF_HJLGMAOIONF_OFFSET UNITYSDK_OFFSET(0x1940C760)
#define IAAPILPOGNF_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0x1940E460)
#define IAAPILPOGNF_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0x1940C8C0)
#define IAAPILPOGNF_IBFMGHKJAGF_OFFSET UNITYSDK_OFFSET(0x1940B9F0)
#define IAAPILPOGNF_INLELPPAJKD_OFFSET UNITYSDK_OFFSET(0x1940E850)
#define IAAPILPOGNF_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x1940E960)
#define IAAPILPOGNF_JBBPFHNIKNH_OFFSET UNITYSDK_OFFSET(0x1940DAB0)
#define IAAPILPOGNF_JEIKIJCOKHJ_OFFSET UNITYSDK_OFFSET(0x1940E5E0)
#define IAAPILPOGNF_JMFPBHMJJIJ_OFFSET UNITYSDK_OFFSET(0x1940CCA0)
#define IAAPILPOGNF_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x1940D950)
#define IAAPILPOGNF_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x1940E520)
#define IAAPILPOGNF_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x1940EC90)
#define IAAPILPOGNF_KMAGNFLJNGE_OFFSET UNITYSDK_OFFSET(0x1940CFC0)
#define IAAPILPOGNF_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0x1940CF10)
#define IAAPILPOGNF_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x1940EBD0)
#define IAAPILPOGNF_LFINLNIOODA_OFFSET UNITYSDK_OFFSET(0x1940DDB0)
#define IAAPILPOGNF_MJCCEAFDBHF_OFFSET UNITYSDK_OFFSET(0x1940C600)
#define IAAPILPOGNF_MMPJOCOLCDF_OFFSET UNITYSDK_OFFSET(0x1940B130)
#define IAAPILPOGNF_NLEKGFJGGCI_OFFSET UNITYSDK_OFFSET(0x1940DCD0)
#define IAAPILPOGNF_NNMBNFKDGIC_OFFSET UNITYSDK_OFFSET(0x1940CB40)
#define IAAPILPOGNF_NPEEPDCMPOL_OFFSET UNITYSDK_OFFSET(0x1940DFD0)
#define IAAPILPOGNF_OAJCDLOOFDG_OFFSET UNITYSDK_OFFSET(0x1940DF70)
#define IAAPILPOGNF_OCDMHKGIFHN_OFFSET UNITYSDK_OFFSET(0x1940BF70)
#define IAAPILPOGNF_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x1940CD40)
#define IAAPILPOGNF_OKMCJCFNEHF_OFFSET UNITYSDK_OFFSET(0x1940D330)
#define IAAPILPOGNF_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x1940BE70)
#define IAAPILPOGNF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x1940AC80)
#define IAAPILPOGNF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x1940B250)
#define IAAPILPOGNF_PDCHEOHHDMJ_OFFSET UNITYSDK_OFFSET(0x1940DEC0)
#define IAAPILPOGNF_PHAPBAEDGII_OFFSET UNITYSDK_OFFSET(0x1940B2A0)
#define IAAPILPOGNF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x1940AA30)
#define IAAPILPOGNF__ONBIND_OFFSET UNITYSDK_OFFSET(0x1940B4A0)
#define IAAPILPOGNF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x1940AC10)
#define IAAPILPOGNF__ONTICK_OFFSET UNITYSDK_OFFSET(0x1940E0F0)
#define IAAPILPOGNF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1940ACF0)

inline static constexpr unsigned int IAAPILPOGNF_TypeDefinitionIndex = 73469;

	class IAAPILPOGNF : public ::FMPCODLIOLG
	{
	public:
		::EELDIPDFMNB* GBJFOAPCOGB; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BLPHAKIGKLK*>* DPDFANMBFCB; // 0x68
		::UnityEngine::UI::Text* MNNOKJCEOME; // 0x70
		::UnityEngine::UI::Text* NOPPGJEMCPM; // 0x78
		::CNADKCFAIEB* IIEBIBMCGNB; // 0x80
		::UnityEngine::Transform* MKPEFFCAPKI; // 0x88
		::CLHHHJEKMHC* DCBPJKBDPFJ; // 0x90
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x98
		::System::Collections::Generic::HashSet_1<::System::String*>* NHKNBCHIDPP; // 0xA0
		::UnityEngine::UI::Text* GCDCJINLCIK; // 0xA8
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LJNPOOOBPIG; // 0xB0
		::UnityEngine::Transform* PJBEBENBCAL; // 0xB8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xC0
		::System::Boolean ELDELIKOKFF; // 0xC8
		::System::Boolean NHMPFHBPHOE; // 0xC9
		::System::Boolean PEFACPDHDDA; // 0xCA
		::System::Byte _padding0[0x1];
		::UnityEngine::Color EMFMJHGCGGO; // 0xCC
		::UnityEngine::Color LBKNLANLLPM; // 0xDC
		::UnityEngine::Color KONOIBAIJLP; // 0xEC
		::System::Single EJODMPPDFPE; // 0xFC
		::System::Single HHPNEFNNMJE; // 0x100
		::UnityEngine::Color MKGFHLODOGJ; // 0x104
		::System::Single IFOIKJADBIA; // 0x114
		::UnityEngine::Color KOONDAECICP; // 0x118
		::System::Single NCDEHGBPMFC; // 0x128
		::UnityEngine::Color PPLOPNFNEDE; // 0x12C
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
