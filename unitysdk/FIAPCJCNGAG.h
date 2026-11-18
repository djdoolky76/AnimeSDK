#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FIAPCJCNGAG_TypeDefinitionIndex = 28730;

enum class FIAPCJCNGAG : ::System::Int32
{
	ToCore_CreatePlayerEntity = 1,
	FromCore_DestroyEntity = 3,
	FromCore_GameEnd = 4,
	FromCore_CreatePlayerEntitySuccess = 2,
	FromCore_WorldDestroy = 5,
	None = 0,
};
