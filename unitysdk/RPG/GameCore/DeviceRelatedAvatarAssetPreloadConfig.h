#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarAssetPreloadConfig; }
namespace RPG::GameCore { class DeviceRelatedAvatarAssetPreloadConfig; }

#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5FE7C0)
#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5FE7D0)
#define RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5FE770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedAvatarAssetPreloadConfig_TypeDefinitionIndex = 16474;

	class DeviceRelatedAvatarAssetPreloadConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::AvatarAssetPreloadConfig* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedAvatarAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDAVATARASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
