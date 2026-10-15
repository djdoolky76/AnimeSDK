#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client
{
	template <typename T1, typename T2>
	class LRUEntity_2 : public ::System::Object
	{
	public:
		T1 _LRUKey_k__BackingField; // 0x0
		T2 _LRUValue_k__BackingField; // 0x0
	};
}
