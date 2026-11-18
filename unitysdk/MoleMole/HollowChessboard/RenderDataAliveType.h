#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int RenderDataAliveType_TypeDefinitionIndex = 55263;

	enum class RenderDataAliveType : ::System::Int32
	{
		Permanent = 1,
		Unknown = 0,
		KillWhenNotExecuting = 2,
	};
}
