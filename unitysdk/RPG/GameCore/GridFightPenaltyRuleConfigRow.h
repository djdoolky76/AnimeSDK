#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPenaltyRuleConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7392B0)
#define RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D738F20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPenaltyRuleConfigRow_TypeDefinitionIndex = 13617;

	class GridFightPenaltyRuleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* HPProgressValueList; // 0x10
		::Il2CppArray<::System::UInt32>* ProgressValueList; // 0x18
		::RPG::GameCore::FixPoint TotalTurn; // 0x20
		::System::UInt32 ThresholdPassBasicPlayerHPPenalty; // 0x28
		::System::UInt32 ThresholdPosition; // 0x2C
		::System::UInt32 ThresholdFailPlayerHPPenalty; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint AvatarReviveDelayLose; // 0x38
		::System::UInt32 ProgressPenaltyCoefficient; // 0x40
		::System::UInt32 ID; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPenaltyRuleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPenaltyRuleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPENALTYRULECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
