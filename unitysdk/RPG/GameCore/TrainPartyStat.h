#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/TrainPartyStatType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyStat; }

#define RPG_GAMECORE_TRAINPARTYSTAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC07D60)
#define RPG_GAMECORE_TRAINPARTYSTAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC07C00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyStat_TypeDefinitionIndex = 10631;

	class TrainPartyStat : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::TrainPartyStatType StatType; // 0x10
		::System::Int32 UpdateValue; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyStat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyStat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYSTAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
