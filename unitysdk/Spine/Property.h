#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int Property_TypeDefinitionIndex = 32895;

	enum class Property : ::System::Int32
	{
		Rotate = 0,
		X = 1,
		Y = 2,
		ScaleX = 3,
		ScaleY = 4,
		ShearX = 5,
		ShearY = 6,
		Inherit = 7,
		RGB = 8,
		Alpha = 9,
		RGB2 = 10,
		Attachment = 11,
		Deform = 12,
		Event = 13,
		DrawOrder = 14,
		DrawOrderFolder = 15,
		IkConstraint = 16,
		TransformConstraint = 17,
		PathConstraintPosition = 18,
		PathConstraintSpacing = 19,
		PathConstraintMix = 20,
		PhysicsConstraintInertia = 21,
		PhysicsConstraintStrength = 22,
		PhysicsConstraintDamping = 23,
		PhysicsConstraintMass = 24,
		PhysicsConstraintWind = 25,
		PhysicsConstraintGravity = 26,
		PhysicsConstraintMix = 27,
		PhysicsConstraintReset = 28,
		Sequence = 29,
		SliderTime = 30,
		SliderMix = 31,
	};
}
