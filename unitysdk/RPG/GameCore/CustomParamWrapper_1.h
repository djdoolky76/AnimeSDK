#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int CustomParamWrapper_1_TypeDefinitionIndex = 53699;

	template <typename T>
	class CustomParamWrapper_1 : public ::System::Object
	{
	public:
		T Param; // 0x0
	};
}
