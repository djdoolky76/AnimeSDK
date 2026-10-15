#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LCEANMDMFNF_RF_GameInfoComponent_TypeDefinitionIndex = 37081;

	enum class LCEANMDMFNF_RF_GameInfoComponent : ::System::Byte
	{
		StageID = 1,
		GameState = 2,
		GameMode = 4,
		StateStartServerTick = 8,
		Max = 15,
	};
