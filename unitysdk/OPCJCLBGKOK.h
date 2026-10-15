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

#define OPCJCLBGKOK_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xBFA2EC0)
#define OPCJCLBGKOK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBFA4FC0)
#define OPCJCLBGKOK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBFA5220)
#define OPCJCLBGKOK_BEJHCPALMIP_OFFSET UNITYSDK_OFFSET(0xBFA3AC0)
#define OPCJCLBGKOK_BHLNLJFKCFH_OFFSET UNITYSDK_OFFSET(0xBFA26E0)
#define OPCJCLBGKOK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xBFA2E40)
#define OPCJCLBGKOK_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0xBFA2250)
#define OPCJCLBGKOK_COCGEFLBNJP_OFFSET UNITYSDK_OFFSET(0xBFA3610)
#define OPCJCLBGKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBFA5450)
#define OPCJCLBGKOK_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xBFA2FC0)
#define OPCJCLBGKOK_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xBFA3110)
#define OPCJCLBGKOK_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xBFA4C90)
#define OPCJCLBGKOK_DDGEOLCKKEB_OFFSET UNITYSDK_OFFSET(0xBFA2B50)
#define OPCJCLBGKOK_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xBFA30C0)
#define OPCJCLBGKOK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBFA22A0)
#define OPCJCLBGKOK_DMGIBFFHADM_OFFSET UNITYSDK_OFFSET(0xBFA4ED0)
#define OPCJCLBGKOK_EBGOCKDGCOB_OFFSET UNITYSDK_OFFSET(0xBFA40A0)
#define OPCJCLBGKOK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBFA22F0)
#define OPCJCLBGKOK_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xBFA2390)
#define OPCJCLBGKOK_EFEOOCNOIBB_OFFSET UNITYSDK_OFFSET(0xBFA2450)
#define OPCJCLBGKOK_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0xBFA3B30)
#define OPCJCLBGKOK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBFA23F0)
#define OPCJCLBGKOK_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xBFA31B0)
#define OPCJCLBGKOK_FKJHBIFMAPG_OFFSET UNITYSDK_OFFSET(0xBFA32B0)
#define OPCJCLBGKOK_FMCAGGANLDF_OFFSET UNITYSDK_OFFSET(0xBFA33B0)
#define OPCJCLBGKOK_FPLCNNFFJBF_OFFSET UNITYSDK_OFFSET(0xBFA2570)
#define OPCJCLBGKOK_GKEPAJMIGJB_OFFSET UNITYSDK_OFFSET(0xBFA2180)
#define OPCJCLBGKOK_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xBFA3230)
#define OPCJCLBGKOK_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0xBFA4BA0)
#define OPCJCLBGKOK_HOFENPBMPIO_OFFSET UNITYSDK_OFFSET(0xBFA49C0)
#define OPCJCLBGKOK_INCDHMPLKCF_OFFSET UNITYSDK_OFFSET(0xBFA21D0)
#define OPCJCLBGKOK_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xBFA4D50)
#define OPCJCLBGKOK_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xBFA43D0)
#define OPCJCLBGKOK_KDPHGMIBKID_OFFSET UNITYSDK_OFFSET(0xBFA4890)
#define OPCJCLBGKOK_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xBFA3160)
#define OPCJCLBGKOK_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0xBFA4420)
#define OPCJCLBGKOK_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xBFA4380)
#define OPCJCLBGKOK_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xBFA3060)
#define OPCJCLBGKOK_MMHCBPNHBOF_OFFSET UNITYSDK_OFFSET(0xBFA3460)
#define OPCJCLBGKOK_NCIPJHDCOOB_OFFSET UNITYSDK_OFFSET(0xBFA3710)
#define OPCJCLBGKOK_NENEAJEIMGO_OFFSET UNITYSDK_OFFSET(0xBFA47F0)
#define OPCJCLBGKOK_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBFA2CE0)
#define OPCJCLBGKOK_NKLNKEMFHIH_OFFSET UNITYSDK_OFFSET(0xBFA2970)
#define OPCJCLBGKOK_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xBFA2C20)
#define OPCJCLBGKOK_PCLJPABFGIL_OFFSET UNITYSDK_OFFSET(0xBFA4A80)
#define OPCJCLBGKOK_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0xBFA37D0)
#define OPCJCLBGKOK_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0xBFA4E10)
#define OPCJCLBGKOK_PHDJBFPPJOO_OFFSET UNITYSDK_OFFSET(0xBFA4470)
#define OPCJCLBGKOK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBFA1E70)
#define OPCJCLBGKOK__ONTICK_OFFSET UNITYSDK_OFFSET(0xBFA24E0)

	class OPCJCLBGKOK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* FKKMPGMCJPH; // 0x60
		::IGKFNIEJGLM PMECLILMEDH; // 0x68
		::UnityEngine::Animation* FAGFDJKEHLG; // 0x70
		::DCGIDEKLGAJ* COLCPHDGNDI; // 0x78
		::UnityEngine::Animator* KCOAILOHDND; // 0x80
		::UnityEngine::UI::Text* GJPKBJKIIGF; // 0x88
		::UnityEngine::Animation* JKNOICHNHMP; // 0x90
		::UnityEngine::Transform* LNGNJJHELFJ; // 0x98
		::KANKEPCJION* HPADAGJIHAO; // 0xA0
		::UnityEngine::RectTransform* LGKAEOGGFFI; // 0xA8
		::UnityEngine::UI::SmoothMask* KDJBJNGFMPD; // 0xB0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xB8
		::UnityEngine::Animation* HOKDKAJNJHE; // 0xC0
		::UnityEngine::Transform* AIDIMEHEEMI; // 0xC8
		::UnityEngine::Animation* HKDDHDHDFCN; // 0xD0
		::Il2CppArray<::System::Int32>* APCHOOMCGFG; // 0xD8
		::DCGIDEKLGAJ* FFLIJDPLEEM; // 0xE0
		::UnityEngine::Animation* HKJPONPDGMI; // 0xE8
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0xF0
		::System::Int32 NLCNGDOMMKP; // 0xF8
		::System::Single ACCNCLAPBJB; // 0xFC
		::System::Single COIMPBBJNKF; // 0x100
		::System::Int32 PLPFEPFJNNI; // 0x104
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0x108
		::System::Single IPAANEANNMO; // 0x110
		::System::Single NMPFKHDFDDP; // 0x114
		::RPG::GameCore::TurnState BCCAIOOALKJ; // 0x118
		::RPG::GameCore::BoolEx DDNJPGHODOJ; // 0x11C
		::System::Int32 GFHDLBGOKFC; // 0x120
		::System::Int32 BDFGCADHMHE; // 0x124
		::System::Single ECKHLDBHKIB; // 0x128
		::System::Single IGDELKEOGFB; // 0x12C
		::System::Single FGPOFDJIDNN; // 0x130
		::System::Boolean DNLDAFGBDIN; // 0x134
		::System::Boolean FMNEEONAMNO; // 0x135
		::System::Boolean CBBPCJGMHKL; // 0x136
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

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void ECOHEIAHIAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_ECOHEIAHIAO_OFFSET))(this);
		}

		::System::Void EDFDIAKEGIK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_EDFDIAKEGIK_OFFSET))(this, a1);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPCJCLBGKOK_EKGCGIDIFJJ_OFFSET))(this);
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
