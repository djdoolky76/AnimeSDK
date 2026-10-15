#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	template <typename T>
	class ScopeUser_1 : public ::System::Object
	{
	public:
		T Owner; // 0x0
	};
}
