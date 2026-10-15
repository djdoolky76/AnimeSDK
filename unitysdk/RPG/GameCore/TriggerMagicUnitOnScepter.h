#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TriggerMagicUnitOnScepter; }

#define RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC27030)
#define RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC27040)
#define RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC27000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerMagicUnitOnScepter_TypeDefinitionIndex = 23101;

	class TriggerMagicUnitOnScepter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean ForPassive; // 0x18
		::System::Boolean DamageFinish; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMagicUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMagicUnitOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerMagicUnitOnScepter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerMagicUnitOnScepter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMAGICUNITONSCEPTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
