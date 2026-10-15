#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class InstanceArrayConfigJsonSyncMode : ::System::Int32
	{
		FullOverwrite = 0,
		TransformAndDeformOnly = 1,
		MatMeshAndIdsOnly = 2,
	};
}
