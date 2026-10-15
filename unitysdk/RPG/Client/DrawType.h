#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class DrawType : ::System::Int32
	{
		DrawMeshInstanced = 0,
		DrawMeshInstancedIndirect = 1,
		GraphicsDrawMesh = 2,
	};
}
