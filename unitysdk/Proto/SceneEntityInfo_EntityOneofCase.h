#pragma once
#include "unitysdk/unitysdk.h"

namespace Proto
{
	inline static constexpr unsigned int SceneEntityInfo_EntityOneofCase_TypeDefinitionIndex = 34855;

	enum class SceneEntityInfo_EntityOneofCase : ::System::Int32
	{
		None = 0,
		Actor = 7,
		NpcMonster = 12,
		Npc = 11,
		Prop = 5,
		SummonUnit = 8,
	};
}
