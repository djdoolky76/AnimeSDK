#pragma once
#include "unitysdk/unitysdk.h"

namespace HoudiniEngineUnity
{
	inline static constexpr unsigned int HEU_InputNode_InputObjectType_TypeDefinitionIndex = 18112;

	enum class HEU_InputNode_InputObjectType : ::System::Int32
	{
		HDA = 0,
		UnityMesh = 1,
		Default_CURVE = 2,
		Default_SPLINE = 3,
		Default_TERRAIN = 4,
		Default_BoundingBox = 5,
		Default_TILEMAP = 6,
		ProceduralRoad_Road = 7,
		ProceduralRoad_Sidewalk = 8,
	};
}
