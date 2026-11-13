#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AITaskTargetTypeSelector; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_AITASKTARGETTYPESELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4EB1F0)
#define RPG_GAMECORE_AITASKTARGETTYPESELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E4EB200)
#define RPG_GAMECORE_AITASKTARGETTYPESELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E4EBA00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITaskTargetTypeSelector_TypeDefinitionIndex = 15751;

	class AITaskTargetTypeSelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x10
		::System::Boolean InverseResultFlag; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITASKTARGETTYPESELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AITaskTargetTypeSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AITaskTargetTypeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITASKTARGETTYPESELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AITaskTargetTypeSelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AITaskTargetTypeSelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AITASKTARGETTYPESELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
