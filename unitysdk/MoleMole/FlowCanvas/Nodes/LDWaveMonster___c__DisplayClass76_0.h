#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JKAJAFJEPEL.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class MonoSpawnPoint; }
namespace MoleMole::FlowCanvas::Nodes { class LDWaveMonster; }

namespace MoleMole::FlowCanvas::Nodes
{
	inline static constexpr unsigned int LDWaveMonster___c__DisplayClass76_0_TypeDefinitionIndex = 47383;

	struct alignas(8) LDWaveMonster___c__DisplayClass76_0
	{
		::MoleMole::FlowCanvas::Nodes::LDWaveMonster* __4__this; // 0x10
		::JKAJAFJEPEL config; // 0x18
		::MoleMole::MonoSpawnPoint* spawnPoint; // 0x58
		::System::Boolean isPreload; // 0x60
	};
}
