#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class String; }
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame::CakeRace
{
	struct alignas(8) EffectConfig
	{
		::System::String* EffectName; // 0x10
		::UnityEngine::Transform* EffectTransform; // 0x18
	};
}
