#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/PerceiveValueTriggerType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PerceiveValueTriggerConfig; }

#define RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C7AB0)
#define RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8C7950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PerceiveValueTriggerConfig_TypeDefinitionIndex = 22183;

	class PerceiveValueTriggerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::PerceiveValueTriggerType TriggerType; // 0x10
		::System::Single Value; // 0x14
		::RPG::GameCore::DynamicString* TriggerString; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PerceiveValueTriggerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PerceiveValueTriggerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PERCEIVEVALUETRIGGERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
