#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DiceCombatTarget.h"
#include "unitysdk/RPG/GameCore/DiceCombatTaskConfig.h"
#include "unitysdk/RPG/GameCore/IceEffectMode.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DiceCombatDiceSelectorConfig; }
namespace RPG::GameCore { class DiceCombatTaskConfig_TriggerIceEffect; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5E6660)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5E6670)
#define RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5E6610)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTaskConfig_TriggerIceEffect_TypeDefinitionIndex = 16095;

	class DiceCombatTaskConfig_TriggerIceEffect : public ::RPG::GameCore::DiceCombatTaskConfig
	{
	public:
		::RPG::GameCore::DiceCombatTarget Target; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DiceCombatDiceSelectorConfig* Selector; // 0x18
		::RPG::GameCore::IceEffectMode Mode; // 0x20
		::System::Byte _padding1[0x4];
		::RPG::GameCore::DynamicFloat* ContentID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DiceCombatTaskConfig_TriggerIceEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DICECOMBATTASKCONFIG_TRIGGERICEEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
