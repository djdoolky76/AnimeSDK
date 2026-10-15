#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StimulusPositionType.h"
#include "unitysdk/RPG/GameCore/StimulusTargetType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFireStimulus; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ADVFIRESTIMULUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39EF30)
#define RPG_GAMECORE_ADVFIRESTIMULUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39EF40)
#define RPG_GAMECORE_ADVFIRESTIMULUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39EF00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFireStimulus_TypeDefinitionIndex = 20558;

	class AdvFireStimulus : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* StimulusName; // 0x18
		::RPG::GameCore::TargetEvaluator* InstigatorType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::StimulusTargetType AssignTarget; // 0x30
		::RPG::GameCore::StimulusPositionType PositionType; // 0x34
		::System::Single OverrideRange; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFIRESTIMULUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFireStimulus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFireStimulus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFIRESTIMULUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFireStimulus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFireStimulus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFIRESTIMULUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
