#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityAvatarDeliverRow; }

#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D31FC10)
#define RPG_GAMECORE_ACTIVITYAVATARDELIVERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D31F920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityAvatarDeliverRow_TypeDefinitionIndex = 10942;

	class ActivityAvatarDeliverRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::RPG::Client::TextID MailDesc; // 0x20
		::System::UInt32 AvatarID; // 0x30
		::System::Single Sort; // 0x34
		::RPG::Client::TextID Sign; // 0x38
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
