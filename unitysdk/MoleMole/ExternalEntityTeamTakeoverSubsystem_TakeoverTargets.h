#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFAHKKFPHHM.h"
#include "unitysdk/System/ValueType.h"

class CBDDODKFCIJ;
class HJGOAJHNEGC;
namespace MoleMole { class InLevelAvatarDataItem; }
namespace MoleMole::Battle { class Entity; }

namespace MoleMole
{
	inline static constexpr unsigned int ExternalEntityTeamTakeoverSubsystem_TakeoverTargets_TypeDefinitionIndex = 89139;

	struct alignas(8) ExternalEntityTeamTakeoverSubsystem_TakeoverTargets
	{
		::CBDDODKFCIJ* Context; // 0x10
		::MoleMole::Battle::Entity* TargetEntity; // 0x18
		::HJGOAJHNEGC* FighterData; // 0x20
		::MoleMole::InLevelAvatarDataItem* InLevelAvatarData; // 0x28
		::HFAHKKFPHHM TakeoverType; // 0x30
	};
}
