#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EnableDynamicSkillButtonInput; }

#define RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D63E7A0)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D63E7B0)
#define RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D63E770)

namespace RPG::GameCore
{
	inline static constexpr unsigned int EnableDynamicSkillButtonInput_TypeDefinitionIndex = 22842;

	class EnableDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::EnableDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EnableDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENABLEDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
