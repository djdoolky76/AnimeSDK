#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua::Cast
{
	template <typename T>
	class Any_1 : public ::System::Object
	{
	public:
		T mTarget; // 0x0
	};
}
