#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class OverrideSkillTargetInfo; }
namespace RPG::GameCore { class SkillTargetConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E9760)
#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E97A0)
#define RPG_GAMECORE_OVERRIDESKILLTARGETINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E9700)

namespace RPG::GameCore
{
	inline static constexpr unsigned int OverrideSkillTargetInfo_TypeDefinitionIndex = 22715;

	class OverrideSkillTargetInfo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* SkillTriggerKey; // 0x20
		::RPG::GameCore::SkillTargetConfig* TargetInfo; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSkillTargetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSkillTargetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::OverrideSkillTargetInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::OverrideSkillTargetInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_OVERRIDESKILLTARGETINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
