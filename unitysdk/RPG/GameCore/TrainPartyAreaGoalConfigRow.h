#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyAreaGoalConfigRow; }

#define RPG_GAMECORE_TRAINPARTYAREAGOALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC2DC60)
#define RPG_GAMECORE_TRAINPARTYAREAGOALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC2DAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyAreaGoalConfigRow_TypeDefinitionIndex = 15327;

	class TrainPartyAreaGoalConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* StepGroupList; // 0x10
		::System::UInt32 ID; // 0x18
		::System::UInt32 AreaID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYAREAGOALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyAreaGoalConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyAreaGoalConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYAREAGOALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
