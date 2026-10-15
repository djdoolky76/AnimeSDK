#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }

namespace RPG::GameCore
{
	template <typename T>
	class TurnBasedPluginEventHandler_1 : public ::System::Object
	{
	public:
		::System::Action* _handler; // 0x0
	};
}
