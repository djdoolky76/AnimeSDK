#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DEHLMHKDEKC.h"
#include "unitysdk/RPG/GameCore/CakeRaceAIState.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AAHNCDBNJHF;
class AOGHMIFDBDC;

#define AAHNCDBNJHF_AHEEAFKFALM_OFFSET UNITYSDK_OFFSET(0xB0C7050)
#define AAHNCDBNJHF_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xB0C6C60)
#define AAHNCDBNJHF_CCTOR_OFFSET UNITYSDK_OFFSET(0xB0C7170)
#define AAHNCDBNJHF_CLJEBKODGHK_OFFSET UNITYSDK_OFFSET(0xB0C6DE0)
#define AAHNCDBNJHF_CTOR_OFFSET UNITYSDK_OFFSET(0xB0C6D20)
#define AAHNCDBNJHF_DIOEAJEHHND_OFFSET UNITYSDK_OFFSET(0xB0C6D40)
#define AAHNCDBNJHF_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB0C6C30)
#define AAHNCDBNJHF_JKOKFFCBJLJ_OFFSET UNITYSDK_OFFSET(0xB0C6C20)
#define AAHNCDBNJHF_LJOLGCNKIEH_OFFSET UNITYSDK_OFFSET(0xB0C7010)
#define AAHNCDBNJHF_PAFCMAMJENB_OFFSET UNITYSDK_OFFSET(0xB0C6D80)
#define AAHNCDBNJHF_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB0C6C50)

	class AAHNCDBNJHF : public ::DEHLMHKDEKC
	{
	public:
		::UnityEngine::Vector3 _Position_k__BackingField; // 0x40
		static ::System::Int32* StaticGet_PMHLFNJNKNP()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AAHNCDBNJHF")->GetStaticField(0xDB90);
		}

		static ::System::Int32* StaticGet_HKGHMHKEJNC()
		{
			return (::System::Int32*)UnitySDK::FromName("", "AAHNCDBNJHF")->GetStaticField(0xDB94);
		}

		::System::Void _ctor(::AOGHMIFDBDC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_CTOR_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + AAHNCDBNJHF_CCTOR_OFFSET))();
		}

		::RPG::GameCore::CakeRaceAIState JKOKFFCBJLJ()
		{
			return ((::RPG::GameCore::CakeRaceAIState(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_JKOKFFCBJLJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 get_Position()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_GET_POSITION_OFFSET))(this);
		}

		::System::Void set_Position(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_SET_POSITION_OFFSET))(this, a1);
		}

		static ::AAHNCDBNJHF* BPLPBPMEODA(::AOGHMIFDBDC* a1)
		{
			return ((::AAHNCDBNJHF*(*)(::AOGHMIFDBDC*))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_BPLPBPMEODA_OFFSET))(a1);
		}

		::System::Void PAFCMAMJENB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_PAFCMAMJENB_OFFSET))(this, a1);
		}

		::System::Void DIOEAJEHHND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_DIOEAJEHHND_OFFSET))(this);
		}

		::System::Void CLJEBKODGHK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_CLJEBKODGHK_OFFSET))(this);
		}

		::System::Void LJOLGCNKIEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_LJOLGCNKIEH_OFFSET))(this);
		}

		::System::Void AHEEAFKFALM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AAHNCDBNJHF_AHEEAFKFALM_OFFSET))(this);
		}

	};
