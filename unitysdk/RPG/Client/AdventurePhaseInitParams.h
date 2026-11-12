#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/AdventureBattleResult.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
class DDNEPPOHKJN;
namespace EnviromentSystem { class EnviromentProfile; }
namespace RPG::Client { class Map; }
namespace System { class String; }

#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET UNITYSDK_OFFSET(0xCF7C160)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0xCF7C140)
#define RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET UNITYSDK_OFFSET(0xCF7C1A0)

namespace RPG::Client
{
	inline static constexpr unsigned int AdventurePhaseInitParams_TypeDefinitionIndex = 61415;

	class AdventurePhaseInitParams : public ::System::Object
	{
	public:
		::RPG::Client::Map* Map; // 0x10
		::System::String* EnterFrom; // 0x18
		::EnviromentSystem::EnviromentProfile* DefaultEnvProfile; // 0x20
		::DDNEPPOHKJN* StageCache; // 0x28
		::RPG::Client::AdventureBattleResult BattleResult; // 0x30
		::System::Boolean IsFromSwitchMap; // 0x34
		::System::Boolean IsFromBattle; // 0x35
		::System::Boolean LoadMapStageOnly; // 0x36
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CTOR_OFFSET))(this);
		}

		::System::Void ClearPlayerStartPosition()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS_CLEARPLAYERSTARTPOSITION_OFFSET))(this);
		}

		::System::Void SetupEnterMapTriggerStory(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + RPG_CLIENT_ADVENTUREPHASEINITPARAMS_SETUPENTERMAPTRIGGERSTORY_OFFSET))(this, a1, a2);
		}

	};
}
