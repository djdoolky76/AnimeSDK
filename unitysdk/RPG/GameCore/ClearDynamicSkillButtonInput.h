#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ClearDynamicSkillButtonInput; }

#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5B5D00)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5B5D10)
#define RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5B5CD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ClearDynamicSkillButtonInput_TypeDefinitionIndex = 22847;

	class ClearDynamicSkillButtonInput : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::ControlSkillType>* Slots; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ClearDynamicSkillButtonInput* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ClearDynamicSkillButtonInput*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CLEARDYNAMICSKILLBUTTONINPUT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
