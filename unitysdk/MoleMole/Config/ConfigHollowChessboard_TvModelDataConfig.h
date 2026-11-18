#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigHollowChessboard_TVModelData.h"
#include "unitysdk/MoleMole/HollowChessPieceSizeType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowChessboard_TvModelDataConfig_TypeDefinitionIndex = 46371;

	struct alignas(4) ConfigHollowChessboard_TvModelDataConfig
	{
		::MoleMole::HollowChessPieceSizeType SizeType; // 0x10
		::System::Byte _padding0[0x4];
		::MoleMole::Config::ConfigHollowChessboard_TVModelData ModelData; // 0x18
	};
}
