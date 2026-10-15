#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System
{
	template <typename T>
	class Lazy_1_Boxed : public ::System::Object
	{
	public:
		T m_value; // 0x0
	};
}
