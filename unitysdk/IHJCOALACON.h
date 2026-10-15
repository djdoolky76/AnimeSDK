#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimEnterType.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/Client/FiveDimScreenTransferType.h"
namespace System { class Action; }

inline static constexpr unsigned int IHJCOALACON_TypeDefinitionIndex = 60545;

	struct alignas(8) IHJCOALACON
	{
		::System::Boolean KBFGMAOBANF; // 0x10
		::System::Boolean FIIGINAGCKL; // 0x11
		::System::Boolean OOKBIOJGHAM; // 0x12
		::System::Boolean AKKAOBCMIPF; // 0x13
		::System::Boolean CDLNLEFLDJF; // 0x14
		::System::Byte _padding0[0x3];
		::RPG::Client::FiveDimScreenTransferType EBGCHEGLCOK; // 0x18
		::System::Boolean OOMOFODFCBH; // 0x1C
		::System::Byte _padding1[0x3];
		::System::Action* CINOHIMAPDC; // 0x20
		::RPG::Client::LittleGame::FiveDim::FiveDimEnterType EEJAOGHGIOJ; // 0x28
		::RPG::Client::LittleGame::FiveDim::FiveDimExitType BIIHMECEPPO; // 0x2C
		::System::UInt32 GFJHOJHILEK; // 0x30
	};
