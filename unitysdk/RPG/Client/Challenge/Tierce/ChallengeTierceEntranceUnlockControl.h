#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class SmoothMask; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0xC944F90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_HFNKNOLMOAG_OFFSET UNITYSDK_OFFSET(0xC944DF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_KANMCJHEFJJ_OFFSET UNITYSDK_OFFSET(0xC944E80)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_PMNNGMDEDIB_OFFSET UNITYSDK_OFFSET(0xC944E30)

namespace RPG::Client::Challenge::Tierce
{
	class ChallengeTierceEntranceUnlockControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::GameCore::ChallengeGroupType PJNDKBNAGBA; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::UI::Image* _Image; // 0x20
		::UnityEngine::UI::SmoothMask* _SmoothMask; // 0x28
		::UnityEngine::Sprite* _SpriteMemory; // 0x30
		::UnityEngine::Sprite* _SpriteStory; // 0x38
		::UnityEngine::Sprite* _SpriteBoss; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::ChallengeGroupType HFNKNOLMOAG()
		{
			return ((::RPG::GameCore::ChallengeGroupType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_HFNKNOLMOAG_OFFSET))(this);
		}

		::System::Void PMNNGMDEDIB(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_PMNNGMDEDIB_OFFSET))(this, a1);
		}

		::System::Void KANMCJHEFJJ(::RPG::GameCore::ChallengeGroupType a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::ChallengeGroupType))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCEENTRANCEUNLOCKCONTROL_KANMCJHEFJJ_OFFSET))(this, a1);
		}

	};
}
