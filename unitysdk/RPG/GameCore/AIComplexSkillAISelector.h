#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIComplexSkillAISelector; }
namespace RPG::GameCore { class ComplexSkillAIConfig; }
namespace System { class String; }

#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D30A3C0)
#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D30A3D0)
#define RPG_GAMECORE_AICOMPLEXSKILLAISELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D30A390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AIComplexSkillAISelector_TypeDefinitionIndex = 15603;

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
