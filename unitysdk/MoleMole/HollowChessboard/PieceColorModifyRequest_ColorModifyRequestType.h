#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int PieceColorModifyRequest_ColorModifyRequestType_TypeDefinitionIndex = 41967;

	enum class PieceColorModifyRequest_ColorModifyRequestType : ::System::Int32
	{
		Normal = 0,
		High = 1,
	};
}
