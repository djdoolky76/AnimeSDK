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

#define OPCJCLBGKOK_AFOCNOKBNBH_OFFSET UNITYSDK_OFFSET(0x196C3630)
#define OPCJCLBGKOK_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x18AB3FE0)
#define OPCJCLBGKOK_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x18AB4240)
#define OPCJCLBGKOK_BEJHCPALMIP_OFFSET UNITYSDK_OFFSET(0x196C4230)
#define OPCJCLBGKOK_BHLNLJFKCFH_OFFSET UNITYSDK_OFFSET(0x196C2E60)
#define OPCJCLBGKOK_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0x196C35B0)
#define OPCJCLBGKOK_CDBIMDODKIL_OFFSET UNITYSDK_OFFSET(0x196C2A60)
#define OPCJCLBGKOK_COCGEFLBNJP_OFFSET UNITYSDK_OFFSET(0x196C3D80)
#define OPCJCLBGKOK_CTOR_OFFSET UNITYSDK_OFFSET(0x18AB4470)
#define OPCJCLBGKOK_DALIOPHDBIP_OFFSET UNITYSDK_OFFSET(0x196C3730)
#define OPCJCLBGKOK_DBLJDELIPBL_OFFSET UNITYSDK_OFFSET(0x196C3880)
#define OPCJCLBGKOK_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x18AB3CB0)
#define OPCJCLBGKOK_DDGEOLCKKEB_OFFSET UNITYSDK_OFFSET(0x196C32C0)
#define OPCJCLBGKOK_DFPDIGIDFEH_OFFSET UNITYSDK_OFFSET(0x196C3830)
#define OPCJCLBGKOK_DMGIBFFHADM_OFFSET UNITYSDK_OFFSET(0x18AB3EF0)
#define OPCJCLBGKOK_EBGOCKDGCOB_OFFSET UNITYSDK_OFFSET(0x196C4820)
#define OPCJCLBGKOK_ECOHEIAHIAO_OFFSET UNITYSDK_OFFSET(0x196C2B00)
#define OPCJCLBGKOK_EDFDIAKEGIK_OFFSET UNITYSDK_OFFSET(0x196C2BA0)
#define OPCJCLBGKOK_EFEOOCNOIBB_OFFSET UNITYSDK_OFFSET(0x18AB33F0)
#define OPCJCLBGKOK_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0x196C42A0)
#define OPCJCLBGKOK_EOGIPEEFJGE_OFFSET UNITYSDK_OFFSET(0x196C3920)
#define OPCJCLBGKOK_FKJHBIFMAPG_OFFSET UNITYSDK_OFFSET(0x196C3A20)
#define OPCJCLBGKOK_FMCAGGANLDF_OFFSET UNITYSDK_OFFSET(0x196C3B20)
#define OPCJCLBGKOK_FPLCNNFFJBF_OFFSET UNITYSDK_OFFSET(0x196C2CF0)
#define OPCJCLBGKOK_GKEPAJMIGJB_OFFSET UNITYSDK_OFFSET(0x196C2990)
#define OPCJCLBGKOK_GNHIMAJIIPK_OFFSET UNITYSDK_OFFSET(0x196C39A0)
#define OPCJCLBGKOK_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0x18AB3BC0)
#define OPCJCLBGKOK_HOFENPBMPIO_OFFSET UNITYSDK_OFFSET(0x18AB39E0)
#define OPCJCLBGKOK_INCDHMPLKCF_OFFSET UNITYSDK_OFFSET(0x196C29E0)
#define OPCJCLBGKOK_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x18AB3D70)
#define OPCJCLBGKOK_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x18AB3350)
#define OPCJCLBGKOK_KDPHGMIBKID_OFFSET UNITYSDK_OFFSET(0x18AB38B0)
#define OPCJCLBGKOK_KKHOMFOPFJA_OFFSET UNITYSDK_OFFSET(0x196C38D0)
#define OPCJCLBGKOK_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0x18AB33A0)
#define OPCJCLBGKOK_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x18AB3300)
#define OPCJCLBGKOK_LJKADDJPNNP_OFFSET UNITYSDK_OFFSET(0x196C37D0)
#define OPCJCLBGKOK_MMHCBPNHBOF_OFFSET UNITYSDK_OFFSET(0x196C3BD0)
#define OPCJCLBGKOK_NCIPJHDCOOB_OFFSET UNITYSDK_OFFSET(0x196C3E80)
#define OPCJCLBGKOK_NENEAJEIMGO_OFFSET UNITYSDK_OFFSET(0x18AB3810)
#define OPCJCLBGKOK_NJBDJBHEBAN_OFFSET UNITYSDK_OFFSET(0x196C3450)
#define OPCJCLBGKOK_NKLNKEMFHIH_OFFSET UNITYSDK_OFFSET(0x196C30E0)
#define OPCJCLBGKOK_ODGLEFLLDPI_OFFSET UNITYSDK_OFFSET(0x196C3390)
#define OPCJCLBGKOK_PCLJPABFGIL_OFFSET UNITYSDK_OFFSET(0x18AB3AA0)
#define OPCJCLBGKOK_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0x196C3F40)
#define OPCJCLBGKOK_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0x18AB3E30)
#define OPCJCLBGKOK_PHDJBFPPJOO_OFFSET UNITYSDK_OFFSET(0x18AB3490)
#define OPCJCLBGKOK__ONBIND_OFFSET UNITYSDK_OFFSET(0x196C22D0)
#define OPCJCLBGKOK__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x196C2AB0)
#define OPCJCLBGKOK__ONTICK_OFFSET UNITYSDK_OFFSET(0x196C2C60)
#define OPCJCLBGKOK__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x196C2C00)

inline static constexpr unsigned int OPCJCLBGKOK_TypeDefinitionIndex = 73931;

	class OPCJCLBGKOK : public ::FMPCODLIOLG
	{
	public:
		::DCGIDEKLGAJ* FFLIJDPLEEM; // 0x60
		::Il2CppArray<::System::Int32>* APCHOOMCGFG; // 0x68
		::UnityEngine::Transform* LNGNJJHELFJ; // 0x70
		::UnityEngine::UI::Text* GJPKBJKIIGF; // 0x78
		::UnityEngine::UI::SmoothMask* KDJBJNGFMPD; // 0x80
		::KANKEPCJION* HPADAGJIHAO; // 0x88
		::UnityEngine::Animation* HOKDKAJNJHE; // 0x90
		::UnityEngine::UI::Text* FKKMPGMCJPH; // 0x98
		::DCGIDEKLGAJ* COLCPHDGNDI; // 0xA0
		::UnityEngine::RectTransform* LGKAEOGGFFI; // 0xA8
		::UnityEngine::Animation* FAGFDJKEHLG; // 0xB0
		::UnityEngine::Animator* KCOAILOHDND; // 0xB8
		::IGKFNIEJGLM PMECLILMEDH; // 0xC0
		::UnityEngine::Animation* JKNOICHNHMP; // 0xC8
		::UnityEngine::Animation* HKDDHDHDFCN; // 0xD0
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xD8
		::UnityEngine::Animation* HKJPONPDGMI; // 0xE0
		::UnityEngine::Transform* AIDIMEHEEMI; // 0xE8
		::System::Single FGPOFDJIDNN; // 0xF0
		::RPG::GameCore::TurnState BCCAIOOALKJ; // 0xF4
		::RPG::GameCore::BoolEx DDNJPGHODOJ; // 0xF8
		::System::Single NMPFKHDFDDP; // 0xFC
		::System::Single IGDELKEOGFB; // 0x100
		::System::Single ACCNCLAPBJB; // 0x104
		::System::Single COIMPBBJNKF; // 0x108
		::System::Int32 GFHDLBGOKFC; // 0x10C
		::System::Int32 NLCNGDOMMKP; // 0x110
		::System::Int32 BDFGCADHMHE; // 0x114
		::System::Int32 PLPFEPFJNNI; // 0x118
		::System::Boolean DNLDAFGBDIN; // 0x11C
		::System::Boolean FMNEEONAMNO; // 0x11D
		::System::Boolean CBBPCJGMHKL; // 0x11E
		::System::Byte _padding0[0x1];
		::System::Single IPAANEANNMO; // 0x120
		::System::Single ECKHLDBHKIB; // 0x124
		::RPG::GameCore::FixPoint HNJALNDGMFC; // 0x128
		::RPG::GameCore::FixPoint JOLILOPDAKD; // 0x130
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
