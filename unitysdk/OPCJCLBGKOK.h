#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/BoolEx.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TurnState.h"
class DCGIDEKLGAJ;
class EFJCLCMOLGO;
class KANKEPCJION;
class OPCJCLBGKOK_AIHFALNOIPK;
class OPCJCLBGKOK_LHLGLIGGDPP;
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class SkillData; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class SmoothMask; }
namespace UnityEngine::UI { class Text; }

#define OPCJCLBGKOK_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xC8A4550)
#define OPCJCLBGKOK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xC8A6640)
#define OPCJCLBGKOK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xC8A68A0)
#define OPCJCLBGKOK_BEJHCPALMIP_OFFSET UNITYSDK_OFFSET(0xC8A5150)
#define OPCJCLBGKOK_BHLNLJFKCFH_OFFSET UNITYSDK_OFFSET(0xC8A3D70)
#define OPCJCLBGKOK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC8A44D0)
#define OPCJCLBGKOK_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0xC8A38D0)
#define OPCJCLBGKOK_COCGEFLBNJP_OFFSET UNITYSDK_OFFSET(0xC8A4CB0)
#define OPCJCLBGKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xC8A6AD0)
#define OPCJCLBGKOK_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xC8A4650)
#define OPCJCLBGKOK_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xC8A47A0)
#define OPCJCLBGKOK_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xC8A6310)
#define OPCJCLBGKOK_DDGEOLCKKEB_OFFSET UNITYSDK_OFFSET(0xC8A41E0)
#define OPCJCLBGKOK_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xC8A4750)
#define OPCJCLBGKOK_DMGIBFFHADM_OFFSET UNITYSDK_OFFSET(0xC8A6550)
#define OPCJCLBGKOK_EBGOCKDGCOB_OFFSET UNITYSDK_OFFSET(0xC8A5730)
#define OPCJCLBGKOK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xC8A3970)
#define OPCJCLBGKOK_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xC8A3A10)
#define OPCJCLBGKOK_EFEOOCNOIBB_OFFSET UNITYSDK_OFFSET(0xC8A3AD0)
#define OPCJCLBGKOK_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0xC8A51C0)
#define OPCJCLBGKOK_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xC8A4840)
#define OPCJCLBGKOK_FKJHBIFMAPG_OFFSET UNITYSDK_OFFSET(0xC8A4940)
#define OPCJCLBGKOK_FMCAGGANLDF_OFFSET UNITYSDK_OFFSET(0xC8A4A40)
#define OPCJCLBGKOK_FPLCNNFFJBF_OFFSET UNITYSDK_OFFSET(0xC8A3C00)
#define OPCJCLBGKOK_GKEPAJMIGJB_OFFSET UNITYSDK_OFFSET(0xC8A3800)
#define OPCJCLBGKOK_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xC8A48C0)
#define OPCJCLBGKOK_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0xC8A6220)
#define OPCJCLBGKOK_HOFENPBMPIO_OFFSET UNITYSDK_OFFSET(0xC8A6040)
#define OPCJCLBGKOK_INCDHMPLKCF_OFFSET UNITYSDK_OFFSET(0xC8A3850)
#define OPCJCLBGKOK_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xC8A63D0)
#define OPCJCLBGKOK_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xC8A5A50)
#define OPCJCLBGKOK_KDPHGMIBKID_OFFSET UNITYSDK_OFFSET(0xC8A5F10)
#define OPCJCLBGKOK_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xC8A47F0)
#define OPCJCLBGKOK_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0xC8A5AA0)
#define OPCJCLBGKOK_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xC8A5A00)
#define OPCJCLBGKOK_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xC8A46F0)
#define OPCJCLBGKOK_MMHCBPNHBOF_OFFSET UNITYSDK_OFFSET(0xC8A4AF0)
#define OPCJCLBGKOK_NCIPJHDCOOB_OFFSET UNITYSDK_OFFSET(0xC8A4DB0)
#define OPCJCLBGKOK_NENEAJEIMGO_OFFSET UNITYSDK_OFFSET(0xC8A5E70)
#define OPCJCLBGKOK_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xC8A4370)
#define OPCJCLBGKOK_NKLNKEMFHIH_OFFSET UNITYSDK_OFFSET(0xC8A3FF0)
#define OPCJCLBGKOK_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xC8A42B0)
#define OPCJCLBGKOK_PCLJPABFGIL_OFFSET UNITYSDK_OFFSET(0xC8A6100)
#define OPCJCLBGKOK_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0xC8A4E70)
#define OPCJCLBGKOK_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0xC8A6490)
#define OPCJCLBGKOK_PHDJBFPPJOO_OFFSET UNITYSDK_OFFSET(0xC8A5AF0)
#define OPCJCLBGKOK__ONBIND_OFFSET UNITYSDK_OFFSET(0xC8A3140)
#define OPCJCLBGKOK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0xC8A3920)
#define OPCJCLBGKOK__ONTICK_OFFSET UNITYSDK_OFFSET(0xC8A3B70)
#define OPCJCLBGKOK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0xC8A3A70)

inline static constexpr unsigned int OPCJCLBGKOK_TypeDefinitionIndex = 73932;

	class OPCJCLBGKOK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Animation* HOKDKAJNJHE; // 0x60
		::UnityEngine::Animation* JKNOICHNHMP; // 0x68
		::IGKFNIEJGLM PMECLILMEDH; // 0x70
		::UnityEngine::Animation* FAGFDJKEHLG; // 0x78
		::Il2CppArray<::System::Int32>* APCHOOMCGFG; // 0x80
		::DCGIDEKLGAJ* FFLIJDPLEEM; // 0x88
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x90
		::UnityEngine::Animator* KCOAILOHDND; // 0x98
		::UnityEngine::RectTransform* LGKAEOGGFFI; // 0xA0
		::UnityEngine::Animation* HKDDHDHDFCN; // 0xA8
		::DCGIDEKLGAJ* COLCPHDGNDI; // 0xB0
		::UnityEngine::UI::Text* GJPKBJKIIGF; // 0xB8
		::UnityEngine::UI::SmoothMask* KDJBJNGFMPD; // 0xC0
		::UnityEngine::Animation* HKJPONPDGMI; // 0xC8
		::KANKEPCJION* HPADAGJIHAO; // 0xD0
		::UnityEngine::UI::Text* FKKMPGMCJPH; // 0xD8
		::UnityEngine::Transform* LNGNJJHELFJ; // 0xE0
		::UnityEngine::Transform* AIDIMEHEEMI; // 0xE8
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0xF0
		::System::Single IPAANEANNMO; // 0xF8
		::System::Int32 GFHDLBGOKFC; // 0xFC
		::System::Single IGDELKEOGFB; // 0x100
		::RPG::GameCore::BoolEx DDNJPGHODOJ; // 0x104
		::System::Int32 PLPFEPFJNNI; // 0x108
		::System::Single COIMPBBJNKF; // 0x10C
		::System::Single ACCNCLAPBJB; // 0x110
		::RPG::GameCore::TurnState BCCAIOOALKJ; // 0x114
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0x118
		::System::Int32 BDFGCADHMHE; // 0x120
		::System::Single NMPFKHDFDDP; // 0x124
		::System::Single FGPOFDJIDNN; // 0x128
		::System::Boolean DNLDAFGBDIN; // 0x12C
		::System::Boolean FMNEEONAMNO; // 0x12D
		::System::Boolean CBBPCJGMHKL; // 0x12E
		::System::Byte _padding0[0x1];
		::System::Single ECKHLDBHKIB; // 0x130
		::System::Int32 NLCNGDOMMKP; // 0x134
		// static const ::System::String* IALFONPILCN; // 0x0
		// static const ::System::String* FKDBAGKODGL; // 0x0
		// static const ::System::Object KIMNFENLOGP; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK__ONBIND_OFFSET))(this);
		}

		::System::Single GKEPAJMIGJB()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_GKEPAJMIGJB_OFFSET))(this);
		}

		::System::Void INCDHMPLKCF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_INCDHMPLKCF_OFFSET))(this, a1);
		}

		::RPG::GameCore::FixPoint CDBIMDODKIL()
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_CDBIMDODKIL_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OPCJCLBGKOK__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK__ONTICK_OFFSET))(this, a1);
		}

		::System::Void FPLCNNFFJBF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_FPLCNNFFJBF_OFFSET))(this, a1);
		}

		::System::Void BHLNLJFKCFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_BHLNLJFKCFH_OFFSET))(this);
		}

		::System::Boolean ODGLEFLLDPI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_ODGLEFLLDPI_OFFSET))(this);
		}

		::System::Void NJBDJBHEBAN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_NJBDJBHEBAN_OFFSET))(this, a1);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void AFOCNOKBNBH(::RPG::GameCore::GameEntity* a1, ::RPG::GameCore::SkillData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::RPG::GameCore::SkillData*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_AFOCNOKBNBH_OFFSET))(this, a1, a2);
		}

		::System::Void DALIOPHDBIP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DALIOPHDBIP_OFFSET))(this, a1);
		}

		::System::Void LJKADDJPNNP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_LJKADDJPNNP_OFFSET))(this, a1);
		}

		::System::Void DFPDIGIDFEH(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DFPDIGIDFEH_OFFSET))(this, a1);
		}

		::System::Void DBLJDELIPBL(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DBLJDELIPBL_OFFSET))(this, a1);
		}

		::System::Void KKHOMFOPFJA(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_KKHOMFOPFJA_OFFSET))(this, a1);
		}

		::System::Boolean EOGIPEEFJGE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_EOGIPEEFJGE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* GNHIMAJIIPK()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_GNHIMAJIIPK_OFFSET))(this);
		}

		::System::Void NKLNKEMFHIH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_NKLNKEMFHIH_OFFSET))(this, a1);
		}

		::System::Void DDGEOLCKKEB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DDGEOLCKKEB_OFFSET))(this, a1);
		}

		::System::Single FMCAGGANLDF(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_FMCAGGANLDF_OFFSET))(this, a1);
		}

		::System::Single FKJHBIFMAPG(::System::Single a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_FKJHBIFMAPG_OFFSET))(this, a1);
		}

		::System::Void MMHCBPNHBOF(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_MMHCBPNHBOF_OFFSET))(this, a1);
		}

		::System::Void COCGEFLBNJP(::RPG::GameCore::BoolEx a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::BoolEx))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_COCGEFLBNJP_OFFSET))(this, a1);
		}

		::System::Void NCIPJHDCOOB(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_NCIPJHDCOOB_OFFSET))(this, a1);
		}

		::System::Void BEJHCPALMIP(::OPCJCLBGKOK_LHLGLIGGDPP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPCJCLBGKOK_LHLGLIGGDPP*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_BEJHCPALMIP_OFFSET))(this, a1);
		}

		::System::Void EGAOMMJKKKM(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_EGAOMMJKKKM_OFFSET))(this, a1);
		}

		::System::Void EBGOCKDGCOB(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_EBGOCKDGCOB_OFFSET))(this, a1, a2);
		}

		::System::Void PDNNFNEDIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_PDNNFNEDIHN_OFFSET))(this);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KPOMPHJDCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_KPOMPHJDCCD_OFFSET))(this);
		}

		::System::Void EFEOOCNOIBB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_EFEOOCNOIBB_OFFSET))(this);
		}

		::System::Void PHDJBFPPJOO(::OPCJCLBGKOK_AIHFALNOIPK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OPCJCLBGKOK_AIHFALNOIPK*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_PHDJBFPPJOO_OFFSET))(this, a1);
		}

		::System::Void KDPHGMIBKID(::UnityEngine::Animation* a1, ::System::Int32 a2, ::System::String* a3, ::System::String* a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animation*, ::System::Int32, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_KDPHGMIBKID_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::String* NENEAJEIMGO(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_NENEAJEIMGO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HOFENPBMPIO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_HOFENPBMPIO_OFFSET))(this, a1);
		}

		::System::Void PCLJPABFGIL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_PCLJPABFGIL_OFFSET))(this, a1);
		}

		::System::Void HDFBOEFIJHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_HDFBOEFIJHP_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void PGJCICOEMID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_PGJCICOEMID_OFFSET))(this, a1);
		}

		::System::Void DMGIBFFHADM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DMGIBFFHADM_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
