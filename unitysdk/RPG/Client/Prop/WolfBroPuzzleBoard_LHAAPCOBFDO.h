#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
namespace RPG::GameCore { class GameEntity; }

namespace RPG::Client::Prop
{
	struct alignas(8) WolfBroPuzzleBoard_LHAAPCOBFDO
	{
		::UnityEngine::Vector3Int PECPBEOHOJC; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::GameEntity* GGKGFABFGFE; // 0x20
	};
}
