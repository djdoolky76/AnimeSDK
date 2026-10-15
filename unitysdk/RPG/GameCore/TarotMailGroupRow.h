#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TarotMailGroupRow; }

#define RPG_GAMECORE_TAROTMAILGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB78120)
#define RPG_GAMECORE_TAROTMAILGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB77FA0)

namespace RPG::GameCore
{
	class TarotMailGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MailboxIDList; // 0x10
		::System::UInt32 UnlockID; // 0x18
		::System::UInt32 ID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TarotMailGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TarotMailGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TAROTMAILGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
