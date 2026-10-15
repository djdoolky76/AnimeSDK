#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillExecutionStart; }

#define RPG_GAMECORE_SKILLEXECUTIONSTART_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEF5D0)
#define RPG_GAMECORE_SKILLEXECUTIONSTART_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEF5E0)
#define RPG_GAMECORE_SKILLEXECUTIONSTART_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEF510)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillExecutionStart_TypeDefinitionIndex = 22719;

	class SkillExecutionStart : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXECUTIONSTART_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillExecutionStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillExecutionStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXECUTIONSTART_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillExecutionStart* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillExecutionStart*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLEXECUTIONSTART_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
