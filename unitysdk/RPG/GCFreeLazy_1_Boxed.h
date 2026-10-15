#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG
{
	template <typename T>
	class GCFreeLazy_1_Boxed : public ::System::Object
	{
	public:
		T m_value; // 0x0
	};
}
