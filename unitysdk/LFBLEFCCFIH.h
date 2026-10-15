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
class LEKIHHNOPJO;
class PNAMCBJLKIA;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityDirtyHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define LFBLEFCCFIH_AGIJFEPDKMM_1_OFFSET UNITYSDK_OFFSET(0xB65B750)
#define LFBLEFCCFIH_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xB65B010)
#define LFBLEFCCFIH_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0xB65BE60)
#define LFBLEFCCFIH_APHAMGIHNNO_OFFSET UNITYSDK_OFFSET(0xB65A740)
#define LFBLEFCCFIH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB65C1B0)
#define LFBLEFCCFIH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB65C490)
#define LFBLEFCCFIH_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xB65A300)
#define LFBLEFCCFIH_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0xB65AB10)
#define LFBLEFCCFIH_CDLBPIDKIIB_OFFSET UNITYSDK_OFFSET(0xB65A6B0)
#define LFBLEFCCFIH_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0xB65B680)
#define LFBLEFCCFIH_CTOR_OFFSET UNITYSDK_OFFSET(0xB65C750)
#define LFBLEFCCFIH_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xB65BA40)
#define LFBLEFCCFIH_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB659CA0)
#define LFBLEFCCFIH_EBGOCKDGCOB_OFFSET UNITYSDK_OFFSET(0xB65AB60)
#define LFBLEFCCFIH_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0xB65B530)
#define LFBLEFCCFIH_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0xB65B1F0)
#define LFBLEFCCFIH_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0xB65A190)
#define LFBLEFCCFIH_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB659E20)
#define LFBLEFCCFIH_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0xB65C030)
#define LFBLEFCCFIH_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0xB65BC80)
#define LFBLEFCCFIH_FJGLNPIJLOH_OFFSET UNITYSDK_OFFSET(0xB65AD10)
#define LFBLEFCCFIH_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0xB65BD70)
#define LFBLEFCCFIH_HJLGMAOIONF_OFFSET UNITYSDK_OFFSET(0xB65A500)
#define LFBLEFCCFIH_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0xB65A0E0)
#define LFBLEFCCFIH_INLELPPAJKD_OFFSET UNITYSDK_OFFSET(0xB65BF20)
#define LFBLEFCCFIH_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xB65BB00)
#define LFBLEFCCFIH_JMFPBHMJJIJ_OFFSET UNITYSDK_OFFSET(0xB65B5E0)
#define LFBLEFCCFIH_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xB65AF70)
#define LFBLEFCCFIH_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0xB65C0F0)
#define LFBLEFCCFIH_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0xB65AFC0)
#define LFBLEFCCFIH_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xB65AF20)
#define LFBLEFCCFIH_MJCCEAFDBHF_OFFSET UNITYSDK_OFFSET(0xB65A4C0)
#define LFBLEFCCFIH_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB659D10)
#define LFBLEFCCFIH_NNMBNFKDGIC_OFFSET UNITYSDK_OFFSET(0xB65ADC0)
#define LFBLEFCCFIH_NPEEPDCMPOL_OFFSET UNITYSDK_OFFSET(0xB65A6F0)
#define LFBLEFCCFIH_OAJCDLOOFDG_OFFSET UNITYSDK_OFFSET(0xB65A650)
#define LFBLEFCCFIH_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0xB65A7C0)
#define LFBLEFCCFIH_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0xB65A8F0)
#define LFBLEFCCFIH_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0xB65BBC0)
#define LFBLEFCCFIH__ONBIND_OFFSET UNITYSDK_OFFSET(0xB659B40)
#define LFBLEFCCFIH__ONTICK_OFFSET UNITYSDK_OFFSET(0xB65A3E0)

inline static constexpr unsigned int LFBLEFCCFIH_TypeDefinitionIndex = 72329;

	class LFBLEFCCFIH : public ::FMPCODLIOLG
	{
	public:
		::EELDIPDFMNB* GBJFOAPCOGB; // 0x60
		::RPG::GameCore::GameEntity* EAFBMKJFCDG; // 0x68
		::UnityEngine::RectTransform* DNALNDNMGCO; // 0x70
		::UnityEngine::Animation* ADABBHAMBAC; // 0x78
		::UnityEngine::UI::Image* KGGFPAMJAHG; // 0x80
		::UnityEngine::UI::SmoothMask* ICNELAFCGLD; // 0x88
		::LEKIHHNOPJO* OONDBANJEJF; // 0x90
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x98
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0xA0
		::PNAMCBJLKIA* EIPPIIAKNJO; // 0xA8
		::HLEMIOKBLML* IIEBIBMCGNB; // 0xB0
		::UnityEngine::Animation* DEKAILBIHEM; // 0xB8
		::UnityEngine::UI::Image* DMJAPBGOMJK; // 0xC0
		::System::Single MODAIBMDJGM; // 0xC8
		::UnityEngine::Color LBKNLANLLPM; // 0xCC
		::UnityEngine::Color KONOIBAIJLP; // 0xDC
		::System::Single HHPNEFNNMJE; // 0xEC
		::UnityEngine::Color EMFMJHGCGGO; // 0xF0
		::System::Boolean ELDELIKOKFF; // 0x100
		::System::Byte _padding0[0x3];
		::System::Single EJODMPPDFPE; // 0x104
		::UnityEngine::Color MKGFHLODOGJ; // 0x108
		::System::Single IFOIKJADBIA; // 0x118
		::UnityEngine::Color KOONDAECICP; // 0x11C
		::System::Single HOJPMDKBJGJ; // 0x12C
		::UnityEngine::Color PPLOPNFNEDE; // 0x130
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0x140
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0x148
		// static const ::System::String* FKDBAGKODGL; // 0x0
		// static const ::System::String* IALFONPILCN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH__ONBIND_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void CAJFDDIBPMI(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_CAJFDDIBPMI_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFBLEFCCFIH__ONTICK_OFFSET))(this, a1);
		}

		::System::Void EHFEKJGMMPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_EHFEKJGMMPG_OFFSET))(this);
		}

		::System::Void HJLGMAOIONF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_HJLGMAOIONF_OFFSET))(this, a1);
		}

		::System::Boolean OAJCDLOOFDG(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_OAJCDLOOFDG_OFFSET))(this, a1);
		}

		::System::Single CDLBPIDKIIB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_CDLBPIDKIIB_OFFSET))(this);
		}

		::System::Void MJCCEAFDBHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_MJCCEAFDBHF_OFFSET))(this);
		}

		::System::Void NPEEPDCMPOL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_NPEEPDCMPOL_OFFSET))(this, a1);
		}

		::System::Void APHAMGIHNNO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_APHAMGIHNNO_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_OMNOCGOKIDP_OFFSET))(this, a1);
		}

		::System::Void PDNNFNEDIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_PDNNFNEDIHN_OFFSET))(this);
		}

		::System::Void EBGOCKDGCOB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_EBGOCKDGCOB_OFFSET))(this, a1, a2);
		}

		::System::Void FJGLNPIJLOH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_FJGLNPIJLOH_OFFSET))(this, a1);
		}

		::System::Void HOBCJKNLMGF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_HOBCJKNLMGF_OFFSET))(this, a1);
		}

		::System::Void NNMBNFKDGIC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_NNMBNFKDGIC_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KPOMPHJDCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_KPOMPHJDCCD_OFFSET))(this);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityRallyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void EGAOMMJKKKM(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_EGAOMMJKKKM_OFFSET))(this, a1);
		}

		::System::Void EDADOIOIJEL(::RPG::GameCore::AbilityDirtyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityDirtyHPChange*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_EDADOIOIJEL_OFFSET))(this, a1);
		}

		::System::Void JMFPBHMJJIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_JMFPBHMJJIJ_OFFSET))(this);
		}

		::System::Void CLLJFELLOBF(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_CLLJFELLOBF_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM_1(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_AGIJFEPDKMM_1_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CDBIMDODKIL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_CDBIMDODKIL_OFFSET))(this);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void PGJCICOEMID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_PGJCICOEMID_OFFSET))(this, a1);
		}

		::System::Void FHGAGLNCNMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_FHGAGLNCNMO_OFFSET))(this, a1);
		}

		::System::Void HDFBOEFIJHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_HDFBOEFIJHP_OFFSET))(this, a1);
		}

		::System::Void AIKDLOJOJOC(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_AIKDLOJOJOC_OFFSET))(this, a1);
		}

		::System::Void INLELPPAJKD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_INLELPPAJKD_OFFSET))(this, a1);
		}

		::System::Void FHEBAMAAGPD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_FHEBAMAAGPD_OFFSET))(this, a1);
		}

		::System::Void KCJPBICKMIA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_KCJPBICKMIA_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
