#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Motions/MotionFlag.h"
#include "unitysdk/System/Object.h"
class CLFIGBPHLHI;
namespace UnityEngine { class Transform; }

#define CLFIGBPHLHI_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xD7758A0)
#define CLFIGBPHLHI_CLLDGCGOPDM_OFFSET UNITYSDK_OFFSET(0xD7756E0)
#define CLFIGBPHLHI_CLONE_OFFSET UNITYSDK_OFFSET(0xD775960)
#define CLFIGBPHLHI_CTOR_OFFSET UNITYSDK_OFFSET(0xD775780)
#define CLFIGBPHLHI_DJMOOLAIGEO_OFFSET UNITYSDK_OFFSET(0xD775700)
#define CLFIGBPHLHI_EKMNONOLBPG_OFFSET UNITYSDK_OFFSET(0xD775710)
#define CLFIGBPHLHI_HBELKKBABCE_OFFSET UNITYSDK_OFFSET(0xD775720)
#define CLFIGBPHLHI_HFKFNFKIEON_OFFSET UNITYSDK_OFFSET(0xD775860)
#define CLFIGBPHLHI_ISDONE_OFFSET UNITYSDK_OFFSET(0xD775920)
#define CLFIGBPHLHI_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xD7758E0)
#define CLFIGBPHLHI_LHHNFKKGBAD_OFFSET UNITYSDK_OFFSET(0xD775740)
#define CLFIGBPHLHI_OJMGJHAMNNI_OFFSET UNITYSDK_OFFSET(0xD775730)
#define CLFIGBPHLHI_PAGKOAEOLKA_OFFSET UNITYSDK_OFFSET(0xD775A40)
#define CLFIGBPHLHI_PBLEFBHMEDC_OFFSET UNITYSDK_OFFSET(0xD7756F0)
#define CLFIGBPHLHI_REVERSE_OFFSET UNITYSDK_OFFSET(0xD7759D0)
#define CLFIGBPHLHI_STARTWITHTARGET_OFFSET UNITYSDK_OFFSET(0xD7757A0)
#define CLFIGBPHLHI_STEP_OFFSET UNITYSDK_OFFSET(0xD775800)

inline static constexpr unsigned int CLFIGBPHLHI_TypeDefinitionIndex = 73537;

	class CLFIGBPHLHI : public ::System::Object
	{
	public:
		::UnityEngine::Transform* GOINNMPDIKF; // 0x10
		::UnityEngine::Transform* MJCIPPMIDBE; // 0x18
		::System::Int32 NGOHHELNDIB; // 0x20
		::RPG::Client::Motions::MotionFlag FFNOKHIBLBG; // 0x24
		static ::System::Int32* StaticGet_NHALJPDONCP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "CLFIGBPHLHI")->GetStaticField(0x10A00);
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
