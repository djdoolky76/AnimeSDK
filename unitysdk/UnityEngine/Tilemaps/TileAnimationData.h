#pragma once
#include "unitysdk/unitysdk.h"
namespace UnityEngine { class Sprite; }

namespace UnityEngine::Tilemaps
{
	struct alignas(8) TileAnimationData
	{
		::Il2CppArray<::UnityEngine::Sprite*>* m_AnimatedSprites; // 0x10
		::System::Single m_AnimationSpeed; // 0x18
		::System::Single m_AnimationStartTime; // 0x1C
	};
}
