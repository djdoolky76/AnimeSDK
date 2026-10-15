#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int PFACHJFCILN_PreloadItemState_TypeDefinitionIndex = 59693;

	enum class PFACHJFCILN_PreloadItemState : ::System::Int32
	{
		None = 0,
		Unloaded = 1,
		Loading = 2,
		PartiallyLoaded = 3,
		Loaded = 4,
	};
