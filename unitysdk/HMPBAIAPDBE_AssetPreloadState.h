#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int HMPBAIAPDBE_AssetPreloadState_TypeDefinitionIndex = 59696;

	enum class HMPBAIAPDBE_AssetPreloadState : ::System::Int32
	{
		Unloaded = 0,
		InQueue = 1,
		Loading = 2,
		Loaded = 3,
	};
