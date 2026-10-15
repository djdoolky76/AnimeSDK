#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/HipplenMiniGameType.h"
namespace System { class String; }

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenGameConfig_TypeDefinitionIndex = 75535;

	struct alignas(8) ActivityHipplenGameConfig
	{
		::RPG::GameCore::HipplenMiniGameType GameType; // 0x10
		::System::Byte _padding0[0x4];
		::System::String* GameJsonPath; // 0x18
	};
}
