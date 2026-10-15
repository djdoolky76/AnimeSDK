#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DifficultyAdjustmentStageRow; }

#define RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6166D0)
#define RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D6165C0)

namespace RPG::GameCore
{
	class DifficultyAdjustmentStageRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* EventIDs; // 0x10
		::System::UInt32 ID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::DifficultyAdjustmentStageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DifficultyAdjustmentStageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DIFFICULTYADJUSTMENTSTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
