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

#define BFKIFOJPMON_AABHCIBPIAD_OFFSET UNITYSDK_OFFSET(0x151AF9A0)
#define BFKIFOJPMON_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x151AF020)
#define BFKIFOJPMON_AKNIKDJPLCP_OFFSET UNITYSDK_OFFSET(0x151AF5B0)
#define BFKIFOJPMON_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x151AFDC0)
#define BFKIFOJPMON_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x151B00D0)
#define BFKIFOJPMON_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x151AEB80)
#define BFKIFOJPMON_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0x151AF8B0)
#define BFKIFOJPMON_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x151AF640)
#define BFKIFOJPMON_COKKOFBOHEC_OFFSET UNITYSDK_OFFSET(0x151ADEA0)
#define BFKIFOJPMON_CTOR_OFFSET UNITYSDK_OFFSET(0x151B03B0)
#define BFKIFOJPMON_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x151AFB80)
#define BFKIFOJPMON_DFHKMNFAMEO_OFFSET UNITYSDK_OFFSET(0x151AED40)
#define BFKIFOJPMON_EGAOMMJKKKM_OFFSET UNITYSDK_OFFSET(0x151AF170)
#define BFKIFOJPMON_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0x151AE6B0)
#define BFKIFOJPMON_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0x151AF060)
#define BFKIFOJPMON_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0x151AE840)
#define BFKIFOJPMON_HDFBOEFIJHP_OFFSET UNITYSDK_OFFSET(0x151AFA90)
#define BFKIFOJPMON_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0x151AF680)
#define BFKIFOJPMON_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x151AE6F0)
#define BFKIFOJPMON_JKNIBKEGJBF_OFFSET UNITYSDK_OFFSET(0x151AFC40)
#define BFKIFOJPMON_JNJKGKLBCNI_OFFSET UNITYSDK_OFFSET(0x151AF510)
#define BFKIFOJPMON_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x151AF800)
#define BFKIFOJPMON_KJEFLAFAAOB_OFFSET UNITYSDK_OFFSET(0x151AF740)
#define BFKIFOJPMON_KJMDJMBNCPE_OFFSET UNITYSDK_OFFSET(0x151AE890)
#define BFKIFOJPMON_KPOMPHJDCCD_OFFSET UNITYSDK_OFFSET(0x151AF560)
#define BFKIFOJPMON_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x151AF3A0)
#define BFKIFOJPMON_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x151ADAB0)
#define BFKIFOJPMON_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0x151AE480)
#define BFKIFOJPMON_NJJNLICNFPP_OFFSET UNITYSDK_OFFSET(0x151AF0E0)
#define BFKIFOJPMON_NLAODGOLFKG_OFFSET UNITYSDK_OFFSET(0x151AEFD0)
#define BFKIFOJPMON_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0x151AEB30)
#define BFKIFOJPMON_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x151ADA20)
#define BFKIFOJPMON_ONRETURN_OFFSET UNITYSDK_OFFSET(0x151ADB20)
#define BFKIFOJPMON_PDNNFNEDIHN_OFFSET UNITYSDK_OFFSET(0x151AF3F0)
#define BFKIFOJPMON_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0x151AE8F0)
#define BFKIFOJPMON_PGJCICOEMID_OFFSET UNITYSDK_OFFSET(0x151AFD00)
#define BFKIFOJPMON__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x151ADC70)
#define BFKIFOJPMON__ONBIND_OFFSET UNITYSDK_OFFSET(0x151AD8E0)
#define BFKIFOJPMON__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x151AE770)
#define BFKIFOJPMON__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x151ADB70)
#define BFKIFOJPMON__ONTICK_OFFSET UNITYSDK_OFFSET(0x151AE7D0)
#define BFKIFOJPMON__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x151ADE10)

inline static constexpr unsigned int BFKIFOJPMON_TypeDefinitionIndex = 73761;

	class BFKIFOJPMON : public ::FMPCODLIOLG
	{
	public:
		::UnityEngine::Transform* MOBOBJJCDDK; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x70
		::RPG::Client::LocalizedText* HCPKJEKHAPF; // 0x78
		::System::Collections::Generic::List_1<::CAOMOABKIMP*>* DADFGPHBCEF; // 0x80
		::System::Boolean AAGKIPFCNHO; // 0x88
		::System::Byte _padding0[0x3];
		::System::Single HHPNEFNNMJE; // 0x8C
		::System::Single IFOIKJADBIA; // 0x90
		::System::UInt32 HEDIIIKNMKM; // 0x94
		::System::UInt32 JNOPOMKIPKD; // 0x98
		::UnityEngine::Color MKGFHLODOGJ; // 0x9C
		::System::UInt32 HHLFPHFADCE; // 0xAC
		::UnityEngine::Color PPLOPNFNEDE; // 0xB0
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

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + BFKIFOJPMON__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKIFOJPMON__SETUPVIEW_OFFSET))(this);
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
