#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIComplexSkillAISelector; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D337E90)
#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D337EA0)
#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D337E60)

namespace RPG::GameCore
{
	class AIComplexSkillAISelector : public ::RPG::GameCore::AISelector
	{
	public:
		::System::String* UseSourceInSkillConfig; // 0x10
		::RPG::GameCore::ComplexSkillAIConfig* Source; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIComplexSkillAISelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIComplexSkillAISelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIComplexSkillAISelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIComplexSkillAISelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
