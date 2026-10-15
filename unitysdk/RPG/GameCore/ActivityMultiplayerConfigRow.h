#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityMultiplayerConfigRow; }
namespace RPG::GameCore { class ConditionParam; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D36CA60)
#define RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D36C2C0)

namespace RPG::GameCore
{
	class ActivityMultiplayerConfigRow : public ::System::Object
	{
	public:
		::System::String* CardColor; // 0x10
		::System::String* CardImgPath; // 0x18
		::Il2CppArray<::RPG::GameCore::ConditionParam*>* CompleteCondition; // 0x20
		::System::UInt32 ActivityID; // 0x28
		::System::UInt32 ActivityModuleID; // 0x2C
		::System::UInt32 DisplayModuleID; // 0x30
		::System::UInt32 GuideVideoID; // 0x34
		::System::UInt32 ProgramGroupID; // 0x38
		::System::UInt32 CurrentModuleID; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityMultiplayerConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityMultiplayerConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYMULTIPLAYERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
