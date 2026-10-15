#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/SkillButtonAdditionalStatusType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetSkillButtonAdditionalStatus; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA93970)
#define RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA939B0)
#define RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA93910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetSkillButtonAdditionalStatus_TypeDefinitionIndex = 23655;

	class SetSkillButtonAdditionalStatus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::RPG::GameCore::SkillButtonAdditionalStatusType ButtonType; // 0x24
		::System::Boolean IsActive; // 0x28
		::System::Byte _padding0[0x7];
		::System::String* PrefabPath; // 0x30
		::System::String* AnimStateName; // 0x38
		::System::Single TransitionDuration; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillButtonAdditionalStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillButtonAdditionalStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetSkillButtonAdditionalStatus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetSkillButtonAdditionalStatus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETSKILLBUTTONADDITIONALSTATUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
