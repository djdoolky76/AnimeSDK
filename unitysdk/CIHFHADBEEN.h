#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DCGIDEKLGAJ;
class EELDIPDFMNB;
class EFJCLCMOLGO;
class HLEMIOKBLML;
namespace RPG::GameCore { class AbilityBeingLimbo; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class EntityRevive; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelCharacterReviveFromRevivable; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CIHFHADBEEN_ABLDFEINJOP_OFFSET UNITYSDK_OFFSET(0xCF70790)
#define CIHFHADBEEN_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xCF6E380)
#define CIHFHADBEEN_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0xCF704D0)
#define CIHFHADBEEN_APHAMGIHNNO_OFFSET UNITYSDK_OFFSET(0xCF6ED00)
#define CIHFHADBEEN_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xCF70DC0)
#define CIHFHADBEEN_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xCF71350)
#define CIHFHADBEEN_BBPGKAAAHCH_OFFSET UNITYSDK_OFFSET(0xCF70B80)
#define CIHFHADBEEN_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0xCF6F2D0)
#define CIHFHADBEEN_CDLBPIDKIIB_OFFSET UNITYSDK_OFFSET(0xCF6FFF0)
#define CIHFHADBEEN_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0xCF6E670)
#define CIHFHADBEEN_CTOR_OFFSET UNITYSDK_OFFSET(0xCF718A0)
#define CIHFHADBEEN_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xCF70940)
#define CIHFHADBEEN_DFJOJCBFFAM_OFFSET UNITYSDK_OFFSET(0xCF6F820)
#define CIHFHADBEEN_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xCF6DA70)
#define CIHFHADBEEN_DMAOAKCPNAA_OFFSET UNITYSDK_OFFSET(0xCF6F8C0)
#define CIHFHADBEEN_EBPDLMBPLBL_OFFSET UNITYSDK_OFFSET(0xCF6F6D0)
#define CIHFHADBEEN_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0xCF6E8E0)
#define CIHFHADBEEN_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0xCF6E230)
#define CIHFHADBEEN_EJOEBMLDKKB_OFFSET UNITYSDK_OFFSET(0xCF70850)
#define CIHFHADBEEN_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xCF6DB40)
#define CIHFHADBEEN_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0xCF70410)
#define CIHFHADBEEN_FJGLNPIJLOH_OFFSET UNITYSDK_OFFSET(0xCF70110)
#define CIHFHADBEEN_GLBNHFKDBFO_OFFSET UNITYSDK_OFFSET(0xCF6E820)
#define CIHFHADBEEN_HJLGMAOIONF_OFFSET UNITYSDK_OFFSET(0xCF6FDC0)
#define CIHFHADBEEN_HKLCKJEOOAI_OFFSET UNITYSDK_OFFSET(0xCF70290)
#define CIHFHADBEEN_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0xCF6FF50)
#define CIHFHADBEEN_IBFMGHKJAGF_OFFSET UNITYSDK_OFFSET(0xCF6E1D0)
#define CIHFHADBEEN_INLELPPAJKD_OFFSET UNITYSDK_OFFSET(0xCF70590)
#define CIHFHADBEEN_IPMGACIGPOE_OFFSET UNITYSDK_OFFSET(0xCF706A0)
#define CIHFHADBEEN_JBBPFHNIKNH_OFFSET UNITYSDK_OFFSET(0xCF6FB60)
#define CIHFHADBEEN_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xCF70A00)
#define CIHFHADBEEN_JMFPBHMJJIJ_OFFSET UNITYSDK_OFFSET(0xCF6EAF0)
#define CIHFHADBEEN_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xCF6F630)
#define CIHFHADBEEN_KBCNINCDBLP_OFFSET UNITYSDK_OFFSET(0xCF6FA10)
#define CIHFHADBEEN_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0xCF70350)
#define CIHFHADBEEN_KHCBFBGMKBJ_OFFSET UNITYSDK_OFFSET(0xCF70D00)
#define CIHFHADBEEN_KMAGNFLJNGE_OFFSET UNITYSDK_OFFSET(0xCF6EE10)
#define CIHFHADBEEN_KMKEGNFJIOI_OFFSET UNITYSDK_OFFSET(0xCF6ED60)
#define CIHFHADBEEN_KOGOJEIKDFI_OFFSET UNITYSDK_OFFSET(0xCF70C40)
#define CIHFHADBEEN_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0xCF6F680)
#define CIHFHADBEEN_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0xCF6EF80)
#define CIHFHADBEEN_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xCF6F5E0)
#define CIHFHADBEEN_MJCCEAFDBHF_OFFSET UNITYSDK_OFFSET(0xCF6FC60)
#define CIHFHADBEEN_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xCF6D970)
#define CIHFHADBEEN_NNMBNFKDGIC_OFFSET UNITYSDK_OFFSET(0xCF6E9A0)
#define CIHFHADBEEN_NPEEPDCMPOL_OFFSET UNITYSDK_OFFSET(0xCF700A0)
#define CIHFHADBEEN_OAJCDLOOFDG_OFFSET UNITYSDK_OFFSET(0xCF70040)
#define CIHFHADBEEN_OGPAMKGAGJF_OFFSET UNITYSDK_OFFSET(0xCF6EB90)
#define CIHFHADBEEN_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0xCF6E570)
#define CIHFHADBEEN_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xCF6DAE0)
#define CIHFHADBEEN_ONRETURN_OFFSET UNITYSDK_OFFSET(0xCF6DF90)
#define CIHFHADBEEN_PDCHEOHHDMJ_OFFSET UNITYSDK_OFFSET(0xCF6FC00)
#define CIHFHADBEEN_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0xCF6F320)
#define CIHFHADBEEN_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0xCF70AC0)
#define CIHFHADBEEN__ONBIND_OFFSET UNITYSDK_OFFSET(0xCF6DFE0)
#define CIHFHADBEEN__ONTICK_OFFSET UNITYSDK_OFFSET(0xCF701C0)

inline static constexpr unsigned int CIHFHADBEEN_TypeDefinitionIndex = 71398;

	class CIHFHADBEEN : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* MNNOKJCEOME; // 0x60
		::UnityEngine::Transform* PJBEBENBCAL; // 0x68
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x70
		::EELDIPDFMNB* GBJFOAPCOGB; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::UnityEngine::Animation* DEKAILBIHEM; // 0x88
		::UnityEngine::UI::Text* NOPPGJEMCPM; // 0x90
		::HLEMIOKBLML* IIEBIBMCGNB; // 0x98
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0xA0
		::UnityEngine::Color LBKNLANLLPM; // 0xA8
		::UnityEngine::Color MKGFHLODOGJ; // 0xB8
		::System::Single IFOIKJADBIA; // 0xC8
		::UnityEngine::Color KOONDAECICP; // 0xCC
		::System::Single HHPNEFNNMJE; // 0xDC
		::System::Single NCDEHGBPMFC; // 0xE0
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0xE8
		::UnityEngine::Color EMFMJHGCGGO; // 0xF0
		::UnityEngine::Color KONOIBAIJLP; // 0x100
		::System::Boolean ELDELIKOKFF; // 0x110
		::System::Byte _padding1[0x3];
		::UnityEngine::Color PPLOPNFNEDE; // 0x114
		::System::Single EJODMPPDFPE; // 0x124
		// static const ::System::Object EFLLOMHDLLO; // 0x0
		// static const ::System::String* IALFONPILCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_CTOR_OFFSET))(this);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CIHFHADBEEN_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_ONRETURN_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN__ONBIND_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void CLLJFELLOBF(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_CLLJFELLOBF_OFFSET))(this, a1);
		}

		::System::Void EDADOIOIJEL(::RPG::GameCore::AbilityDirtyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_EDADOIOIJEL_OFFSET))(this, a1);
		}

		::System::Void JMFPBHMJJIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_JMFPBHMJJIJ_OFFSET))(this);
		}

		::System::Void OGPAMKGAGJF(::RPG::GameCore::EntityRevive* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::EntityRevive*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_OGPAMKGAGJF_OFFSET))(this, a1);
		}

		::System::Void KMKEGNFJIOI(::RPG::GameCore::LevelCharacterReviveFromRevivable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::LevelCharacterReviveFromRevivable*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_KMKEGNFJIOI_OFFSET))(this, a1);
		}

		::System::Void KMAGNFLJNGE(::RPG::GameCore::AbilityBeingLimbo* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityBeingLimbo*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_KMAGNFLJNGE_OFFSET))(this, a1);
		}

		::System::Void LBBCPHPEHIO(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_LBBCPHPEHIO_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KPOMPHJDCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_KPOMPHJDCCD_OFFSET))(this);
		}

		::System::Void EBPDLMBPLBL(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_EBPDLMBPLBL_OFFSET))(this, a1);
		}

		::System::Void DMAOAKCPNAA(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_DMAOAKCPNAA_OFFSET))(this, a1);
		}

		::System::Void KBCNINCDBLP(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_KBCNINCDBLP_OFFSET))(this, a1);
		}

		::System::Void DFJOJCBFFAM(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_DFJOJCBFFAM_OFFSET))(this, a1);
		}

		::System::Void JBBPFHNIKNH(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_JBBPFHNIKNH_OFFSET))(this, a1);
		}

		::System::Boolean PDCHEOHHDMJ(::RPG::GameCore::TurnBasedModifierInstance* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TurnBasedModifierInstance*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_PDCHEOHHDMJ_OFFSET))(this, a1);
		}

		::System::Void PDNNFNEDIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_PDNNFNEDIHN_OFFSET))(this);
		}

		::System::Void EHFEKJGMMPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_EHFEKJGMMPG_OFFSET))(this);
		}

		::System::Void IBFMGHKJAGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIHFHADBEEN_IBFMGHKJAGF_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIHFHADBEEN_OMNOCGOKIDP_OFFSET))(this, a1);
		}

		::System::Single CDLBPIDKIIB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_CDLBPIDKIIB_OFFSET))(this);
		}

		::System::Void HOBCJKNLMGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIHFHADBEEN_HOBCJKNLMGF_OFFSET))(this, a1);
		}

		::System::Void NNMBNFKDGIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_NNMBNFKDGIC_OFFSET))(this);
		}

		::System::Boolean OAJCDLOOFDG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIHFHADBEEN_OAJCDLOOFDG_OFFSET))(this, a1);
		}

		::System::Void GLBNHFKDBFO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_GLBNHFKDBFO_OFFSET))(this);
		}

		::System::Void NPEEPDCMPOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIHFHADBEEN_NPEEPDCMPOL_OFFSET))(this, a1);
		}

		::System::Void HJLGMAOIONF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIHFHADBEEN_HJLGMAOIONF_OFFSET))(this, a1);
		}

		::System::Void FJGLNPIJLOH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIHFHADBEEN_FJGLNPIJLOH_OFFSET))(this, a1);
		}

		::System::Void MJCCEAFDBHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_MJCCEAFDBHF_OFFSET))(this);
		}

		::System::Void APHAMGIHNNO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CIHFHADBEEN_APHAMGIHNNO_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CIHFHADBEEN__ONTICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CDBIMDODKIL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_CDBIMDODKIL_OFFSET))(this);
		}

		::System::Void HKLCKJEOOAI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_HKLCKJEOOAI_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void FHEBAMAAGPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_FHEBAMAAGPD_OFFSET))(this, a1);
		}

		::System::Void AIKDLOJOJOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_AIKDLOJOJOC_OFFSET))(this, a1);
		}

		::System::Void INLELPPAJKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_INLELPPAJKD_OFFSET))(this, a1);
		}

		::System::Void IPMGACIGPOE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_IPMGACIGPOE_OFFSET))(this, a1);
		}

		::System::Void ABLDFEINJOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_ABLDFEINJOP_OFFSET))(this, a1);
		}

		::System::Void EJOEBMLDKKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_EJOEBMLDKKB_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void PGJCICOEMID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_PGJCICOEMID_OFFSET))(this, a1);
		}

		::System::Void BBPGKAAAHCH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_BBPGKAAAHCH_OFFSET))(this, a1);
		}

		::System::Void KOGOJEIKDFI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_KOGOJEIKDFI_OFFSET))(this, a1);
		}

		::System::Void KHCBFBGMKBJ(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CIHFHADBEEN_KHCBFBGMKBJ_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CIHFHADBEEN_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
