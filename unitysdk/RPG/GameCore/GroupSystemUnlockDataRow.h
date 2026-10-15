#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GroupSystemUnlockDataRow; }

#define RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D74CB60)
#define RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D74CA40)

namespace RPG::GameCore
{
	class GroupSystemUnlockDataRow : public ::System::Object
	{
	public:
		::System::UInt32 UnlockID; // 0x10
		::System::UInt32 GroupSystemUnlockID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GroupSystemUnlockDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GroupSystemUnlockDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GROUPSYSTEMUNLOCKDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
