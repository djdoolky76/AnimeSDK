#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSkillPauseTarget; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLPAUSETARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA645E0)
#define RPG_GAMECORE_RTSKILLPAUSETARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA645F0)
#define RPG_GAMECORE_RTSKILLPAUSETARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA645A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillPauseTarget_TypeDefinitionIndex = 24220;

	class RtSkillPauseTarget : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean Pause; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPAUSETARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillPauseTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillPauseTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPAUSETARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillPauseTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillPauseTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLPAUSETARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
