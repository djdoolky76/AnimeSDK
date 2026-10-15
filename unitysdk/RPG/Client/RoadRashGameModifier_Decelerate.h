#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameModifier_Decelerate; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D302490)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3024B0)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D302450)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_Decelerate_TypeDefinitionIndex = 10311;

	class RoadRashGameModifier_Decelerate : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint Duration; // 0x18
		::RPG::GameCore::FixPoint MaxSpeedMultiplier; // 0x20
		::RPG::GameCore::FixPoint Priority; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_Decelerate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_Decelerate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameModifier_Decelerate* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameModifier_Decelerate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_DECELERATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
