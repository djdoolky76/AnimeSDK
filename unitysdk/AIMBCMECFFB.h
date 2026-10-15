#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/VersusBarQuestStatus.h"

inline static constexpr unsigned int AIMBCMECFFB_TypeDefinitionIndex = 55587;

	struct alignas(4) AIMBCMECFFB
	{
		::RPG::GameCore::VersusBarQuestStatus FFEPLIHOFLA; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID CFILBELOBAL; // 0x18
	};
