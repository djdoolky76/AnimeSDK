#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillInputType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class PredicateConfig; }
namespace RPG::GameCore { class WaitDynamicSkillButtonInput; }

#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC96770)
#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC967E0)
#define RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC966E0)

namespace RPG::GameCore
{
	class WaitDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18
		::RPG::GameCore::SkillInputType InputType; // 0x20
		::System::Byte _padding0[0x4];
		::RPG::GameCore::PredicateConfig* Predicate; // 0x28
		::RPG::GameCore::DynamicFloat* MaxWaitTime; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
