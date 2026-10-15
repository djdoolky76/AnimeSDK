#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class ReflcetionModifyType : ::System::Int32
	{
		TeamLight = 0,
		TeamDark = 1,
		SkillTarget = 2,
		AllChara = 3,
		OwnerEffectTarget = 4,
		LocalPlayer = 5,
		NoneTarget = 6,
	};
}
