#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ChangeType_TypeDefinitionIndex = 37843;

	enum class ChangeType : ::System::Byte
	{
		Replace = 0,
		Remove = 1,
		Change = 2,
	};
}
