#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int UICameraInfoShowType_TypeDefinitionIndex = 64238;

	enum class UICameraInfoShowType : ::System::Int32
	{
		Mobile = 0,
		PC = 1,
	};
}
