#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TAUtils/SimpleTransform.h"
#include "unitysdk/RPG/Client/CharacterArtModelEffectBehavior_FollowMode.h"
namespace UnityEngine { class GameObject; }

namespace RPG::Client
{
	struct alignas(8) CharacterArtModelEffectBehavior_EffectFollow
	{
		::UnityEngine::GameObject* Effect; // 0x10
		::RPG::Client::CharacterArtModelEffectBehavior_FollowMode FollowMode; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* FollowTarget; // 0x20
		::RPG::Client::TAUtils::SimpleTransform LocalTransform; // 0x28
	};
}
