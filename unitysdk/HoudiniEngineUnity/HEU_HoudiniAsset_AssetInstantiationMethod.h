#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	enum class HEU_HoudiniAsset_AssetInstantiationMethod : ::System::Int32
	{
		DEFAULT = 0,
		DUPLICATED = 1,
		UNDO = 2,
	};
}
