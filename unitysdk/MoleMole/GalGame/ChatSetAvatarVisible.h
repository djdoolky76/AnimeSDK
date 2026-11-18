#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int ChatSetAvatarVisible_TypeDefinitionIndex = 51619;

	enum class ChatSetAvatarVisible : ::System::Int32
	{
		Visible = 2,
		Hide = 1,
		None = 0,
	};
}
