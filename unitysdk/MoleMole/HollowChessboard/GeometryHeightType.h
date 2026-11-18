#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int GeometryHeightType_TypeDefinitionIndex = 43457;

	enum class GeometryHeightType : ::System::Int32
	{
		NormalTop = 3,
		SpecialTop = 4,
		None = 0,
		Back = 1,
		HalfTop = 2,
	};
}
