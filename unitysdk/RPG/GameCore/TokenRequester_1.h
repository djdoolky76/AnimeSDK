#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class NEJPLEFGALN;

namespace RPG::GameCore
{
	inline static constexpr unsigned int TokenRequester_1_TypeDefinitionIndex = 54253;

	template <typename T>
	class TokenRequester_1 : public ::System::Object
	{
	public:
		::NEJPLEFGALN* _TokenQueue_k__BackingField; // 0x0
		T Param; // 0x0
	};
}
