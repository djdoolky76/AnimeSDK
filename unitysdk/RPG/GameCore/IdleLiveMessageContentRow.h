#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/IdleLiveMessageContentType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveMessageContentRow; }

#define RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77CE70)
#define RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77CC10)

namespace RPG::GameCore
{
	class IdleLiveMessageContentRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextContentID; // 0x10
		::RPG::Client::TextID MainText; // 0x18
		::System::UInt32 SenderID; // 0x28
		::RPG::GameCore::IdleLiveMessageContentType ContentType; // 0x2C
		::System::UInt32 ContentID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveMessageContentRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveMessageContentRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEMESSAGECONTENTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
