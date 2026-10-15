#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Editor
{
	struct alignas(4) BGCurvePCG_MultSubMesh_SingleMeshConfig
	{
		::System::Int32 TrailID; // 0x10
		::System::Single Position; // 0x14
		::System::Single Length; // 0x18
	};
}
