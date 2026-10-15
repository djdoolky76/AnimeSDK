#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FiveDim/FiveDimExitType.h"
#include "unitysdk/RPG/GameCore/FiveDimCustomScreenTransferStyle.h"

inline static constexpr unsigned int GBNEGNHCHAB_TypeDefinitionIndex = 43558;

	struct alignas(4) GBNEGNHCHAB
	{
		::System::Boolean KBFGMAOBANF; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 DBPLPPBABDP; // 0x14
		::RPG::Client::LittleGame::FiveDim::FiveDimExitType BIIHMECEPPO; // 0x18
		::System::Boolean HBMDCFNCHMJ; // 0x1C
		::System::Boolean OOMOFODFCBH; // 0x1D
		::System::Boolean FIIGINAGCKL; // 0x1E
		::System::Byte _padding1[0x1];
		::RPG::GameCore::FiveDimCustomScreenTransferStyle JJIDJALHONN; // 0x20
	};
