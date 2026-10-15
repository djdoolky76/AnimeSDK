#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class DCGIDEKLGAJ;
namespace RPG::GameCore { class GameEntity; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CAOMOABKIMP_BLILDBCEGFH_OFFSET UNITYSDK_OFFSET(0xC499620)
#define CAOMOABKIMP_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0xC499A20)
#define CAOMOABKIMP_CTOR_OFFSET UNITYSDK_OFFSET(0xC499B60)
#define CAOMOABKIMP_DEABGAIMGLG_OFFSET UNITYSDK_OFFSET(0xC499B00)
#define CAOMOABKIMP_DGEGBPMFFAO_OFFSET UNITYSDK_OFFSET(0xC499A80)
#define CAOMOABKIMP_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0xC499200)
#define CAOMOABKIMP_EKCHAHDIEFH_OFFSET UNITYSDK_OFFSET(0xC499550)
#define CAOMOABKIMP_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0xC499340)
#define CAOMOABKIMP_FNFBPFAOELN_OFFSET UNITYSDK_OFFSET(0xC499060)
#define CAOMOABKIMP_GET_INDEX_OFFSET UNITYSDK_OFFSET(0xC498FE0)
#define CAOMOABKIMP_GET_TRANS_OFFSET UNITYSDK_OFFSET(0xC499000)
#define CAOMOABKIMP_GNPDMIGGLPF_OFFSET UNITYSDK_OFFSET(0xC499850)
#define CAOMOABKIMP_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0xC4996D0)
#define CAOMOABKIMP_KJHDKBJDJFC_OFFSET UNITYSDK_OFFSET(0xC4998A0)
#define CAOMOABKIMP_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0xC499960)
#define CAOMOABKIMP_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0xC499140)
#define CAOMOABKIMP_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0xC499300)
#define CAOMOABKIMP_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0xC4990B0)
#define CAOMOABKIMP_ONRETURN_OFFSET UNITYSDK_OFFSET(0xC4991B0)
#define CAOMOABKIMP_SET_INDEX_OFFSET UNITYSDK_OFFSET(0xC498FF0)
#define CAOMOABKIMP__ONBIND_OFFSET UNITYSDK_OFFSET(0xC498F20)
#define CAOMOABKIMP__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0xC4997F0)

	class CAOMOABKIMP : public ::FMPCODLIOLG
	{
	public:
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x60
		::UnityEngine::RectTransform* COMKFDLOADC; // 0x68
		::UnityEngine::Animation* KHONICBMFBP; // 0x70
		::DCGIDEKLGAJ* OKHDAMMMMLI; // 0x78
		::UnityEngine::Animation* EFKDBJCKBPK; // 0x80
		::System::Boolean AMDJLAFJKFA; // 0x88
		::System::Byte _padding0[0x3];
		::UnityEngine::Color MKGFHLODOGJ; // 0x8C
		::System::Int32 _Index_k__BackingField; // 0x9C
		::UnityEngine::Color PPLOPNFNEDE; // 0xA0
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* CBGCGEIAIAH; // 0x0
		// static const ::System::String* BKOOGOBKBBK; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP__ONBIND_OFFSET))(this);
		}

		::System::Int32 get_Index()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_GET_INDEX_OFFSET))(this);
		}

		::System::Void set_Index(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAOMOABKIMP_SET_INDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_Trans()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_GET_TRANS_OFFSET))(this);
		}

		::System::Void FNFBPFAOELN(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + CAOMOABKIMP_FNFBPFAOELN_OFFSET))(this, a1);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CAOMOABKIMP_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_ONRETURN_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + CAOMOABKIMP_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAOMOABKIMP_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP__ONDISPOSE_OFFSET))(this);
		}

		::System::Void BLILDBCEGFH(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CAOMOABKIMP_BLILDBCEGFH_OFFSET))(this, a1);
		}

		::System::Void GNPDMIGGLPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_GNPDMIGGLPF_OFFSET))(this);
		}

		::System::Void KJHDKBJDJFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_KJHDKBJDJFC_OFFSET))(this);
		}

		::System::Void DGEGBPMFFAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_DGEGBPMFFAO_OFFSET))(this);
		}

		::System::Void DEABGAIMGLG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_DEABGAIMGLG_OFFSET))(this);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CAOMOABKIMP_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void KOLBHPFLGHN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CAOMOABKIMP_KOLBHPFLGHN_OFFSET))(this, a1);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void EKCHAHDIEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CAOMOABKIMP_EKCHAHDIEFH_OFFSET))(this);
		}

	};
