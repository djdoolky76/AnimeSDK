#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType_TypeDefinitionIndex = 67691;

	enum class ConfigGachaPerformanceSendCmdWithoutParamsNode_GachaPerformanceCmdType : ::System::Int32
	{
		PlayTextShotTimeline = 8,
		SetTvMatProperty = 4,
		ResetGaussianBlurParams = 2,
		PlayItemShake = 3,
		PlaySummonsBornAnimation = 9,
		ItemStageRarityPerform = 7,
		PlayStageRotateEffect = 6,
		PlayStageRotateScreenEffects = 5,
		ItemStageRaritySPerform = 1,
		TvRaritySPerform = 0,
	};
}
