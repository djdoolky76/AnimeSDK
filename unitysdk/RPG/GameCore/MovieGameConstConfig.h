#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityMovieStartBuffConfig; }
namespace RPG::GameCore { class MovieGameConstConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MOVIEGAMECONSTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D891260)
#define RPG_GAMECORE_MOVIEGAMECONSTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D890F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MovieGameConstConfig_TypeDefinitionIndex = 17539;

	class MovieGameConstConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::String*>* MovieGameLevelToConfig; // 0x10
		::System::UInt32 FinishGameWithoutMiss_AchievementID; // 0x18
		::System::UInt32 FlipPause_AchievementID; // 0x1C
		::System::UInt32 FeverOneMore_AchievementID; // 0x20
		::System::UInt32 NicePassContinuous_AchievementID; // 0x24
		::System::UInt32 DestoryAllEnemy_AchievementID; // 0x28
		::System::UInt32 TakeAllPropWithLevel_AchievementID; // 0x2C
		::System::UInt32 CounterBullet_AchievementID; // 0x30
		::System::UInt32 NoCounterBullet_AchievementID; // 0x34
		::RPG::GameCore::ActivityMovieStartBuffConfig* GameStartBuffConfig; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVIEGAMECONSTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MovieGameConstConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MovieGameConstConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MOVIEGAMECONSTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
