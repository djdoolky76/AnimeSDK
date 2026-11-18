#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ValueCompareType_TypeDefinitionIndex = 65457;

	enum class ValueCompareType : ::System::Int32
	{
		Less = 3,
		NotEqual = 6,
		NotNullOrEmpty = 7,
		LessEqual = 4,
		Equal = 2,
		Between = 5,
		Greater = 0,
		GreaterEqual = 1,
	};
}
