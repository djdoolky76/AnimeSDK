#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetLoadGraph/AssetLoadGraphNodeRuntime.h"

namespace Foundation::AssetLoadGraph
{
	inline static constexpr unsigned int AssetLoadGraphNodeRuntime_1_TypeDefinitionIndex = 8388;

	template <typename T>
	class AssetLoadGraphNodeRuntime_1 : public ::Foundation::AssetLoadGraph::AssetLoadGraphNodeRuntime
	{
	public:
		T _Result_k__BackingField; // 0x0
		T _deferredResult; // 0x0
		::System::Boolean _hasDeferredResult; // 0x0
	};
}
