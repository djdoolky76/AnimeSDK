#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarAssetPreloadStrategy.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarAssetPreloadConfig; }

#define RPG_GAMECORE_AVATARASSETPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40AEB0)
#define RPG_GAMECORE_AVATARASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D40AEC0)
#define RPG_GAMECORE_AVATARASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D40AE70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarAssetPreloadConfig_TypeDefinitionIndex = 16472;

	class AvatarAssetPreloadConfig : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::RPG::GameCore::AvatarAssetPreloadStrategy MazeSkill; // 0x18
		::RPG::GameCore::AvatarAssetPreloadStrategy BattleSkill; // 0x1A
		::RPG::GameCore::AvatarAssetPreloadStrategy BattleUltraSkill; // 0x1C
		::RPG::GameCore::AvatarAssetPreloadStrategy BattleSpecialSkill; // 0x1E
		::RPG::GameCore::AvatarAssetPreloadStrategy OtherAssets; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARASSETPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
