#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	enum class GridFightDraftSelectAction_DraftActionState : ::System::Int32
	{
		None = 0,
		WaitSelectRsp = 1,
		WaitRerollRsp = 2,
	};
}
