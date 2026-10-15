#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/STTaskConfig.h"
#include "unitysdk/RPG/GameCore/StimulusPositionType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_Side_FireStimulus; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA83590)
#define RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA835A0)
#define RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA83560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_Side_FireStimulus_TypeDefinitionIndex = 20143;

	class ST_Side_FireStimulus : public ::RPG::GameCore::STTaskConfig
	{
	public:
		::System::String* StimulusName; // 0x18
		::RPG::GameCore::TargetEvaluator* InstigatorType; // 0x20
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x28
		::RPG::GameCore::StimulusPositionType PositionType; // 0x30
		::System::Single OverrideRange; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_FireStimulus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_FireStimulus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_Side_FireStimulus* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_Side_FireStimulus*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_SIDE_FIRESTIMULUS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
