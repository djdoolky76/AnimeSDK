#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine
{
	enum class AstraFXRenderItem_Type : ::System::Int32
	{
		Mesh = 0,
		InstancedMesh = 1,
		IndirectDrawMesh = 2,
		Procedural = 3,
		ProceduralIndirect = 4,
	};
}
