#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InterruptSkillExecution; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75C6D0)
#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D75C6E0)
#define RPG_GAMECORE_INTERRUPTSKILLEXECUTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D75C6A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InterruptSkillExecution_TypeDefinitionIndex = 23132;

	class InterruptSkillExecution : public ::RPG::GameCore::TaskConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnSucceed; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnFailure; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InterruptSkillExecution* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InterruptSkillExecution*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InterruptSkillExecution* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InterruptSkillExecution*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INTERRUPTSKILLEXECUTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
