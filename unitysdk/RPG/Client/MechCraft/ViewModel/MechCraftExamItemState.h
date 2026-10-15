#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::MechCraft::ViewModel
{
	enum class MechCraftExamItemState : ::System::Int32
	{
		Unknown = 0,
		Current = 1,
		Finish = 2,
	};
}
