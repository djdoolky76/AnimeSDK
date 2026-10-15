#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterAdventureSomatoType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdventureAIControllerConfig; }
namespace RPG::GameCore { class SummonUnitMoveConfig; }

#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB3E990)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB3CB40)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_ADVENTURESOMATOTYPE_OFFSET UNITYSDK_OFFSET(0x1DB3E9B0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNBACKTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1DB3E9F0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1DB3E9E0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNBACKTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1DB3E9D0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNSPEED_OFFSET UNITYSDK_OFFSET(0x1DB3E9C0)
#define RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_USENAVJUMPLAYER_OFFSET UNITYSDK_OFFSET(0x1DB3EA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SummonUnitMoveConfig_TypeDefinitionIndex = 17594;

	class SummonUnitMoveConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::CharacterAdventureSomatoType AdventureSomatoType; // 0x10
		::System::Boolean EnablePlatformMove; // 0x14
		::System::Byte _padding0[0x3];
		::System::Single NavTurnSpeed; // 0x18
		::System::Single NavTurnBackTurnSpeed; // 0x1C
		::System::Single NavMovingSteerTurnSpeed; // 0x20
		::System::Single NavMovingSteerTurnBackTurnSpeed; // 0x24
		::RPG::GameCore::AdventureAIControllerConfig* AdvAIControllerConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SummonUnitMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SummonUnitMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::RPG::GameCore::CharacterAdventureSomatoType RPG_GameCore_IAdventureCharacterMoveConfig_get_AdventureSomatoType()
		{
			return ((::RPG::GameCore::CharacterAdventureSomatoType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_ADVENTURESOMATOTYPE_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavTurnBackTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVTURNBACKTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavMovingSteerTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNSPEED_OFFSET))(this);
		}

		::System::Single RPG_GameCore_IAdventureCharacterMoveConfig_get_NavMovingSteerTurnBackTurnSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_NAVMOVINGSTEERTURNBACKTURNSPEED_OFFSET))(this);
		}

		::System::Boolean RPG_GameCore_IAdventureCharacterMoveConfig_get_UseNavJumpLayer()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SUMMONUNITMOVECONFIG_RPG_GAMECORE_IADVENTURECHARACTERMOVECONFIG_GET_USENAVJUMPLAYER_OFFSET))(this);
		}

	};
}
