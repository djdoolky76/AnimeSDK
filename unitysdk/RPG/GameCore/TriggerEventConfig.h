#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimTriggerTargetType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameEvent; }
namespace RPG::GameCore { class TriggerEventConfig; }

#define RPG_GAMECORE_TRIGGEREVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC25110)
#define RPG_GAMECORE_TRIGGEREVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC24F80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEventConfig_TypeDefinitionIndex = 18636;

	class TriggerEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimTriggerTargetType TargetType; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* EnterEvents; // 0x18
		::Il2CppArray<::RPG::GameCore::LittleGameEvent*>* ExitEvents; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
