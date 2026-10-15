#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BattleConditionConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BATTLECONDITIONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4284E0)
#define RPG_GAMECORE_BATTLECONDITIONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D427D80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleConditionConfigRow_TypeDefinitionIndex = 12844;

	class BattleConditionConfigRow : public ::System::Object
	{
	public:
		::System::String* AbilityName; // 0x10
		::System::Boolean WinOrLose; // 0x18
		::System::Byte _padding0[0x3];
		::System::UInt32 IsShowProgress; // 0x1C
		::System::UInt32 ID; // 0x20
		::System::UInt32 TargetParam; // 0x24
		::RPG::Client::TextID ConditionDes; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BattleConditionConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BattleConditionConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BATTLECONDITIONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
