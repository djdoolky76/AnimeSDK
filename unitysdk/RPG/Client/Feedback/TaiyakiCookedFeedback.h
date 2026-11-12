#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Feedback/TaiyakiCookedFeedback_FeedbackType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_APPLYNATURALPRESET_OFFSET UNITYSDK_OFFSET(0xD96A5C0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_AWAKE_OFFSET UNITYSDK_OFFSET(0xD9695B0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_BJCBJLGEKMM_OFFSET UNITYSDK_OFFSET(0xD96AB20)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xD969E70)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_CTOR_OFFSET UNITYSDK_OFFSET(0xD96AEB0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xD9695A0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_HGKBCMDAKLF_OFFSET UNITYSDK_OFFSET(0xD96A3C0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_HPDPBKDMIML_OFFSET UNITYSDK_OFFSET(0xD96A840)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_INDDMLJLNOG_OFFSET UNITYSDK_OFFSET(0xD9696A0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_IODLFDHODJF_OFFSET UNITYSDK_OFFSET(0xD969640)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_JPFNNECFOGL_OFFSET UNITYSDK_OFFSET(0xD969990)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_KBGHBIGBGNC_OFFSET UNITYSDK_OFFSET(0xD96AC60)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_KFBBKAGGGEE_OFFSET UNITYSDK_OFFSET(0xD96A090)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_MNJFNBCPALH_OFFSET UNITYSDK_OFFSET(0xD96A6F0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_NKLMANBFJJB_OFFSET UNITYSDK_OFFSET(0xD96A9A0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD96AD90)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD96AE00)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PBDIMCNJCAJ_OFFSET UNITYSDK_OFFSET(0xD969930)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYCOOKEDFLOP_1_OFFSET UNITYSDK_OFFSET(0xD96A030)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYCOOKEDFLOP_OFFSET UNITYSDK_OFFSET(0xD969F20)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYRESTOCKDROP_1_OFFSET UNITYSDK_OFFSET(0xD96A360)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYRESTOCKDROP_OFFSET UNITYSDK_OFFSET(0xD96A1C0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAY_1_OFFSET UNITYSDK_OFFSET(0xD969FB0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAY_OFFSET UNITYSDK_OFFSET(0xD969ED0)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_REFRESHRESTPOSE_OFFSET UNITYSDK_OFFSET(0xD96A500)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_STOP_OFFSET UNITYSDK_OFFSET(0xD96A490)
#define RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_UPDATE_OFFSET UNITYSDK_OFFSET(0xD9697C0)

namespace RPG::Client::Feedback
{
	inline static constexpr unsigned int TaiyakiCookedFeedback_TypeDefinitionIndex = 78545;

	class TaiyakiCookedFeedback : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::System::Single cookedDuration; // 0x20
		::System::Single cookedLiftHeight; // 0x24
		::UnityEngine::Vector3 rotationAxis; // 0x28
		::System::Single rotationAngle; // 0x34
		::System::Single cookedSquashStrength; // 0x38
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* cookedLiftCurve; // 0x40
		::UnityEngine::AnimationCurve* cookedRotationCurve; // 0x48
		::UnityEngine::AnimationCurve* cookedSquashCurve; // 0x50
		::System::Single restockDuration; // 0x58
		::UnityEngine::Vector3 dropDirection; // 0x5C
		::System::Single restockDropHeight; // 0x68
		::System::Single restockSquashStrength; // 0x6C
		::UnityEngine::AnimationCurve* restockDropCurve; // 0x70
		::UnityEngine::AnimationCurve* restockSquashCurve; // 0x78
		::System::Boolean useUnscaledTime; // 0x80
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* DJEKPPGFAAD; // 0x88
		::UnityEngine::Vector3 FPMDDEJKOPM; // 0x90
		::UnityEngine::Quaternion LOCCGINBLDF; // 0x9C
		::UnityEngine::Vector3 JLOMBEMIDDO; // 0xAC
		::System::Single BFOKLNJOFAI; // 0xB8
		::System::Single FMNNIKIJKEA; // 0xBC
		::System::Boolean GABMPMNHFNG; // 0xC0
		::System::Byte _padding2[0x3];
		::RPG::Client::Feedback::TaiyakiCookedFeedback_FeedbackType IHBHNJADGPG; // 0xC4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_UPDATE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAY_OFFSET))(this);
		}

		::System::Void Play_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAY_1_OFFSET))(this, a1);
		}

		::System::Void PlayCookedFlop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYCOOKEDFLOP_OFFSET))(this);
		}

		::System::Void PlayCookedFlop_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYCOOKEDFLOP_1_OFFSET))(this, a1);
		}

		::System::Void PlayRestockDrop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYRESTOCKDROP_OFFSET))(this);
		}

		::System::Void PlayRestockDrop_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PLAYRESTOCKDROP_1_OFFSET))(this, a1);
		}

		::System::Void KFBBKAGGGEE(::RPG::Client::Feedback::TaiyakiCookedFeedback_FeedbackType a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Feedback::TaiyakiCookedFeedback_FeedbackType, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_KFBBKAGGGEE_OFFSET))(this, a1, a2);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_STOP_OFFSET))(this);
		}

		::System::Void RefreshRestPose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_REFRESHRESTPOSE_OFFSET))(this);
		}

		::System::Void ApplyNaturalPreset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_APPLYNATURALPRESET_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_ONVALIDATE_OFFSET))(this);
		}

		::System::Void IODLFDHODJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_IODLFDHODJF_OFFSET))(this);
		}

		::System::Void INDDMLJLNOG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_INDDMLJLNOG_OFFSET))(this);
		}

		::System::Void JPFNNECFOGL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_JPFNNECFOGL_OFFSET))(this, a1);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Single PBDIMCNJCAJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_PBDIMCNJCAJ_OFFSET))(this);
		}

		::System::Void HGKBCMDAKLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_HGKBCMDAKLF_OFFSET))(this);
		}

		static ::UnityEngine::AnimationCurve* MNJFNBCPALH()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_MNJFNBCPALH_OFFSET))();
		}

		static ::UnityEngine::AnimationCurve* HPDPBKDMIML()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_HPDPBKDMIML_OFFSET))();
		}

		static ::UnityEngine::AnimationCurve* NKLMANBFJJB()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_NKLMANBFJJB_OFFSET))();
		}

		static ::UnityEngine::AnimationCurve* BJCBJLGEKMM()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_BJCBJLGEKMM_OFFSET))();
		}

		static ::UnityEngine::AnimationCurve* KBGHBIGBGNC()
		{
			return ((::UnityEngine::AnimationCurve*(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_TAIYAKICOOKEDFEEDBACK_KBGHBIGBGNC_OFFSET))();
		}

	};
}
