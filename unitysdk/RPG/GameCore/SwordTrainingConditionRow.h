#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SwordTrainingConditionType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingConditionRow; }

#define RPG_GAMECORE_SWORDTRAININGCONDITIONROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB1B8C0)
#define RPG_GAMECORE_SWORDTRAININGCONDITIONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB1B730)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingConditionRow_TypeDefinitionIndex = 12460;

	class SwordTrainingConditionRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 ConditionID; // 0x18
		::RPG::GameCore::SwordTrainingConditionType CheckType; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCONDITIONROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingConditionRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingConditionRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGCONDITIONROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
