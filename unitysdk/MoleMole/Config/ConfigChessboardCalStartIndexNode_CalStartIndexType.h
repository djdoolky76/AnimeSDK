#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigChessboardCalStartIndexNode_CalStartIndexType_TypeDefinitionIndex = 81734;

	enum class ConfigChessboardCalStartIndexNode_CalStartIndexType : ::System::Int32
	{
		CustomIndex = 1,
		PlayerCurIndex = 0,
		NoCustomIndex = 2,
	};
}
