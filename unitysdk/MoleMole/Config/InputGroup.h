#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int InputGroup_TypeDefinitionIndex = 71135;

	enum class InputGroup : ::System::Int32
	{
		CharacterQTEMute = 4,
		CharacterSkill = 1,
		CharacterUI = 2,
		None = 8,
		All = 7,
		NotSkillHUD = 6,
		CharacterSwitchMute = 5,
		CameraMove = 3,
		CharacterMove = 0,
	};
}
