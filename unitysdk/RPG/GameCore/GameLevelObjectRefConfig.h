#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DynamicJsonConfig.h"
#include "unitysdk/RPG/GameCore/FloorInstanceType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GameLevelObjectRefConfig; }

#define RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D717130)
#define RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D717140)
#define RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D717100)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GameLevelObjectRefConfig_TypeDefinitionIndex = 17417;

	class GameLevelObjectRefConfig : public ::RPG::GameCore::DynamicJsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 InstanceID; // 0x14
		::RPG::GameCore::FloorInstanceType Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameLevelObjectRefConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameLevelObjectRefConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GameLevelObjectRefConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GameLevelObjectRefConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GAMELEVELOBJECTREFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
