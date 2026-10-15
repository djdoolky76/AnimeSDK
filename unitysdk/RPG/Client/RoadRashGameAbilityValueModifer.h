#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ERoadRashGameAbilityValueModifyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }

#define RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D32A7D0)
#define RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D32A5D0)

namespace RPG::Client
{
	class RoadRashGameAbilityValueModifer : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FixPoint Priority; // 0x10
		::RPG::GameCore::FixPoint Value; // 0x18
		::RPG::Client::ERoadRashGameAbilityValueModifyType Type; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::RoadRashGameAbilityValueModifer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::RoadRashGameAbilityValueModifer*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITYVALUEMODIFER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
