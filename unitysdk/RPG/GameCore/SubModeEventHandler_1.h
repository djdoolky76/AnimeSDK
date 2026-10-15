#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::GameCore
{
	inline static constexpr unsigned int SubModeEventHandler_1_TypeDefinitionIndex = 56027;

	template <typename T>
	class SubModeEventHandler_1 : public ::System::Object
	{
	public:
		::System::Action* _handler; // 0x0
	};
}
