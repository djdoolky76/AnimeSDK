#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ComicDessert/AnchorIdentifier.h"
namespace UnityEngine { class Transform; }

namespace RPG::Client::LittleGame::ComicDessert
{
	inline static constexpr unsigned int AnchorBinding_TypeDefinitionIndex = 80087;

	struct alignas(8) AnchorBinding
	{
		::RPG::Client::LittleGame::ComicDessert::AnchorIdentifier Identifier; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Transform* AttachPoint; // 0x20
	};
}
