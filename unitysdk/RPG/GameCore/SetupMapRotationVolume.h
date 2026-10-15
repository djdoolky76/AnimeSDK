#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationVolumeEffectTransitPoint; }
namespace RPG::GameCore { class MapRotationVolumeSlotConfigBase; }
namespace RPG::GameCore { class SetupMapRotationVolume; }

#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA9FFC0)
#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA9FFD0)
#define RPG_GAMECORE_SETUPMAPROTATIONVOLUME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA9FF90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetupMapRotationVolume_TypeDefinitionIndex = 22306;

	class SetupMapRotationVolume : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationVolumeEffectTransitPoint*>* EffectTransitPointConfig; // 0x18
		::Il2CppArray<::RPG::GameCore::MapRotationVolumeSlotConfigBase*>* SlotConfigs; // 0x20
		::System::Boolean CanMove; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupMapRotationVolume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupMapRotationVolume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetupMapRotationVolume* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetupMapRotationVolume*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETUPMAPROTATIONVOLUME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
