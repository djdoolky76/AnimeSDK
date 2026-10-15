#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityLoginConfigRow; }

#define RPG_GAMECORE_ACTIVITYLOGINCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36B740)
#define RPG_GAMECORE_ACTIVITYLOGINCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D36B180)

namespace RPG::GameCore
{
	class ActivityLoginConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RewardList; // 0x10
		::System::UInt32 ActivityModuleID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOGINCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityLoginConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityLoginConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYLOGINCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
