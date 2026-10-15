#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ParallelAbility; }
namespace RPG::GameCore { class TriggerParallelAbility; }

#define RPG_GAMECORE_TRIGGERPARALLELABILITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC56D10)
#define RPG_GAMECORE_TRIGGERPARALLELABILITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC56D20)
#define RPG_GAMECORE_TRIGGERPARALLELABILITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC56CE0)

namespace RPG::GameCore
{
	class TriggerParallelAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ParallelAbility*>* ParallelAbilityList; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerParallelAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerParallelAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerParallelAbility* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerParallelAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERPARALLELABILITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
