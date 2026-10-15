#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HideMonsterSkillInViewMode; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73B8C0)
#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D73B910)
#define RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D73B850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int HideMonsterSkillInViewMode_TypeDefinitionIndex = 23191;

	class HideMonsterSkillInViewMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsHide; // 0x20
		::System::Byte _padding0[0x3];
		::System::UInt32 PhaseID; // 0x24
		::Il2CppArray<::System::UInt32>* SkillIDs; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideMonsterSkillInViewMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideMonsterSkillInViewMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::HideMonsterSkillInViewMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HideMonsterSkillInViewMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIDEMONSTERSKILLINVIEWMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
