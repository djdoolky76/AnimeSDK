#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/HipplenStatType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityHipplenEndingRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D366FC0)
#define RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D366BE0)

namespace RPG::GameCore
{
	class ActivityHipplenEndingRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::RPG::Client::TextID UnlockDesc; // 0x18
		::RPG::Client::TextID Name; // 0x28
		::System::Boolean IsShowInGuidePage; // 0x38
		::System::Byte _padding0[0x3];
		::System::UInt32 RewardID; // 0x3C
		::RPG::GameCore::HipplenStatType StatType; // 0x40
		::System::UInt32 ID; // 0x44
		::RPG::Client::TextID Desc; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityHipplenEndingRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityHipplenEndingRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYHIPPLENENDINGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
