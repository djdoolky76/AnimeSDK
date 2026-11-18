#pragma once
#include "unitysdk/unitysdk.h"

namespace RootMotion
{
	inline static constexpr unsigned int BipedNaming_BoneType_TypeDefinitionIndex = 36909;

	enum class BipedNaming_BoneType : ::System::Int32
	{
		Head = 2,
		Tail = 5,
		Eye = 6,
		Spine = 1,
		Arm = 3,
		Unassigned = 0,
		Leg = 4,
	};
}
