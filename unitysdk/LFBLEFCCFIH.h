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

#define LFBLEFCCFIH_AGIJFEPDKMM_1_OFFSET UNITYSDK_OFFSET(0xBEF7890)
#define LFBLEFCCFIH_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xBEF7150)
#define LFBLEFCCFIH_AIKDLOJOJOC_OFFSET UNITYSDK_OFFSET(0xBEF7FA0)
#define LFBLEFCCFIH_APHAMGIHNNO_OFFSET UNITYSDK_OFFSET(0xBEF6880)
#define LFBLEFCCFIH_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBEF82F0)
#define LFBLEFCCFIH_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBEF8600)
#define LFBLEFCCFIH_CAJFDDIBPMI_OFFSET UNITYSDK_OFFSET(0xBEF6470)
#define LFBLEFCCFIH_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0xBEF6C40)
#define LFBLEFCCFIH_CDLBPIDKIIB_OFFSET UNITYSDK_OFFSET(0xBEF67F0)
#define LFBLEFCCFIH_CLLJFELLOBF_OFFSET UNITYSDK_OFFSET(0xBEF77C0)
#define LFBLEFCCFIH_CTOR_OFFSET UNITYSDK_OFFSET(0xBEF88E0)
#define LFBLEFCCFIH_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xBEF7B80)
#define LFBLEFCCFIH_EBGOCKDGCOB_OFFSET UNITYSDK_OFFSET(0xBEF6C90)
#define LFBLEFCCFIH_EDADOIOIJEL_OFFSET UNITYSDK_OFFSET(0xBEF7660)
#define LFBLEFCCFIH_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0xBEF7330)
#define LFBLEFCCFIH_EHFEKJGMMPG_OFFSET UNITYSDK_OFFSET(0xBEF6300)
#define LFBLEFCCFIH_FHEBAMAAGPD_OFFSET UNITYSDK_OFFSET(0xBEF8170)
#define LFBLEFCCFIH_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0xBEF7DC0)
#define LFBLEFCCFIH_FJGLNPIJLOH_OFFSET UNITYSDK_OFFSET(0xBEF6E50)
#define LFBLEFCCFIH_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0xBEF7EB0)
#define LFBLEFCCFIH_HJLGMAOIONF_OFFSET UNITYSDK_OFFSET(0xBEF6650)
#define LFBLEFCCFIH_HOBCJKNLMGF_OFFSET UNITYSDK_OFFSET(0xBEF6260)
#define LFBLEFCCFIH_INLELPPAJKD_OFFSET UNITYSDK_OFFSET(0xBEF8060)
#define LFBLEFCCFIH_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xBEF7C40)
#define LFBLEFCCFIH_JMFPBHMJJIJ_OFFSET UNITYSDK_OFFSET(0xBEF7720)
#define LFBLEFCCFIH_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xBEF70B0)
#define LFBLEFCCFIH_KCJPBICKMIA_OFFSET UNITYSDK_OFFSET(0xBEF8230)
#define LFBLEFCCFIH_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0xBEF7100)
#define LFBLEFCCFIH_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xBEF7060)
#define LFBLEFCCFIH_MJCCEAFDBHF_OFFSET UNITYSDK_OFFSET(0xBEF6610)
#define LFBLEFCCFIH_NNMBNFKDGIC_OFFSET UNITYSDK_OFFSET(0xBEF6F10)
#define LFBLEFCCFIH_NPEEPDCMPOL_OFFSET UNITYSDK_OFFSET(0xBEF6830)
#define LFBLEFCCFIH_OAJCDLOOFDG_OFFSET UNITYSDK_OFFSET(0xBEF6790)
#define LFBLEFCCFIH_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0xBEF6900)
#define LFBLEFCCFIH_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0xBEF6A20)
#define LFBLEFCCFIH_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0xBEF7D00)
#define LFBLEFCCFIH__INITVARONCE_OFFSET UNITYSDK_OFFSET(0xBEF5E80)
#define LFBLEFCCFIH__ONBIND_OFFSET UNITYSDK_OFFSET(0xBEF5AB0)
#define LFBLEFCCFIH__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xBEF5E10)
#define LFBLEFCCFIH__ONTICK_OFFSET UNITYSDK_OFFSET(0xBEF6540)
#define LFBLEFCCFIH__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xBEF5F90)

inline static constexpr unsigned int LFBLEFCCFIH_TypeDefinitionIndex = 74409;

	class LFBLEFCCFIH : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* DEKAILBIHEM; // 0x60
		::RPG::GameCore::GameEntity* EAFBMKJFCDG; // 0x68
		::LEKIHHNOPJO* OONDBANJEJF; // 0x70
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x78
		::UnityEngine::UI::Image* DMJAPBGOMJK; // 0x80
		::HLEMIOKBLML* IIEBIBMCGNB; // 0x88
		::UnityEngine::UI::SmoothMask* ICNELAFCGLD; // 0x90
		::EELDIPDFMNB* GBJFOAPCOGB; // 0x98
		::PNAMCBJLKIA* EIPPIIAKNJO; // 0xA0
		::UnityEngine::Animation* ADABBHAMBAC; // 0xA8
		::UnityEngine::UI::Image* KGGFPAMJAHG; // 0xB0
		::UnityEngine::RectTransform* DNALNDNMGCO; // 0xB8
		::RPG::GameCore::GameEntity* ICHEDAEHEBG; // 0xC0
		::System::Single EJODMPPDFPE; // 0xC8
		::System::Boolean ELDELIKOKFF; // 0xCC
		::System::Byte _padding0[0x3];
		::UnityEngine::Color LBKNLANLLPM; // 0xD0
		::System::Single HOJPMDKBJGJ; // 0xE0
		::System::Byte _padding1[0x4];
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0xE8
		::System::Single IFOIKJADBIA; // 0xF0
		::UnityEngine::Color MKGFHLODOGJ; // 0xF4
		::System::Byte _padding2[0x4];
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0x108
		::UnityEngine::Color KOONDAECICP; // 0x110
		::System::Single MODAIBMDJGM; // 0x120
		::UnityEngine::Color EMFMJHGCGGO; // 0x124
		::UnityEngine::Color KONOIBAIJLP; // 0x134
		::UnityEngine::Color PPLOPNFNEDE; // 0x144
		::System::Single HHPNEFNNMJE; // 0x154
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + LFBLEFCCFIH__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFBLEFCCFIH__SETUPVIEW_OFFSET))(this);
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
