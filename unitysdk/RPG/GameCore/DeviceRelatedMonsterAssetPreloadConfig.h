#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DeviceRelatedConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DeviceRelatedMonsterAssetPreloadConfig; }
namespace RPG::GameCore { class MonsterAssetPreloadConfig; }

#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5D1E60)
#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5D1E70)
#define RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5D2180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DeviceRelatedMonsterAssetPreloadConfig_TypeDefinitionIndex = 16475;

	class DeviceRelatedMonsterAssetPreloadConfig : public ::RPG::GameCore::DeviceRelatedConfigBase
	{
	public:
		::RPG::GameCore::MonsterAssetPreloadConfig* Value; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DeviceRelatedMonsterAssetPreloadConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEVICERELATEDMONSTERASSETPRELOADCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
