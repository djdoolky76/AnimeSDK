#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Task_1_TypeDefinitionIndex = 53636;

	template <typename T>
	class ST_Task_1 : public ::GELIALJDFBL
	{
	public:
		T _Config; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
	};
}
