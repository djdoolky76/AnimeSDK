#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
class KDJNAAOFMMJ;
namespace RPG::GameCore { class TaskContext; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int MapRotationListenerBase_1_TypeDefinitionIndex = 52991;

	template <typename T>
	class MapRotationListenerBase_1 : public ::GELIALJDFBL
	{
	public:
		T _ConfigRef; // 0x0
		::RPG::GameCore::TaskContext* _TaskContext; // 0x0
		::KDJNAAOFMMJ* _TaskExecutor; // 0x0
	};
}
