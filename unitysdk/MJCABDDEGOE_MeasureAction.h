#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int MJCABDDEGOE_MeasureAction_TypeDefinitionIndex = 62357;

	enum class MJCABDDEGOE_MeasureAction : ::System::Int32
	{
		None = 0,
		DoNothing = 1,
		Preview = 2,
		Draw = 3,
		Rollback = 4,
		CannotDraw = 5,
	};
