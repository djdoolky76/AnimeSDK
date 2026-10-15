#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class CAOMOABKIMP;
class EFJCLCMOLGO;
class JFGLCKFPMHN;
class MOCALHHICIP;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define BFKIFOJPMON_AABHCIBPIAD_OFFSET UNITYSDK_OFFSET(0xB170D70)
#define BFKIFOJPMON_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0xB170400)
#define BFKIFOJPMON_AKNIKDJPLCP_OFFSET UNITYSDK_OFFSET(0xB170980)
#define BFKIFOJPMON_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xB171190)
#define BFKIFOJPMON_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xB1714A0)
#define BFKIFOJPMON_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0xB16FF60)
#define BFKIFOJPMON_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0xB170C80)
#define BFKIFOJPMON_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0xB170A10)
#define BFKIFOJPMON_COKKOFBOHEC_OFFSET UNITYSDK_OFFSET(0xB16F290)
#define BFKIFOJPMON_CTOR_OFFSET UNITYSDK_OFFSET(0xB171780)
#define BFKIFOJPMON_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0xB170F50)
#define BFKIFOJPMON_DFHKMNFAMEO_OFFSET UNITYSDK_OFFSET(0xB170120)
#define BFKIFOJPMON_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xB16EF60)
#define BFKIFOJPMON_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0xB170550)
#define BFKIFOJPMON_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0xB16FA90)
#define BFKIFOJPMON_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xB16F200)
#define BFKIFOJPMON_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0xB170440)
#define BFKIFOJPMON_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0xB16FC20)
#define BFKIFOJPMON_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0xB170E60)
#define BFKIFOJPMON_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0xB170A50)
#define BFKIFOJPMON_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xB16FAD0)
#define BFKIFOJPMON_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0xB171010)
#define BFKIFOJPMON_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0xB1708E0)
#define BFKIFOJPMON_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0xB170BD0)
#define BFKIFOJPMON_KJEFLAFAAOB_OFFSET UNITYSDK_OFFSET(0xB170B10)
#define BFKIFOJPMON_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0xB16FC70)
#define BFKIFOJPMON_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0xB170930)
#define BFKIFOJPMON_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0xB170780)
#define BFKIFOJPMON_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xB16EEA0)
#define BFKIFOJPMON_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0xB16F860)
#define BFKIFOJPMON_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xB16F060)
#define BFKIFOJPMON_NJJNLICNFPP_OFFSET UNITYSDK_OFFSET(0xB1704C0)
#define BFKIFOJPMON_NLAODGOLFKG_OFFSET UNITYSDK_OFFSET(0xB1703B0)
#define BFKIFOJPMON_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0xB16FF10)
#define BFKIFOJPMON_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xB16EE10)
#define BFKIFOJPMON_ONRETURN_OFFSET UNITYSDK_OFFSET(0xB16EF10)
#define BFKIFOJPMON_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0xB1707D0)
#define BFKIFOJPMON_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0xB16FCD0)
#define BFKIFOJPMON_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0xB1710D0)
#define BFKIFOJPMON__ONBIND_OFFSET UNITYSDK_OFFSET(0xB16ED40)
#define BFKIFOJPMON__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xB16FB50)
#define BFKIFOJPMON__ONTICK_OFFSET UNITYSDK_OFFSET(0xB16FBB0)

inline static constexpr unsigned int BFKIFOJPMON_TypeDefinitionIndex = 71758;

	class BFKIFOJPMON : public ::FMPCODLIOLG
	{
	public:
		::System::Collections::Generic::List_1<::CAOMOABKIMP*>* DADFGPHBCEF; // 0x60
		::UnityEngine::Transform* MOBOBJJCDDK; // 0x68
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x70
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::System::UInt32 HHLFPHFADCE; // 0x88
		::UnityEngine::Color MKGFHLODOGJ; // 0x8C
		::UnityEngine::Color PPLOPNFNEDE; // 0x9C
		::System::Boolean AAGKIPFCNHO; // 0xAC
		::System::Byte _padding0[0x3];
		::System::UInt32 HEDIIIKNMKM; // 0xB0
		::System::Single HHPNEFNNMJE; // 0xB4
		::System::UInt32 JNOPOMKIPKD; // 0xB8
		::System::Single IFOIKJADBIA; // 0xBC
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CBGCGEIAIAH; // 0x0
		// static const ::System::String* BKOOGOBKBBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BFKIFOJPMON_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFKIFOJPMON_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BFKIFOJPMON__ONTICK_OFFSET))(this, a1);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void KJMDJMBNCPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_KJMDJMBNCPE_OFFSET))(this);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void DFHKMNFAMEO(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_DFHKMNFAMEO_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void GLPIALKAHDI(::MOCALHHICIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCALHHICIP*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_GLPIALKAHDI_OFFSET))(this, a1);
		}

		::System::Void NJJNLICNFPP(::JFGLCKFPMHN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JFGLCKFPMHN*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_NJJNLICNFPP_OFFSET))(this, a1);
		}

		::System::Void EGAOMMJKKKM(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_EGAOMMJKKKM_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void JNJKGKLBCNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_JNJKGKLBCNI_OFFSET))(this);
		}

		::System::Void KPOMPHJDCCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_KPOMPHJDCCD_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_OMNOCGOKIDP_OFFSET))(this);
		}

		::System::Void NLAODGOLFKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_NLAODGOLFKG_OFFSET))(this);
		}

		::System::Void MFJOANOEHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_MFJOANOEHJD_OFFSET))(this);
		}

		::System::Void COKKOFBOHEC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_COKKOFBOHEC_OFFSET))(this);
		}

		::System::Void AKNIKDJPLCP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_AKNIKDJPLCP_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + BFKIFOJPMON_CCJBBIOCLIM_OFFSET))(this, a1);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void EKCHAHDIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_EKCHAHDIEFH_OFFSET))(this);
		}

		::System::Void PDNNFNEDIHN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_PDNNFNEDIHN_OFFSET))(this);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void KJEFLAFAAOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_KJEFLAFAAOB_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void CIHGFALFMFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_CIHGFALFMFK_OFFSET))(this, a1);
		}

		::System::Void AABHCIBPIAD(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_AABHCIBPIAD_OFFSET))(this, a1);
		}

		::System::Void HDFBOEFIJHP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_HDFBOEFIJHP_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void JKNIBKEGJBF(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_JKNIBKEGJBF_OFFSET))(this, a1);
		}

		::System::Void PGJCICOEMID(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BFKIFOJPMON_PGJCICOEMID_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON_AUTOREMOVECALLBACK_OFFSET))(this);
		}

	};
