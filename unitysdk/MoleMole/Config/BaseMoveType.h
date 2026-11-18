#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int BaseMoveType_TypeDefinitionIndex = 82449;

	enum class BaseMoveType : ::System::Int32
	{
		Away = 1,
		Around = 3,
		Aside = 2,
		Follow = 0,
	};
}
