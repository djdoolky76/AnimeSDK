#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceSettingConfigItemBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }

#define RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8AE1F0)
#define RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8AE200)
#define RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8AE1C0)

namespace RPG::GameCore
{
	class MonsterAssetPreloadConfig : public ::RPG::GameCore::DeviceSettingConfigItemBase
	{
	public:
		::System::Boolean PreloadEffectPaths; // 0x18
		::System::Boolean PreloadOptionalEffectPaths; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::MonsterAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MonsterAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
