#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class SetUltraSkillInnerPieProgress; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC9040)
#define RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC9080)
#define RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC8FE0)

namespace RPG::GameCore
{
	class SetUltraSkillInnerPieProgress : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::DynamicFloat* CurrentCount; // 0x20
		::RPG::GameCore::DynamicFloat* MaxCount; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUltraSkillInnerPieProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUltraSkillInnerPieProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetUltraSkillInnerPieProgress* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetUltraSkillInnerPieProgress*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETULTRASKILLINNERPIEPROGRESS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
