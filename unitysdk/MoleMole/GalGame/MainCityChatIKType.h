#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatIKType_TypeDefinitionIndex = 52633;

	enum class MainCityChatIKType : ::System::Int32
	{
		LookAtNpc = 1,
		LookAtPlayer = 0,
		LookAtSceneObject = 2,
		LookAtMember = 3,
	};
}
