#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaitSkillPerformAbilityFinish; }

#define RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA2170)
#define RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DCA2180)
#define RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA20B0)

namespace RPG::GameCore
{
	class WaitSkillPerformAbilityFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSkillPerformAbilityFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSkillPerformAbilityFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaitSkillPerformAbilityFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaitSkillPerformAbilityFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WAITSKILLPERFORMABILITYFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
