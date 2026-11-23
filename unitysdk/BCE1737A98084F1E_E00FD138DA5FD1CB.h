#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int BCE1737A98084F1E_E00FD138DA5FD1CB_TypeDefinitionIndex = 18305;

enum class BCE1737A98084F1E_E00FD138DA5FD1CB : ::System::Int32
{
	Nothing = 0,
	NoPosition = 1,
	NoOrientation = 2,
	NoTransform = 3,
	SphericalPositionBlend = 4,
	CylindricalPositionBlend = 8,
	RadialAimBlend = 16,
	IgnoreLookAtTarget = 32,
	NoLens = 64,
};
