#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKCEHCKIBEA.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_BATTLEMAPSUBSYSTEM_BATTLECELLINFO_ISEMPTYINFO_OFFSET UNITYSDK_OFFSET(0x847C00)

namespace MoleMole
{
	inline static constexpr unsigned int BattleMapSubsystem_BattleCellInfo_TypeDefinitionIndex = 49646;

	struct alignas(4) BattleMapSubsystem_BattleCellInfo
	{
		::System::Byte MonsterCount; // 0x10
		::System::Byte BaseSpawnScore; // 0x11
		::HKCEHCKIBEA State; // 0x12

		::System::Boolean IsEmptyInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_BATTLECELLINFO_ISEMPTYINFO_OFFSET))(this);
		}
	};
}
