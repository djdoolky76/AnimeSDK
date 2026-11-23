#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EF35976FB684FD99/ADB1DA7B264B7350.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/EDF2B20DF77FE472.h"

namespace UnityEngine::Tilemaps { class TileBase; }

namespace UnityEngine::Tilemaps
{
	inline static constexpr unsigned int Tilemap_SyncTile_TypeDefinitionIndex = 21354;

	struct alignas(8) Tilemap_SyncTile
	{
		::UnityEngine::EDF2B20DF77FE472 m_Position; // 0x10
		::System::Byte _padding0[0x4];
		::UnityEngine::Tilemaps::TileBase* m_Tile; // 0x20
		::EF35976FB684FD99::ADB1DA7B264B7350 m_TileData; // 0x28
	};
}
