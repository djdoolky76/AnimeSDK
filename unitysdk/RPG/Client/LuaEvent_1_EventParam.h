#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

namespace RPG::Client
{
	inline static constexpr unsigned int LuaEvent_1_EventParam_TypeDefinitionIndex = 59418;

	template <typename T>
	class LuaEvent_1_EventParam : public ::System::Object
	{
	public:
		::System::Action* Callback; // 0x0
		::System::Object* Listener; // 0x0
	};
}
