#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/CameraFightStateCommonConfig.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_CAMERAFIGHTSTATESELECTDARKTEAMSELFENTITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xC936920)

namespace RPG::Client
{
	class CameraFightStateSelectDarkTeamSelfEntityConfig : public ::RPG::Client::CameraFightStateCommonConfig
	{
	public:
		::System::Single DarkTeamSelectFollowOffsetRatioX; // 0x20
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* DarkTeamSelectFollowOffsetRatioCurve; // 0x28
		::System::Single ChooseFriendTargetLookAtWeight; // 0x30
		::UnityEngine::Vector3 ChooseFriendTargetMaxDeflection; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CAMERAFIGHTSTATESELECTDARKTEAMSELFENTITYCONFIG_CTOR_OFFSET))(this);
		}

	};
}
