#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::TeamTowers
{
	enum class TeamTowersDepartmentProgressType : ::System::Int32
	{
		None = 0,
		Empty = 1,
		FirstDepartment = 2,
		SecondDepartment = 3,
		BossDepartment = 4,
		FullComplete = 5,
	};
}
