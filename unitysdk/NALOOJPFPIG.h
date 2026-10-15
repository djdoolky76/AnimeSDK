#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/EventSystems/RaycastResult.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::Client { class VirtualCursor; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::EventSystems { class PointerEventData; }

#define NALOOJPFPIG_AMIDOMBALFI_OFFSET UNITYSDK_OFFSET(0xBAA6CF0)
#define NALOOJPFPIG_APKDKBJPBDF_OFFSET UNITYSDK_OFFSET(0xBAA67B0)
#define NALOOJPFPIG_CTOR_OFFSET UNITYSDK_OFFSET(0xBAA72C0)
#define NALOOJPFPIG_DISPOSE_OFFSET UNITYSDK_OFFSET(0xBAA6740)
#define NALOOJPFPIG_DLFICACJACB_OFFSET UNITYSDK_OFFSET(0xBAA7200)
#define NALOOJPFPIG_EFLILBNCGMK_OFFSET UNITYSDK_OFFSET(0xBAA7150)
#define NALOOJPFPIG_EHACACNIICP_OFFSET UNITYSDK_OFFSET(0xBAA6BA0)
#define NALOOJPFPIG_GMPOCKOCMEF_OFFSET UNITYSDK_OFFSET(0xBAA6FA0)
#define NALOOJPFPIG_JMNAMFGGDFP_OFFSET UNITYSDK_OFFSET(0xBAA6D90)
#define NALOOJPFPIG_KPLJEALABID_OFFSET UNITYSDK_OFFSET(0xBAA7000)
#define NALOOJPFPIG_LOILHOLGGKM_OFFSET UNITYSDK_OFFSET(0xBAA6C10)
#define NALOOJPFPIG_MKFJGBGDMHN_OFFSET UNITYSDK_OFFSET(0xBAA69D0)
#define NALOOJPFPIG_NOJJJDJGKCP_OFFSET UNITYSDK_OFFSET(0xBAA6DE0)
#define NALOOJPFPIG_OFDGHPFCBHK_OFFSET UNITYSDK_OFFSET(0xBAA6920)
#define NALOOJPFPIG_POENAHPBHMI_OFFSET UNITYSDK_OFFSET(0xBAA6C80)

	class NALOOJPFPIG : public ::System::Object
	{
	public:
		::UnityEngine::EventSystems::PointerEventData* CDGMGPEPAMO; // 0x10
		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* DAAEFLHHLHD; // 0x18
		::UnityEngine::Vector3 FHMJONFDDBI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_CTOR_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_DISPOSE_OFFSET))(this);
		}

		::System::Boolean APKDKBJPBDF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_APKDKBJPBDF_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>* OFDGHPFCBHK()
		{
			return ((::System::Collections::Generic::List_1<::UnityEngine::EventSystems::RaycastResult>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_OFDGHPFCBHK_OFFSET))(this);
		}

		::System::Boolean EHACACNIICP(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NALOOJPFPIG_EHACACNIICP_OFFSET))(this, a1);
		}

		::System::Boolean LOILHOLGGKM(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NALOOJPFPIG_LOILHOLGGKM_OFFSET))(this, a1);
		}

		::System::Boolean POENAHPBHMI(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NALOOJPFPIG_POENAHPBHMI_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 MKFJGBGDMHN()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_MKFJGBGDMHN_OFFSET))(this);
		}

		::UnityEngine::Vector3 GMPOCKOCMEF()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_GMPOCKOCMEF_OFFSET))(this);
		}

		::System::Boolean KPLJEALABID()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_KPLJEALABID_OFFSET))(this);
		}

		::System::Boolean EFLILBNCGMK(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NALOOJPFPIG_EFLILBNCGMK_OFFSET))(this, a1);
		}

		::System::Boolean DLFICACJACB(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NALOOJPFPIG_DLFICACJACB_OFFSET))(this, a1);
		}

		::System::Boolean NOJJJDJGKCP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_NOJJJDJGKCP_OFFSET))(this);
		}

		::RPG::Client::VirtualCursor* JMNAMFGGDFP()
		{
			return ((::RPG::Client::VirtualCursor*(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_JMNAMFGGDFP_OFFSET))(this);
		}

		::System::Boolean AMIDOMBALFI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NALOOJPFPIG_AMIDOMBALFI_OFFSET))(this);
		}

	};
