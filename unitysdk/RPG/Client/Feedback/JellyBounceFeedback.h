#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Feedback/JellyBounceFeedback_SquashAxis.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_AWAKE_OFFSET UNITYSDK_OFFSET(0xD9689E0)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_CIHFGJDCHIA_OFFSET UNITYSDK_OFFSET(0xD969310)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_CTOR_OFFSET UNITYSDK_OFFSET(0xD969420)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_ENIMHFNMLBI_OFFSET UNITYSDK_OFFSET(0xD9693B0)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_GET_ISPLAYING_OFFSET UNITYSDK_OFFSET(0xD9689D0)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_GMFHPDIFJIE_OFFSET UNITYSDK_OFFSET(0xD969210)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_IJHNEBFLECH_OFFSET UNITYSDK_OFFSET(0xD969180)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_IODLFDHODJF_OFFSET UNITYSDK_OFFSET(0xD968AE0)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0xD969060)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0xD969110)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_PLAY_1_OFFSET UNITYSDK_OFFSET(0xD968C90)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_PLAY_OFFSET UNITYSDK_OFFSET(0xD968C40)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_REFRESHRESTSCALE_OFFSET UNITYSDK_OFFSET(0xD968EF0)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_STOP_OFFSET UNITYSDK_OFFSET(0xD968E40)
#define RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_UPDATE_OFFSET UNITYSDK_OFFSET(0xD968B40)

namespace RPG::Client::Feedback
{
	inline static constexpr unsigned int JellyBounceFeedback_TypeDefinitionIndex = 78543;

	class JellyBounceFeedback : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Transform* target; // 0x18
		::RPG::Client::Feedback::JellyBounceFeedback_SquashAxis squashAxis; // 0x20
		::System::Single duration; // 0x24
		::System::Single strength; // 0x28
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* bounceCurve; // 0x30
		::System::Boolean useUnscaledTime; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::Transform* DJEKPPGFAAD; // 0x40
		::UnityEngine::Vector3 JLOMBEMIDDO; // 0x48
		::System::Single BFOKLNJOFAI; // 0x54
		::System::Single MKPENDBDAFC; // 0x58
		::System::Boolean GABMPMNHFNG; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlaying()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_GET_ISPLAYING_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_UPDATE_OFFSET))(this);
		}

		::System::Void Play()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_PLAY_OFFSET))(this);
		}

		::System::Void Play_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_PLAY_1_OFFSET))(this, a1);
		}

		::System::Void Stop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_STOP_OFFSET))(this);
		}

		::System::Void RefreshRestScale()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_REFRESHRESTSCALE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_ONDISABLE_OFFSET))(this);
		}

		::System::Void OnValidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_ONVALIDATE_OFFSET))(this);
		}

		::System::Void IODLFDHODJF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_IODLFDHODJF_OFFSET))(this);
		}

		::System::Void IJHNEBFLECH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_IJHNEBFLECH_OFFSET))(this);
		}

		::System::Void GMFHPDIFJIE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_GMFHPDIFJIE_OFFSET))(this, a1);
		}

		::System::Void CIHFGJDCHIA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_CIHFGJDCHIA_OFFSET))(this);
		}

		::System::Void ENIMHFNMLBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FEEDBACK_JELLYBOUNCEFEEDBACK_ENIMHFNMLBI_OFFSET))(this);
		}

	};
}
