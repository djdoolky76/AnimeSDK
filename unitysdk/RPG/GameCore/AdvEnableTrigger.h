#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvEnableTriggerOpType.h"
#include "unitysdk/RPG/GameCore/AdvEnableTriggerTriggerType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvEnableTrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVENABLETRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39CF90)
#define RPG_GAMECORE_ADVENABLETRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39CFA0)
#define RPG_GAMECORE_ADVENABLETRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39CF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvEnableTrigger_TypeDefinitionIndex = 20538;

	class AdvEnableTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsEnable; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::AdvEnableTriggerOpType OpType; // 0x24
		::System::String* TriggerName; // 0x28
		::RPG::GameCore::AdvEnableTriggerTriggerType TriggerType; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLETRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLETRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvEnableTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvEnableTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENABLETRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
