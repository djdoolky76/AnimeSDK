#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClockParkStoryCharacter; }
namespace RPG::GameCore { class ClockParkStoryConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CLOCKPARKSTORYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D596D80)
#define RPG_GAMECORE_CLOCKPARKSTORYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D596B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClockParkStoryConfig_TypeDefinitionIndex = 16031;

	class ClockParkStoryConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* LevelGraphConfigPath; // 0x10
		::System::String* BackgroundPrefabPath; // 0x18
		::System::String* BackgroundFrontPrefabPath; // 0x20
		::System::Boolean BackgroundFrontVisible; // 0x28
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ClockParkStoryCharacter*>* CharacterConfigs; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClockParkStoryConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClockParkStoryConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLOCKPARKSTORYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
