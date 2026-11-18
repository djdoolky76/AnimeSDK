#pragma once
#include "unitysdk/unitysdk.h"

namespace UnityEngine::XR
{
	inline static constexpr unsigned int InputFeatureType_TypeDefinitionIndex = 27658;

	enum class InputFeatureType : ::System::UInt32
	{
		Custom = 0,
		Binary = 1,
		DiscreteStates = 2,
		Axis1D = 3,
		Axis2D = 4,
		Axis3D = 5,
		Rotation = 6,
		Hand = 7,
		Bone = 8,
		Eyes = 9,
		kUnityXRInputFeatureTypeInvalid = 4294967295,
	};
}
