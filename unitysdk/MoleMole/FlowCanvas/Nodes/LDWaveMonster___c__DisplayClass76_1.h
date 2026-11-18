#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster___c__DisplayClass76_1_TypeDefinitionIndex = 47388;

	template <typename T>
	struct alignas(4) LDWaveMonster___c__DisplayClass76_1
	{
		::System::Int32 playType; // 0x10
		::System::Int32 monsterLevel; // 0x14
		::System::Single forward; // 0x18
		::UnityEngine::Vector3 spawnPosition; // 0x1C
	};
}
