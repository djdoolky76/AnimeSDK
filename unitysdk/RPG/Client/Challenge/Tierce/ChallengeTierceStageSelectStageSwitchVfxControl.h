#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace System { class Nullable; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC95CA90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_GET_SELECTEDSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xC95C960)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_HJIJNEFPEEN_OFFSET UNITYSDK_OFFSET(0xC95CA20)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_SET_SELECTEDSTAGEINDEX_OFFSET UNITYSDK_OFFSET(0xC95C9A0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceStageSelectStageSwitchVfxControl_TypeDefinitionIndex = 81553;

	class ChallengeTierceStageSelectStageSwitchVfxControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Nullable* FDABGHPCMKC; // 0x18
		::UnityEngine::Animation* _Animation; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_CTOR_OFFSET))(this);
		}

		::System::Nullable* get_SelectedStageIndex()
		{
			return ((::System::Nullable*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_GET_SELECTEDSTAGEINDEX_OFFSET))(this);
		}

		::System::Void set_SelectedStageIndex(::System::Nullable* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Nullable*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_SET_SELECTEDSTAGEINDEX_OFFSET))(this, a1);
		}

		::System::Void HJIJNEFPEEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESTAGESELECTSTAGESWITCHVFXCONTROL_HJIJNEFPEEN_OFFSET))(this);
		}

	};
}
