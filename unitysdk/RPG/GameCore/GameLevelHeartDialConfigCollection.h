#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameLevelHeartDialConfigCollection; }
namespace RPG::GameCore { class GameLevelHeartDialNPCConfig; }

#define RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E8F80)
#define RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E8EC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelHeartDialConfigCollection_TypeDefinitionIndex = 17421;

	class GameLevelHeartDialConfigCollection : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::GameLevelHeartDialNPCConfig*>* NPCConfigList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameLevelHeartDialConfigCollection* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameLevelHeartDialConfigCollection*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELHEARTDIALCONFIGCOLLECTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
