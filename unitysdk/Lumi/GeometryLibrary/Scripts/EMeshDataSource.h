#pragma once
#include "unitysdk/unitysdk.h"

namespace Lumi::GeometryLibrary::Scripts
{
	enum class EMeshDataSource : ::System::Int32
	{
		UnityMesh = 0,
		FBXFile = 1,
		DynamicMesh = 2,
	};
}
