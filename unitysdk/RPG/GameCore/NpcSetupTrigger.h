#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EntityType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NpcSetupTrigger; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }
namespace System { class String; }

#define RPG_GAMECORE_NPCSETUPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B0190)
#define RPG_GAMECORE_NPCSETUPTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8B01C0)
#define RPG_GAMECORE_NPCSETUPTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8B0140)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcSetupTrigger_TypeDefinitionIndex = 21973;

	class NpcSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* TriggerID; // 0x20
		::System::Boolean DisableAfterTriggered; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single Range; // 0x2C
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerEnter; // 0x30
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnTriggerExit; // 0x38
		::Il2CppArray<::RPG::GameCore::EntityType>* TargetTypes; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSETUPTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSETUPTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::NpcSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NpcSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCSETUPTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
