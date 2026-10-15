#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityAvatarDeliverRow; }

#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D34D6E0)
#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D34D3F0)

namespace RPG::GameCore
{
	class ActivityAvatarDeliverRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Sign; // 0x10
		::RPG::Client::TextID MailDesc; // 0x20
		::RPG::Client::TextID Name; // 0x30
		::System::UInt32 AvatarID; // 0x40
		::System::Single Sort; // 0x44
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityAvatarDeliverRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityAvatarDeliverRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
