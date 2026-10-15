#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/FiveDimScreenTransferType.h"
namespace System { class Action; }

	struct alignas(8) PALBAPMODCK
	{
		::System::Boolean KBFGMAOBANF; // 0x10
		::System::Boolean OOKBIOJGHAM; // 0x11
		::System::Boolean CDLNLEFLDJF; // 0x12
		::System::Byte _padding0[0x1];
		::RPG::Client::FiveDimScreenTransferType EBGCHEGLCOK; // 0x14
		::System::Action* NKNNIDKJKOJ; // 0x18
		::RPG::Client::LittleGame::FiveDim::FiveDimExitType BIIHMECEPPO; // 0x20
		::System::UInt32 GFJHOJHILEK; // 0x24
	};
