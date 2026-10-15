#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class PoolGameObjectInstantiateStrategy : ::System::Int32
	{
		FromAsset = 0,
		BinaryPrefab = 1,
	};
}
