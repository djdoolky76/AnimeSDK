#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/ST_SelectStateBehaviorType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StateTreeSelectStateConfig; }

#define RPG_GAMECORE_STATETREESELECTSTATECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1F5C0)
#define RPG_GAMECORE_STATETREESELECTSTATECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB1F4C0)

namespace RPG::GameCore
{
	class StateTreeSelectStateConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::ST_SelectStateBehaviorType Behavior; // 0x10
		::System::UInt32 Weight; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESELECTSTATECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StateTreeSelectStateConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StateTreeSelectStateConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STATETREESELECTSTATECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
