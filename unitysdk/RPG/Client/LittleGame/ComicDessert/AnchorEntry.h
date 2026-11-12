#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorType.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int AnchorEntry_TypeDefinitionIndex = 80086;

	struct alignas(8) AnchorEntry
	{
		::System::UInt32 AnchorID; // 0x10
		::RPG::Client::LittleGame::ComicDessert::AnchorType Type; // 0x14
		::UnityEngine::Transform* AttachPoint; // 0x18
	};
}
