#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ControlSkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SetControlSkillMapping; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_SETCONTROLSKILLMAPPING_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA6FEF0)
#define RPG_GAMECORE_SETCONTROLSKILLMAPPING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA6FF00)
#define RPG_GAMECORE_SETCONTROLSKILLMAPPING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA6FEC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SetControlSkillMapping_TypeDefinitionIndex = 22711;

	class SetControlSkillMapping : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::ControlSkillType ControlSkillType; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* SkillTriggerKey; // 0x28
		::System::String* AIUltraSkillPriority; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetControlSkillMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetControlSkillMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SetControlSkillMapping* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SetControlSkillMapping*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SETCONTROLSKILLMAPPING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
