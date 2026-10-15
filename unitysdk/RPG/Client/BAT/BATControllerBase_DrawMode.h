#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::BAT
{
	enum class BATControllerBase_DrawMode : ::System::Int32
	{
		DrawMesh = 0,
		DrawMeshInstanced = 1,
		DrawMeshInstancedProcedural = 2,
		DrawMeshInstancedIndirect = 3,
	};
}
