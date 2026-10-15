#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/QuestUnlockType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class QuestDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_QUESTDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D960B40)
#define RPG_GAMECORE_QUESTDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D960300)

namespace RPG::GameCore
{
	class QuestDataRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* UnlockParamList; // 0x10
		::System::String* ImagePath; // 0x18
		::System::UInt32 GotoID; // 0x20
		::System::UInt32 RewardID; // 0x24
		::RPG::Client::TextID QuestTitle; // 0x28
		::System::UInt32 QuestType; // 0x38
		::System::UInt32 QuestID; // 0x3C
		::RPG::GameCore::QuestUnlockType UnlockType; // 0x40
		::System::UInt32 FinishWayID; // 0x44
		::RPG::Client::TextID QuestDisplay; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::QuestDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::QuestDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_QUESTDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
