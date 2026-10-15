#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class DCGIDEKLGAJ;
class ECJOICEMEGG;
class EFJCLCMOLGO;
class MOCALHHICIP;
class PFMAHFAJHLC_MEBEAAGEOKK;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class AbilityMaxHPChange; }
namespace RPG::GameCore { class AbilityRallyHPChange; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define NNACFBFOEPM_AGIJFEPDKMM_OFFSET UNITYSDK_OFFSET(0xBC8F300)
#define NNACFBFOEPM_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0xBC8F680)
#define NNACFBFOEPM_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0xBC90870)
#define NNACFBFOEPM_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0xBC90B00)
#define NNACFBFOEPM_BDHKBPHAFKP_OFFSET UNITYSDK_OFFSET(0xBC8F820)
#define NNACFBFOEPM_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0xBC8ED00)
#define NNACFBFOEPM_CIHGFALFMFK_OFFSET UNITYSDK_OFFSET(0xBC90560)
#define NNACFBFOEPM_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0xBC90170)
#define NNACFBFOEPM_CTOR_OFFSET UNITYSDK_OFFSET(0xBC90D60)
#define NNACFBFOEPM_DFHKMNFAMEO_OFFSET UNITYSDK_OFFSET(0xBC8EFE0)
#define NNACFBFOEPM_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xBC8E1B0)
#define NNACFBFOEPM_EJOEBMLDKKB_OFFSET UNITYSDK_OFFSET(0xBC90650)
#define NNACFBFOEPM_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0xBC8E5D0)
#define NNACFBFOEPM_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xBC8E330)
#define NNACFBFOEPM_FBPJEKCPEKH_OFFSET UNITYSDK_OFFSET(0xBC8EAB0)
#define NNACFBFOEPM_FHGAGLNCNMO_OFFSET UNITYSDK_OFFSET(0xBC90360)
#define NNACFBFOEPM_FOCOJHOAILK_OFFSET UNITYSDK_OFFSET(0xBC8FD60)
#define NNACFBFOEPM_GLPIALKAHDI_OFFSET UNITYSDK_OFFSET(0xBC8F720)
#define NNACFBFOEPM_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0xBC8EA60)
#define NNACFBFOEPM_HDJHJFDNALE_OFFSET UNITYSDK_OFFSET(0xBC901E0)
#define NNACFBFOEPM_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xBC8E810)
#define NNACFBFOEPM_JOFJBBGDGNN_OFFSET UNITYSDK_OFFSET(0xBC8F4C0)
#define NNACFBFOEPM_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0xBC90450)
#define NNACFBFOEPM_KJEFLAFAAOB_OFFSET UNITYSDK_OFFSET(0xBC902A0)
#define NNACFBFOEPM_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0xBC900A0)
#define NNACFBFOEPM_LBBCPHPEHIO_OFFSET UNITYSDK_OFFSET(0xBC8F7A0)
#define NNACFBFOEPM_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xBC8E0E0)
#define NNACFBFOEPM_MFJOANOEHJD_OFFSET UNITYSDK_OFFSET(0xBC8E6B0)
#define NNACFBFOEPM_MJLMLHIOMEI_OFFSET UNITYSDK_OFFSET(0xBC8FF20)
#define NNACFBFOEPM_NDIPOLGGHHF_OFFSET UNITYSDK_OFFSET(0xBC8F900)
#define NNACFBFOEPM_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xBC8E2C0)
#define NNACFBFOEPM_NLAODGOLFKG_OFFSET UNITYSDK_OFFSET(0xBC8F290)
#define NNACFBFOEPM_OMNOCGOKIDP_OFFSET UNITYSDK_OFFSET(0xBC8EB60)
#define NNACFBFOEPM_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xBC8E040)
#define NNACFBFOEPM_ONRETURN_OFFSET UNITYSDK_OFFSET(0xBC8E160)
#define NNACFBFOEPM_PDPKAHJGCLM_OFFSET UNITYSDK_OFFSET(0xBC8EDF0)
#define NNACFBFOEPM_PHMEJMELDOB_OFFSET UNITYSDK_OFFSET(0xBC90780)
#define NNACFBFOEPM__ONBIND_OFFSET UNITYSDK_OFFSET(0xBC8DEE0)
#define NNACFBFOEPM__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xBC8E930)
#define NNACFBFOEPM__ONTICK_OFFSET UNITYSDK_OFFSET(0xBC8E990)
#define NNACFBFOEPM___FORCEPLAYHPTWEEN_B__23_0_OFFSET UNITYSDK_OFFSET(0xBC90DB0)

inline static constexpr unsigned int NNACFBFOEPM_TypeDefinitionIndex = 71740;

	class NNACFBFOEPM : public ::FMPCODLIOLG
	{
	public:
		::ECJOICEMEGG* OPHCFDAACGK; // 0x60
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x68
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x70
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x78
		::RPG::Client::LocalizedText* LEFJHMGFOCH; // 0x80
		::UnityEngine::Animation* KHONICBMFBP; // 0x88
		::System::Single HHPNEFNNMJE; // 0x90
		::System::Single IFOIKJADBIA; // 0x94
		::UnityEngine::Color PPLOPNFNEDE; // 0x98
		::System::Single AAHFGHOCABH; // 0xA8
		::UnityEngine::Color MKGFHLODOGJ; // 0xAC
		::UnityEngine::Color JPMHGCKOJBC; // 0xBC
		::System::Boolean AAGKIPFCNHO; // 0xCC
		// static const ::System::String* BKOOGOBKBBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM__ONBIND_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + NNACFBFOEPM_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNACFBFOEPM_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNACFBFOEPM__ONTICK_OFFSET))(this, a1);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void FBPJEKCPEKH(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + NNACFBFOEPM_FBPJEKCPEKH_OFFSET))(this, a1);
		}

		::System::Void PDPKAHJGCLM(::RPG::GameCore::AbilityCurrentHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentHPChange*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_PDPKAHJGCLM_OFFSET))(this, a1);
		}

		::System::Void DFHKMNFAMEO(::RPG::GameCore::AbilityMaxHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityMaxHPChange*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_DFHKMNFAMEO_OFFSET))(this, a1);
		}

		::System::Void AGIJFEPDKMM(::RPG::GameCore::AbilityRallyHPChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityRallyHPChange*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_AGIJFEPDKMM_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void GLPIALKAHDI(::MOCALHHICIP* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MOCALHHICIP*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_GLPIALKAHDI_OFFSET))(this, a1);
		}

		::System::Void LBBCPHPEHIO(::EFJCLCMOLGO* a1)
		{
			return ((::System::Void(*)(::PVOID, ::EFJCLCMOLGO*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_LBBCPHPEHIO_OFFSET))(this, a1);
		}

		::System::Void BDHKBPHAFKP(::PFMAHFAJHLC_MEBEAAGEOKK* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PFMAHFAJHLC_MEBEAAGEOKK*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_BDHKBPHAFKP_OFFSET))(this, a1);
		}

		::System::Void NDIPOLGGHHF(::System::Boolean a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_NDIPOLGGHHF_OFFSET))(this, a1, a2);
		}

		::System::Void MJLMLHIOMEI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_MJLMLHIOMEI_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void OMNOCGOKIDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_OMNOCGOKIDP_OFFSET))(this);
		}

		::System::Void NLAODGOLFKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_NLAODGOLFKG_OFFSET))(this);
		}

		::System::Void MFJOANOEHJD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_MFJOANOEHJD_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_CCJBBIOCLIM_OFFSET))(this);
		}

		::System::Void KOLBHPFLGHN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NNACFBFOEPM_KOLBHPFLGHN_OFFSET))(this, a1);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void EKCHAHDIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_EKCHAHDIEFH_OFFSET))(this);
		}

		::System::Single FOCOJHOAILK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_FOCOJHOAILK_OFFSET))(this);
		}

		::System::Single JOFJBBGDGNN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_JOFJBBGDGNN_OFFSET))(this);
		}

		::System::Void HDJHJFDNALE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_HDJHJFDNALE_OFFSET))(this, a1);
		}

		::System::Void KJEFLAFAAOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_KJEFLAFAAOB_OFFSET))(this, a1);
		}

		::System::Void FHGAGLNCNMO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_FHGAGLNCNMO_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void CIHGFALFMFK(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_CIHGFALFMFK_OFFSET))(this, a1);
		}

		::System::Void EJOEBMLDKKB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_EJOEBMLDKKB_OFFSET))(this, a1);
		}

		::System::Void PHMEJMELDOB(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + NNACFBFOEPM_PHMEJMELDOB_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Void __ForcePlayHPTween_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNACFBFOEPM___FORCEPLAYHPTWEEN_B__23_0_OFFSET))(this);
		}

	};
