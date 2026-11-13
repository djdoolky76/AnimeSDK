#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ILCombatAdvantageGroupConfigRow; }

#define RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE82360)
#define RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE82110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILCombatAdvantageGroupConfigRow_TypeDefinitionIndex = 13960;

	class ILCombatAdvantageGroupConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 CombatAdvantageGroup; // 0x10
		::System::Byte _padding0[0x4];
		::System::Int64 CombatAdvantage; // 0x18
		::RPG::GameCore::FixPoint DamageTakenRatio; // 0x20
		::RPG::GameCore::FixPoint DamageRatio; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ILCombatAdvantageGroupConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILCOMBATADVANTAGEGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
