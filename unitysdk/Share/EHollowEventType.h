#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventType_TypeDefinitionIndex = 10151;

	enum class EHollowEventType : ::System::Int16
	{
		Battle_Boss = 33,
		Dialog_Special = 43,
		ChangeLevel_Fight = 24,
		BattleEnd = 22,
		Battle_Normal = 31,
		Dialog_Positive = 41,
		Dialog_Negative = 42,
		Battle = 30,
		End = 20,
		ChangeLevel_Interact = 23,
		Begin = 10,
		All = 1,
		Battle_Elite = 32,
		Dialog = 40,
		None = 0,
		InteractEnd = 21,
	};
}
