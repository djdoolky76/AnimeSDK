#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EPCBKDFGMAP_TypeDefinitionIndex = 52328;

enum class EPCBKDFGMAP : ::System::Int32
{
	IgnoreColliderInit = 2,
	IgnoreMonoEntityComponent = 1,
	Extra_AttachPointSetup = 32,
	IgnoreMoveParent = 4,
	IgnoreAll = 31,
	Default = 0,
	IgnoreAdditionSetup = 16,
	IgnoreRigidbodyInit = 8,
};
