#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarLineupKeyLevelConfig; }
namespace RPG::GameCore { class AvatarLineupPresetConfig; }

#define RPG_GAMECORE_AVATARLINEUPPRESETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3EAAB0)
#define RPG_GAMECORE_AVATARLINEUPPRESETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3EA920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarLineupPresetConfig_TypeDefinitionIndex = 18133;

	class AvatarLineupPresetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 AvatarId; // 0x10
		::System::UInt32 EnhancedId; // 0x14
		::Il2CppArray<::RPG::GameCore::AvatarLineupKeyLevelConfig*>* KeyLevelConfigList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPPRESETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarLineupPresetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarLineupPresetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARLINEUPPRESETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
