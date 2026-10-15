#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore
{
	template <typename T>
	class CustomParamWrapper_1 : public ::System::Object
	{
	public:
		T Param; // 0x0
	};
}
