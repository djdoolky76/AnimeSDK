#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/StageBudgetTool/VolumeToBlockQuality.h"
namespace System { class String; }

namespace StageBudgetTool
{
	struct alignas(8) VolumeToBlock
	{
		::System::String* BlockAlias; // 0x10
		::StageBudgetTool::VolumeToBlockQuality quality; // 0x18
	};
}
