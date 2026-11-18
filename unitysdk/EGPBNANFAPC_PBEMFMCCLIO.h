#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EGPBNANFAPC_PBEMFMCCLIO_TypeDefinitionIndex = 88222;

enum class EGPBNANFAPC_PBEMFMCCLIO : ::System::Int32
{
	None = 0,
	FollowPluginValid = 4,
	Alive = 1,
	NeedUpdateModel = 2,
	FollowCamera = 8,
	AttachToPlatform = 32,
	AttachToWorld = 64,
	NeedUpdateEveryFrame = 16,
};
