#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetPropInteractTriggerState; }
namespace System { class String; }

#define RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA92120)
#define RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA92130)
#define RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA920F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetPropInteractTriggerState_TypeDefinitionIndex = 20384;

	class SetPropInteractTriggerState : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Boolean TargetIsOwner; // 0x20
		::System::Byte _padding0[0x7];
		::System::String* UniqueName; // 0x28
		::System::String* ColliderRelativePath; // 0x30
		::System::Boolean DisableAfterTriggered; // 0x38
		::System::Boolean ForceInteractInDanger; // 0x39
		::System::Boolean ConsiderAngleLimit; // 0x3A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropInteractTriggerState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropInteractTriggerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetPropInteractTriggerState* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetPropInteractTriggerState*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETPROPINTERACTTRIGGERSTATE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
