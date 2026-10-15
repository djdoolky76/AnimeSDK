#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAvatarCommonRowWrap_TypeDefinitionIndex = 56538;

	enum class EAvatarCommonRowWrap : ::System::Byte
	{
		None = 0,
		Avatar = 1,
		AetherDivideSpirit = 2,
		All = 255,
	};
}
