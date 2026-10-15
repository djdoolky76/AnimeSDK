#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	template <typename T>
	class AtomicObject_1 : public ::System::Object
	{
	public:
		T _value; // 0x0
		T _default; // 0x0
	};
}
