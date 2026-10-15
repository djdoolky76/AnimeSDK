#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtSkillAbort; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_RTSKILLABORT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA634D0)
#define RPG_GAMECORE_RTSKILLABORT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA63510)
#define RPG_GAMECORE_RTSKILLABORT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA63470)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtSkillAbort_TypeDefinitionIndex = 24217;

	class RtSkillAbort : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* AbortTargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLABORT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillAbort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillAbort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLABORT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtSkillAbort* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtSkillAbort*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTSKILLABORT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
