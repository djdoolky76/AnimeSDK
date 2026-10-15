#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StateStack_2_StateInfo_TypeDefinitionIndex = 70170;

	template <typename T1, typename T2>
	class StateStack_2_StateInfo : public ::System::Object
	{
	public:
		T1 kEY; // 0x0
		::System::Int32 priority; // 0x0
		T2 Value; // 0x0
	};
}
