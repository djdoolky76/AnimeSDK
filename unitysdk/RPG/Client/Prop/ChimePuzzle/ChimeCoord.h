#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::Prop::ChimePuzzle
{
	struct alignas(4) ChimeCoord
	{
		::System::Int32 row; // 0x10
		::System::Int32 column; // 0x14
	};
}
