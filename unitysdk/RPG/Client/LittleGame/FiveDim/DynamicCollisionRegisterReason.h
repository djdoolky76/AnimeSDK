#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int DynamicCollisionRegisterReason_TypeDefinitionIndex = 43266;

	enum class DynamicCollisionRegisterReason : ::System::Byte
	{
		None = 0,
		PlayerContact = 1,
		EventAction = 2,
		CollideSystemGuard = 4,
	};
}
