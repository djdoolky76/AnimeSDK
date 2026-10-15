#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int ImmediateTaskBase_1_TypeDefinitionIndex = 54788;

	template <typename T>
	class ImmediateTaskBase_1 : public ::GELIALJDFBL
	{
	public:
		T _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
	};
}
