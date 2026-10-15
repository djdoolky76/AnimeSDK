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

#define IAAPILPOGNF_ABLDFEINJOP_OFFSET UNITYSDK_OFFSET(0x15DED310)
#define IAAPILPOGNF_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0x15DE9D70)
#define IAAPILPOGNF_AIGJIKFEHEP_OFFSET UNITYSDK_OFFSET(0x15DEA200)
#define IAAPILPOGNF_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0x15DED050)
#define IAAPILPOGNF_APHAMGIHNNO_OFFSET UNITYSDK_OFFSET(0x15DEB000)
#define IAAPILPOGNF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15DEDA00)
#define IAAPILPOGNF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15DEDFE0)
#define IAAPILPOGNF_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0x15DED700)
#define IAAPILPOGNF_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0x15DEB5D0)
#define IAAPILPOGNF_CDLBPIDKIIB_OFFSET UNITYSDK_OFFSET(0x15DEC7E0)
#define IAAPILPOGNF_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0x15DEA3B0)
#define IAAPILPOGNF_CTOR_OFFSET UNITYSDK_OFFSET(0x15DEE580)
#define IAAPILPOGNF_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x15DED4C0)
#define IAAPILPOGNF_DFJOJCBFFAM_OFFSET UNITYSDK_OFFSET(0x15DEBB20)
#define IAAPILPOGNF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15DE8EF0)
#define IAAPILPOGNF_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0x15DEC090)
#define IAAPILPOGNF_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0x15DEB9C0)
#define IAAPILPOGNF_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0x15DEABD0)
#define IAAPILPOGNF_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0x15DE9BA0)
#define IAAPILPOGNF_EJOEBMLDKKB_OFFSET UNITYSDK_OFFSET(0x15DED3D0)
#define IAAPILPOGNF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15DE8FD0)
#define IAAPILPOGNF_FFIOHDEPPMJ_OFFSET UNITYSDK_OFFSET(0x15DEC3E0)
#define IAAPILPOGNF_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0x15DECF90)
#define IAAPILPOGNF_FJEEHFBCCLH_OFFSET UNITYSDK_OFFSET(0x15DED940)
#define IAAPILPOGNF_FJGLNPIJLOH_OFFSET UNITYSDK_OFFSET(0x15DEC900)
#define IAAPILPOGNF_GLBNHFKDBFO_OFFSET UNITYSDK_OFFSET(0x15DEAAB0)
#define IAAPILPOGNF_HJLGMAOIONF_OFFSET UNITYSDK_OFFSET(0x15DEA8B0)
#define IAAPILPOGNF_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0x15DECD20)
#define IAAPILPOGNF_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0x15DEAA10)
#define IAAPILPOGNF_IBFMGHKJAGF_OFFSET UNITYSDK_OFFSET(0x15DE9B40)
#define IAAPILPOGNF_INLELPPAJKD_OFFSET UNITYSDK_OFFSET(0x15DED110)
#define IAAPILPOGNF_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0x15DED220)
#define IAAPILPOGNF_JBBPFHNIKNH_OFFSET UNITYSDK_OFFSET(0x15DEC340)
#define IAAPILPOGNF_JEIKIJCOKHJ_OFFSET UNITYSDK_OFFSET(0x15DECEA0)
#define IAAPILPOGNF_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x15DED580)
#define IAAPILPOGNF_JMFPBHMJJIJ_OFFSET UNITYSDK_OFFSET(0x15DEADF0)
#define IAAPILPOGNF_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x15DEB920)
#define IAAPILPOGNF_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0x15DEC1E0)
#define IAAPILPOGNF_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0x15DECDE0)
#define IAAPILPOGNF_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0x15DED880)
#define IAAPILPOGNF_KMAGNFLJNGE_OFFSET UNITYSDK_OFFSET(0x15DEB110)
#define IAAPILPOGNF_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0x15DEB060)
#define IAAPILPOGNF_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0x15DED7C0)
#define IAAPILPOGNF_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0x15DEB970)
#define IAAPILPOGNF_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0x15DEB280)
#define IAAPILPOGNF_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x15DEB8D0)
#define IAAPILPOGNF_LFINLNIOODA_OFFSET UNITYSDK_OFFSET(0x15DEC640)
#define IAAPILPOGNF_MJCCEAFDBHF_OFFSET UNITYSDK_OFFSET(0x15DEA750)
#define IAAPILPOGNF_MMPJOCOLCDF_OFFSET UNITYSDK_OFFSET(0x15DE9460)
#define IAAPILPOGNF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15DE8D10)
#define IAAPILPOGNF_NLEKGFJGGCI_OFFSET UNITYSDK_OFFSET(0x15DEC560)
#define IAAPILPOGNF_NNMBNFKDGIC_OFFSET UNITYSDK_OFFSET(0x15DEAC90)
#define IAAPILPOGNF_NPEEPDCMPOL_OFFSET UNITYSDK_OFFSET(0x15DEC890)
#define IAAPILPOGNF_OAJCDLOOFDG_OFFSET UNITYSDK_OFFSET(0x15DEC830)
#define IAAPILPOGNF_OCDMHKGIFHN_OFFSET UNITYSDK_OFFSET(0x15DEA0C0)
#define IAAPILPOGNF_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0x15DEAE90)
#define IAAPILPOGNF_OKMCJCFNEHF_OFFSET UNITYSDK_OFFSET(0x15DEBBC0)
#define IAAPILPOGNF_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x15DE9FC0)
#define IAAPILPOGNF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15DE8F60)
#define IAAPILPOGNF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15DE9580)
#define IAAPILPOGNF_PDCHEOHHDMJ_OFFSET UNITYSDK_OFFSET(0x15DEC780)
#define IAAPILPOGNF_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0x15DEB620)
#define IAAPILPOGNF_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0x15DED640)
#define IAAPILPOGNF_PHAPBAEDGII_OFFSET UNITYSDK_OFFSET(0x15DE95D0)
#define IAAPILPOGNF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15DE97E0)
#define IAAPILPOGNF__ONTICK_OFFSET UNITYSDK_OFFSET(0x15DEC9B0)

inline static constexpr unsigned int IAAPILPOGNF_TypeDefinitionIndex = 71484;

	class IAAPILPOGNF : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* DEKAILBIHEM; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LJNPOOOBPIG; // 0x68
		::UnityEngine::Transform* MKPEFFCAPKI; // 0x70
		::HLEMIOKBLML* IIEBIBMCGNB; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x88
		::EELDIPDFMNB* GBJFOAPCOGB; // 0x90
		::System::Collections::Generic::Dictionary_2<::System::String*, ::BLPHAKIGKLK*>* DPDFANMBFCB; // 0x98
		::UnityEngine::UI::Text* NOPPGJEMCPM; // 0xA0
		::UnityEngine::Transform* PJBEBENBCAL; // 0xA8
		::CLHHHJEKMHC* DCBPJKBDPFJ; // 0xB0
		::System::Collections::Generic::HashSet_1<::System::String*>* NHKNBCHIDPP; // 0xB8
		::UnityEngine::UI::Text* GCDCJINLCIK; // 0xC0
		::UnityEngine::UI::Text* MNNOKJCEOME; // 0xC8
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0xD0
		::System::Single EJODMPPDFPE; // 0xD8
		::UnityEngine::Color MKGFHLODOGJ; // 0xDC
		::System::Single HHPNEFNNMJE; // 0xEC
		::System::Boolean PEFACPDHDDA; // 0xF0
		::System::Boolean ELDELIKOKFF; // 0xF1
		::System::Boolean NHMPFHBPHOE; // 0xF2
		::System::Byte _padding0[0x1];
		::UnityEngine::Color LBKNLANLLPM; // 0xF4
		::UnityEngine::Color KONOIBAIJLP; // 0x104
		::System::Single NCDEHGBPMFC; // 0x114
		::UnityEngine::Color PPLOPNFNEDE; // 0x118
		::System::Single IFOIKJADBIA; // 0x128
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0x130
		::UnityEngine::Color KOONDAECICP; // 0x138
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
