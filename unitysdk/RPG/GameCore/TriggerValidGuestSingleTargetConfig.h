#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TriggerValidGuestSingleTargetConfig; }

#define RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC32850)
#define RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC32680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerValidGuestSingleTargetConfig_TypeDefinitionIndex = 23892;

	class TriggerValidGuestSingleTargetConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* GroupID; // 0x10
		::RPG::GameCore::DynamicFloat* InstancecID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerValidGuestSingleTargetConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerValidGuestSingleTargetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERVALIDGUESTSINGLETARGETCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
