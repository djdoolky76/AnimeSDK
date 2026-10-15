#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MFGGGCLCOLD_IntersectType_TypeDefinitionIndex = 62172;

	enum class MFGGGCLCOLD_IntersectType : ::System::Int32
	{
		NoIntersect = 0,
		SideFace = 1,
		TopFace = 2,
		BottomFace = 4,
	};
