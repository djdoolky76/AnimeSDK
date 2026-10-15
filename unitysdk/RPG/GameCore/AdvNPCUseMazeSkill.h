#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvNPCUseMazeSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_ADVNPCUSEMAZESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3A5790)
#define RPG_GAMECORE_ADVNPCUSEMAZESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3A57A0)
#define RPG_GAMECORE_ADVNPCUSEMAZESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3A5750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvNPCUseMazeSkill_TypeDefinitionIndex = 19984;

	class AdvNPCUseMazeSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* OnUseFail; // 0x20
		::System::Single SkillCD; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCUSEMAZESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCUseMazeSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCUseMazeSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCUSEMAZESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvNPCUseMazeSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvNPCUseMazeSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVNPCUSEMAZESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
