#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BLPHAKIGKLK;
class CLHHHJEKMHC;
class DCGIDEKLGAJ;
class EELDIPDFMNB;
class EFJCLCMOLGO;
class HLEMIOKBLML;
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
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define IAAPILPOGNF_ABLDFEINJOP_OFFSET UNITYSDK_OFFSET(0x15DFA1D0)
#define IAAPILPOGNF_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x15DF6C50)
#define IAAPILPOGNF_AIGJIKFEHEP_OFFSET UNITYSDK_OFFSET(0x15DF70E0)
#define IAAPILPOGNF_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0x15DF9F10)
#define IAAPILPOGNF_APHAMGIHNNO_OFFSET UNITYSDK_OFFSET(0x15DF7EE0)
#define IAAPILPOGNF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15DFA8C0)
#define IAAPILPOGNF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15DFAEB0)
#define IAAPILPOGNF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x15DFA5C0)
#define IAAPILPOGNF_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0x15DF84B0)
#define IAAPILPOGNF_CDLBPIDKIIB_OFFSET UNITYSDK_OFFSET(0x15DF96A0)
#define IAAPILPOGNF_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0x15DF7290)
#define IAAPILPOGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x15DFB460)
#define IAAPILPOGNF_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x15DFA380)
#define IAAPILPOGNF_DFJOJCBFFAM_OFFSET UNITYSDK_OFFSET(0x15DF8A00)
#define IAAPILPOGNF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15DF5DD0)
#define IAAPILPOGNF_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x15DF8F50)
#define IAAPILPOGNF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x15DF88A0)
#define IAAPILPOGNF_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0x15DF7AB0)
#define IAAPILPOGNF_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0x15DF6A80)
#define IAAPILPOGNF_EJOEBMLDKKB_OFFSET UNITYSDK_OFFSET(0x15DFA290)
#define IAAPILPOGNF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15DF5EB0)
#define IAAPILPOGNF_FFIOHDEPPMJ_OFFSET UNITYSDK_OFFSET(0x15DF92A0)
#define IAAPILPOGNF_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0x15DF9E50)
#define IAAPILPOGNF_FJEEHFBCCLH_OFFSET UNITYSDK_OFFSET(0x15DFA800)
#define IAAPILPOGNF_FJGLNPIJLOH_OFFSET UNITYSDK_OFFSET(0x15DF97C0)
#define IAAPILPOGNF_GLBNHFKDBFO_OFFSET UNITYSDK_OFFSET(0x15DF7990)
#define IAAPILPOGNF_HJLGMAOIONF_OFFSET UNITYSDK_OFFSET(0x15DF7790)
#define IAAPILPOGNF_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0x15DF9BE0)
#define IAAPILPOGNF_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0x15DF78F0)
#define IAAPILPOGNF_IBFMGHKJAGF_OFFSET UNITYSDK_OFFSET(0x15DF6A20)
#define IAAPILPOGNF_INLELPPAJKD_OFFSET UNITYSDK_OFFSET(0x15DF9FD0)
#define IAAPILPOGNF_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x15DFA0E0)
#define IAAPILPOGNF_JBBPFHNIKNH_OFFSET UNITYSDK_OFFSET(0x15DF9200)
#define IAAPILPOGNF_JEIKIJCOKHJ_OFFSET UNITYSDK_OFFSET(0x15DF9D60)
#define IAAPILPOGNF_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x15DFA440)
#define IAAPILPOGNF_JMFPBHMJJIJ_OFFSET UNITYSDK_OFFSET(0x15DF7CD0)
#define IAAPILPOGNF_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x15DF8800)
#define IAAPILPOGNF_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x15DF90A0)
#define IAAPILPOGNF_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x15DF9CA0)
#define IAAPILPOGNF_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x15DFA740)
#define IAAPILPOGNF_KMAGNFLJNGE_OFFSET UNITYSDK_OFFSET(0x15DF7FF0)
#define IAAPILPOGNF_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0x15DF7F40)
#define IAAPILPOGNF_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x15DFA680)
#define IAAPILPOGNF_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0x15DF8850)
#define IAAPILPOGNF_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0x15DF8160)
#define IAAPILPOGNF_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x15DF87B0)
#define IAAPILPOGNF_LFINLNIOODA_OFFSET UNITYSDK_OFFSET(0x15DF9500)
#define IAAPILPOGNF_MJCCEAFDBHF_OFFSET UNITYSDK_OFFSET(0x15DF7630)
#define IAAPILPOGNF_MMPJOCOLCDF_OFFSET UNITYSDK_OFFSET(0x15DF6340)
#define IAAPILPOGNF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15DF5BF0)
#define IAAPILPOGNF_NLEKGFJGGCI_OFFSET UNITYSDK_OFFSET(0x15DF9420)
#define IAAPILPOGNF_NNMBNFKDGIC_OFFSET UNITYSDK_OFFSET(0x15DF7B70)
#define IAAPILPOGNF_NPEEPDCMPOL_OFFSET UNITYSDK_OFFSET(0x15DF9750)
#define IAAPILPOGNF_OAJCDLOOFDG_OFFSET UNITYSDK_OFFSET(0x15DF96F0)
#define IAAPILPOGNF_OCDMHKGIFHN_OFFSET UNITYSDK_OFFSET(0x15DF6FA0)
#define IAAPILPOGNF_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x15DF7D70)
#define IAAPILPOGNF_OKMCJCFNEHF_OFFSET UNITYSDK_OFFSET(0x15DF8AA0)
#define IAAPILPOGNF_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x15DF6EA0)
#define IAAPILPOGNF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15DF5E40)
#define IAAPILPOGNF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15DF6460)
#define IAAPILPOGNF_PDCHEOHHDMJ_OFFSET UNITYSDK_OFFSET(0x15DF9640)
#define IAAPILPOGNF_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0x15DF8500)
#define IAAPILPOGNF_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0x15DFA500)
#define IAAPILPOGNF_PHAPBAEDGII_OFFSET UNITYSDK_OFFSET(0x15DF64B0)
#define IAAPILPOGNF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15DF66C0)
#define IAAPILPOGNF__ONTICK_OFFSET UNITYSDK_OFFSET(0x15DF9870)

inline static constexpr unsigned int IAAPILPOGNF_TypeDefinitionIndex = 71485;

	class IAAPILPOGNF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* DEKAILBIHEM; // 0x60
		::UnityEngine::UI::Text* GCDCJINLCIK; // 0x68
		::EELDIPDFMNB* GBJFOAPCOGB; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LJNPOOOBPIG; // 0x78
		::UnityEngine::UI::Text* NOPPGJEMCPM; // 0x80
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BLPHAKIGKLK*>* DPDFANMBFCB; // 0x88
		::CLHHHJEKMHC* DCBPJKBDPFJ; // 0x90
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x98
		::HLEMIOKBLML* IIEBIBMCGNB; // 0xA0
		::System::Collections::Generic::HashSet_1<::System::String*>* NHKNBCHIDPP; // 0xA8
		::UnityEngine::Transform* MKPEFFCAPKI; // 0xB0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xB8
		::UnityEngine::Transform* PJBEBENBCAL; // 0xC0
		::UnityEngine::UI::Text* MNNOKJCEOME; // 0xC8
		::UnityEngine::Color MKGFHLODOGJ; // 0xD0
		::System::Single HHPNEFNNMJE; // 0xE0
		::UnityEngine::Color LBKNLANLLPM; // 0xE4
		::System::Single NCDEHGBPMFC; // 0xF4
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0xF8
		::UnityEngine::Color KOONDAECICP; // 0x100
		::System::Boolean ELDELIKOKFF; // 0x110
		::System::Boolean NHMPFHBPHOE; // 0x111
		::System::Boolean PEFACPDHDDA; // 0x112
		::System::Byte _padding0[0x5];
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0x118
		::System::Single EJODMPPDFPE; // 0x120
		::UnityEngine::Color KONOIBAIJLP; // 0x124
		::UnityEngine::Color PPLOPNFNEDE; // 0x134
		::System::Single IFOIKJADBIA; // 0x144
		::UnityEngine::Color EMFMJHGCGGO; // 0x148
		// static const ::System::Object EFLLOMHDLLO; // 0x0
		// static const ::System::String* IALFONPILCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + IAAPILPOGNF_DHHDFAAJMMC_OFFSET))(this, a1);
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

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_EKGCGIDIFJJ_OFFSET))(this);
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

		::System::Void LBBCPHPEHIO(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_LBBCPHPEHIO_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KPOMPHJDCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_KPOMPHJDCCD_OFFSET))(this);
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

		::System::Void PDNNFNEDIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_PDNNFNEDIHN_OFFSET))(this);
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

		::RPG::GameCore::FixPoint CDBIMDODKIL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + IAAPILPOGNF_CDBIMDODKIL_OFFSET))(this);
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

		::System::Void EJOEBMLDKKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_EJOEBMLDKKB_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void PGJCICOEMID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + IAAPILPOGNF_PGJCICOEMID_OFFSET))(this, a1);
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
