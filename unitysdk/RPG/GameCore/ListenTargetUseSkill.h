#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ListenTargetUseSkill; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TaskConfig; }

#define RPG_GAMECORE_LISTENTARGETUSESKILL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7A86F0)
#define RPG_GAMECORE_LISTENTARGETUSESKILL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7A8700)
#define RPG_GAMECORE_LISTENTARGETUSESKILL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7A86C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ListenTargetUseSkill_TypeDefinitionIndex = 21745;

	class ListenTargetUseSkill : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Owner; // 0x18
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::Il2CppArray<::RPG::GameCore::AdventureSkillType>* ListenSkillType; // 0x28
		::System::Single Distance; // 0x30
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::TaskConfig*>* ListenCallback; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ListenTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ListenTargetUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ListenTargetUseSkill* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ListenTargetUseSkill*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LISTENTARGETUSESKILL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
