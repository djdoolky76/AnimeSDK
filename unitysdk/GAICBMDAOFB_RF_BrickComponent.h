#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int GAICBMDAOFB_RF_BrickComponent_TypeDefinitionIndex = 37078;

	enum class GAICBMDAOFB_RF_BrickComponent : ::System::UInt16
	{
		BrickTypeID = 1,
		PresetConfigEntityID = 2,
		IsInControl = 4,
		SpeedUpRatio = 8,
		SpecialViewType = 16,
		IsStatic = 32,
		OverrideFriction = 64,
		ModifierInfo = 128,
		Max = 255,
	};
