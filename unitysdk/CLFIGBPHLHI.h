#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/MotionFlag.h"
#include "unitysdk/System/Object.h"
class CLFIGBPHLHI;
namespace UnityEngine { class Transform; }

#define CLFIGBPHLHI_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xD77BF10)
#define CLFIGBPHLHI_CLLDGCGOPDM_OFFSET UNITYSDK_OFFSET(0xD77BD50)
#define CLFIGBPHLHI_CLONE_OFFSET UNITYSDK_OFFSET(0xD77BFD0)
#define CLFIGBPHLHI_CTOR_OFFSET UNITYSDK_OFFSET(0xD77BDF0)
#define CLFIGBPHLHI_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0xD77BD70)
#define CLFIGBPHLHI_EKMNONOLBPG_OFFSET UNITYSDK_OFFSET(0xD77BD80)
#define CLFIGBPHLHI_HBELKKBABCE_OFFSET UNITYSDK_OFFSET(0xD77BD90)
#define CLFIGBPHLHI_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xD77BED0)
#define CLFIGBPHLHI_ISDONE_OFFSET UNITYSDK_OFFSET(0xD77BF90)
#define CLFIGBPHLHI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xD77BF50)
#define CLFIGBPHLHI_LHHNFKKGBAD_OFFSET UNITYSDK_OFFSET(0xD77BDB0)
#define CLFIGBPHLHI_OJMGJHAMNNI_OFFSET UNITYSDK_OFFSET(0xD77BDA0)
#define CLFIGBPHLHI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD77C0B0)
#define CLFIGBPHLHI_PBLEFBHMEDC_OFFSET UNITYSDK_OFFSET(0xD77BD60)
#define CLFIGBPHLHI_REVERSE_OFFSET UNITYSDK_OFFSET(0xD77C040)
#define CLFIGBPHLHI_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xD77BE10)
#define CLFIGBPHLHI_STEP_OFFSET UNITYSDK_OFFSET(0xD77BE70)

inline static constexpr unsigned int CLFIGBPHLHI_TypeDefinitionIndex = 73538;

	class CLFIGBPHLHI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* MJCIPPMIDBE; // 0x10
		::UnityEngine::Transform* GOINNMPDIKF; // 0x18
		::RPG::Client::Motions::MotionFlag FFNOKHIBLBG; // 0x20
		::System::Int32 NGOHHELNDIB; // 0x24
		static ::System::Int32* StaticGet_NHALJPDONCP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CLFIGBPHLHI")->GetStaticField(0x117D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* CLLDGCGOPDM()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_CLLDGCGOPDM_OFFSET))(this);
		}

		::System::Void PBLEFBHMEDC(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_PBLEFBHMEDC_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* DJMOOLAIGEO()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_DJMOOLAIGEO_OFFSET))(this);
		}

		::System::Void EKMNONOLBPG(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_EKMNONOLBPG_OFFSET))(this, a1);
		}

		::RPG::Client::Motions::MotionFlag HBELKKBABCE()
		{
			return ((::RPG::Client::Motions::MotionFlag(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_HBELKKBABCE_OFFSET))(this);
		}

		::System::Void OJMGJHAMNNI(::RPG::Client::Motions::MotionFlag a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Motions::MotionFlag))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_OJMGJHAMNNI_OFFSET))(this, a1);
		}

		::System::Int32 LHHNFKKGBAD()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_LHHNFKKGBAD_OFFSET))(this);
		}

		::System::Void StartWithTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_STARTWITHTARGET_OFFSET))(this, a1);
		}

		::System::Void Step(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_STEP_OFFSET))(this, a1);
		}

		::System::Void HFKFNFKIEON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_HFKFNFKIEON_OFFSET))(this);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Boolean IsDone()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_ISDONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Clone()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_CLONE_OFFSET))(this);
		}

		::CLFIGBPHLHI* Reverse()
		{
			return ((::CLFIGBPHLHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_REVERSE_OFFSET))(this);
		}

		::System::Void PAGKOAEOLKA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLFIGBPHLHI_PAGKOAEOLKA_OFFSET))(this, a1);
		}

	};
