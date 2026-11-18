#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int GalPlayableNodeType_TypeDefinitionIndex = 65212;

	enum class GalPlayableNodeType : ::System::Int32
	{
		Show3DModel = 21,
		ArgueStart = 31,
		SetSpecials = 34,
		SoundAction = 27,
		SubNormal = 18,
		ArgueSettle = 33,
		BubbleStory = 8,
		SwitchMainCityBGM = 13,
		SubNarrator = 4,
		Action = 3,
		PictureStory = 28,
		SwitchSceneGroup = 25,
		Condition = 24,
		Transition = 1,
		NarratorItemIcon = 5,
		ContinuousShake = 26,
		MultiSpeakerNormal = 35,
		JumpChapter = 7,
		NoAvatarNormal = 22,
		Normal = 0,
		WhiteSwitchScene = 29,
		ArgueHealthChange = 32,
		SwitchScene = 6,
		BubbleStorySequence = 30,
		SwitchBGM = 12,
	};
}
