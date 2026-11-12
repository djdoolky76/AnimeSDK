#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimCustomScreenTransferReason_TypeDefinitionIndex = 44326;

	enum class FiveDimCustomScreenTransferReason : ::System::UInt32
	{
		None = 0,
		Default = 1,
		TeleportOrLeave = 2,
		PortalTeleport = 4,
	};
}
