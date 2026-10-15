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

#define OPCJCLBGKOK_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0xBF9B740)
#define OPCJCLBGKOK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBF9D840)
#define OPCJCLBGKOK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBF9DAA0)
#define OPCJCLBGKOK_BEJHCPALMIP_OFFSET UNITYSDK_OFFSET(0xBF9C340)
#define OPCJCLBGKOK_BHLNLJFKCFH_OFFSET UNITYSDK_OFFSET(0xBF9AF70)
#define OPCJCLBGKOK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xBF9B6C0)
#define OPCJCLBGKOK_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0xBF9AAD0)
#define OPCJCLBGKOK_COCGEFLBNJP_OFFSET UNITYSDK_OFFSET(0xBF9BE90)
#define OPCJCLBGKOK_CTOR_OFFSET UNITYSDK_OFFSET(0xBF9DCD0)
#define OPCJCLBGKOK_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0xBF9B840)
#define OPCJCLBGKOK_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0xBF9B990)
#define OPCJCLBGKOK_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xBF9D510)
#define OPCJCLBGKOK_DDGEOLCKKEB_OFFSET UNITYSDK_OFFSET(0xBF9B3D0)
#define OPCJCLBGKOK_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0xBF9B940)
#define OPCJCLBGKOK_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBF9AB20)
#define OPCJCLBGKOK_DMGIBFFHADM_OFFSET UNITYSDK_OFFSET(0xBF9D750)
#define OPCJCLBGKOK_EBGOCKDGCOB_OFFSET UNITYSDK_OFFSET(0xBF9C930)
#define OPCJCLBGKOK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0xBF9AB70)
#define OPCJCLBGKOK_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0xBF9AC10)
#define OPCJCLBGKOK_EFEOOCNOIBB_OFFSET UNITYSDK_OFFSET(0xBF9ACD0)
#define OPCJCLBGKOK_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0xBF9C3B0)
#define OPCJCLBGKOK_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBF9AC70)
#define OPCJCLBGKOK_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0xBF9BA30)
#define OPCJCLBGKOK_FKJHBIFMAPG_OFFSET UNITYSDK_OFFSET(0xBF9BB30)
#define OPCJCLBGKOK_FMCAGGANLDF_OFFSET UNITYSDK_OFFSET(0xBF9BC30)
#define OPCJCLBGKOK_FPLCNNFFJBF_OFFSET UNITYSDK_OFFSET(0xBF9AE00)
#define OPCJCLBGKOK_GKEPAJMIGJB_OFFSET UNITYSDK_OFFSET(0xBF9AA00)
#define OPCJCLBGKOK_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0xBF9BAB0)
#define OPCJCLBGKOK_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0xBF9D420)
#define OPCJCLBGKOK_HOFENPBMPIO_OFFSET UNITYSDK_OFFSET(0xBF9D240)
#define OPCJCLBGKOK_INCDHMPLKCF_OFFSET UNITYSDK_OFFSET(0xBF9AA50)
#define OPCJCLBGKOK_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xBF9D5D0)
#define OPCJCLBGKOK_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xBF9CC50)
#define OPCJCLBGKOK_KDPHGMIBKID_OFFSET UNITYSDK_OFFSET(0xBF9D110)
#define OPCJCLBGKOK_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0xBF9B9E0)
#define OPCJCLBGKOK_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0xBF9CCA0)
#define OPCJCLBGKOK_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xBF9CC00)
#define OPCJCLBGKOK_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0xBF9B8E0)
#define OPCJCLBGKOK_MMHCBPNHBOF_OFFSET UNITYSDK_OFFSET(0xBF9BCE0)
#define OPCJCLBGKOK_NCIPJHDCOOB_OFFSET UNITYSDK_OFFSET(0xBF9BF90)
#define OPCJCLBGKOK_NENEAJEIMGO_OFFSET UNITYSDK_OFFSET(0xBF9D070)
#define OPCJCLBGKOK_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0xBF9B560)
#define OPCJCLBGKOK_NKLNKEMFHIH_OFFSET UNITYSDK_OFFSET(0xBF9B1F0)
#define OPCJCLBGKOK_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0xBF9B4A0)
#define OPCJCLBGKOK_PCLJPABFGIL_OFFSET UNITYSDK_OFFSET(0xBF9D300)
#define OPCJCLBGKOK_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0xBF9C050)
#define OPCJCLBGKOK_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0xBF9D690)
#define OPCJCLBGKOK_PHDJBFPPJOO_OFFSET UNITYSDK_OFFSET(0xBF9CCF0)
#define OPCJCLBGKOK__ONBIND_OFFSET UNITYSDK_OFFSET(0xBF9A6F0)
#define OPCJCLBGKOK__ONTICK_OFFSET UNITYSDK_OFFSET(0xBF9AD70)

inline static constexpr unsigned int OPCJCLBGKOK_TypeDefinitionIndex = 71910;

	class OPCJCLBGKOK : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::UI::Text* GJPKBJKIIGF; // 0x60
		::UnityEngine::Transform* LNGNJJHELFJ; // 0x68
		::UnityEngine::UI::SmoothMask* KDJBJNGFMPD; // 0x70
		::UnityEngine::Animation* HKDDHDHDFCN; // 0x78
		::Il2CppArray<::System::Int32>* APCHOOMCGFG; // 0x80
		::IGKFNIEJGLM PMECLILMEDH; // 0x88
		::UnityEngine::Animation* HKJPONPDGMI; // 0x90
		::UnityEngine::Transform* AIDIMEHEEMI; // 0x98
		::UnityEngine::UI::Text* FKKMPGMCJPH; // 0xA0
		::UnityEngine::Animator* KCOAILOHDND; // 0xA8
		::DCGIDEKLGAJ* COLCPHDGNDI; // 0xB0
		::UnityEngine::Animation* HOKDKAJNJHE; // 0xB8
		::UnityEngine::Animation* JKNOICHNHMP; // 0xC0
		::UnityEngine::RectTransform* LGKAEOGGFFI; // 0xC8
		::DCGIDEKLGAJ* FFLIJDPLEEM; // 0xD0
		::UnityEngine::Animation* FAGFDJKEHLG; // 0xD8
		::KANKEPCJION* HPADAGJIHAO; // 0xE0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xE8
		::RPG::GameCore::BoolEx DDNJPGHODOJ; // 0xF0
		::System::Single IGDELKEOGFB; // 0xF4
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0xF8
		::System::Single NMPFKHDFDDP; // 0x100
		::System::Int32 PLPFEPFJNNI; // 0x104
		::System::Single FGPOFDJIDNN; // 0x108
		::System::Single ECKHLDBHKIB; // 0x10C
		::RPG::GameCore::TurnState BCCAIOOALKJ; // 0x110
		::System::Boolean CBBPCJGMHKL; // 0x114
		::System::Boolean FMNEEONAMNO; // 0x115
		::System::Boolean DNLDAFGBDIN; // 0x116
		::System::Byte _padding0[0x1];
		::System::Int32 BDFGCADHMHE; // 0x118
		::System::Single ACCNCLAPBJB; // 0x11C
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0x120
		::System::Single COIMPBBJNKF; // 0x128
		::System::Int32 NLCNGDOMMKP; // 0x12C
		::System::Single IPAANEANNMO; // 0x130
		::System::Int32 GFHDLBGOKFC; // 0x134
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
