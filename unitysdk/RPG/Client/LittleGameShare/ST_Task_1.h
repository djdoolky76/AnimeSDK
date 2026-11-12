#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DJPBAKPBELL.h"
class PAPOPANPGIJ;

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ST_Task_1_TypeDefinitionIndex = 37899;

	template <typename T>
	class ST_Task_1 : public ::DJPBAKPBELL
	{
	public:
		T _Config; // 0x0
		::PAPOPANPGIJ* _TaskContext; // 0x0
	};
}
