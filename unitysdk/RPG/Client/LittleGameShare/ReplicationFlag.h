#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare
{
	inline static constexpr unsigned int ReplicationFlag_TypeDefinitionIndex = 36875;

	enum class ReplicationFlag : ::System::Byte
	{
		None = 0,
		Dirty = 1,
		Initial = 2,
		ToOwner = 4,
		ToOther = 8,
		SnapshotToOwner = 7,
		SnapshotToOther = 11,
		DeltaToOwner = 5,
		DeltaToOther = 9,
	};
}
