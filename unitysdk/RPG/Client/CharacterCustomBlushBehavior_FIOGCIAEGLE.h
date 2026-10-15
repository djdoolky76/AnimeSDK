#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/BlushLockedTransformChannel.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client
{
	struct alignas(8) CharacterCustomBlushBehavior_FIOGCIAEGLE
	{
		::UnityEngine::Transform* MCLLALGABAB; // 0x10
		::RPG::Client::BlushLockedTransformChannel BPIOAFNLNNO; // 0x18
		::UnityEngine::Vector3 AIBGEDIGEOO; // 0x1C
		::UnityEngine::Quaternion LOLLEGPLMOO; // 0x28
		::UnityEngine::Vector3 ELHCMMCHDOB; // 0x38
	};
}
