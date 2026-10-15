#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ComplexSkillAISource.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RtComplexSkillAISource; }

#define RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA59920)
#define RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA598C0)
#define RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA59870)

namespace RPG::GameCore
{
	class RtComplexSkillAISource : public ::RPG::GameCore::ComplexSkillAISource
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtComplexSkillAISource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtComplexSkillAISource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RtComplexSkillAISource* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RtComplexSkillAISource*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RTCOMPLEXSKILLAISOURCE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
