#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNpcMonsterSetupTrigger; }
namespace RPG::GameCore { class PropButtonConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37A2C0)
#define RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37A2D0)
#define RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37A280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNpcMonsterSetupTrigger_TypeDefinitionIndex = 22217;

	class AdvNpcMonsterSetupTrigger : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single TriggerRadius; // 0x20
		::RPG::MVector3 TriggerOffset; // 0x24
		::Il2CppArray<::System::String*>* ButtonsByName; // 0x30
		::Il2CppArray<::RPG::GameCore::PropButtonConfig*>* ButtonConfigs; // 0x38
		::System::Boolean Enable; // 0x40
		::System::Boolean ForceInteractInDanger; // 0x41
		::System::Boolean ConsiderAngleLimit; // 0x42
		::System::Byte _padding0[0x1];
		::System::Single InteractAngleRange; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcMonsterSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcMonsterSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNpcMonsterSetupTrigger* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNpcMonsterSetupTrigger*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCMONSTERSETUPTRIGGER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
