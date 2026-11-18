#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Photo
{
	inline static constexpr unsigned int AnimationBlendPosePerBoneFlag_TypeDefinitionIndex = 71611;

	enum class AnimationBlendPosePerBoneFlag : ::System::Byte
	{
		None = 0,
		MeshSpaceScale = 2,
		MeshSpaceRotation = 1,
	};
}
