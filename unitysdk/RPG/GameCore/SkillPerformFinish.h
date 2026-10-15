#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SkillPerformFinish; }

#define RPG_GAMECORE_SKILLPERFORMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC2410)
#define RPG_GAMECORE_SKILLPERFORMFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAC2420)
#define RPG_GAMECORE_SKILLPERFORMFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAC23E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillPerformFinish_TypeDefinitionIndex = 22623;

	class SkillPerformFinish : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean SkipAttackSettlement; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPERFORMFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillPerformFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillPerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPERFORMFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::SkillPerformFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SkillPerformFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SKILLPERFORMFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
