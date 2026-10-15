#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdventureSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StartAdvSkillCombo; }

#define RPG_GAMECORE_STARTADVSKILLCOMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEDC90)
#define RPG_GAMECORE_STARTADVSKILLCOMBO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAEDCA0)
#define RPG_GAMECORE_STARTADVSKILLCOMBO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAEDC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartAdvSkillCombo_TypeDefinitionIndex = 20196;

	class StartAdvSkillCombo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::AdventureSkillType SkillInputType; // 0x18
		::System::UInt32 TriggerSkillIndex; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVSKILLCOMBO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartAdvSkillCombo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVSKILLCOMBO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::StartAdvSkillCombo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StartAdvSkillCombo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTADVSKILLCOMBO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
