#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TeamTowersBossBrickEntryConfig; }

#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB4E800)
#define RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4E680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersBossBrickEntryConfig_TypeDefinitionIndex = 18957;

	class TeamTowersBossBrickEntryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 BrickIndex; // 0x10
		::System::Single PositionX; // 0x14
		::System::Single PositionY; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TeamTowersBossBrickEntryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TeamTowersBossBrickEntryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSBOSSBRICKENTRYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
