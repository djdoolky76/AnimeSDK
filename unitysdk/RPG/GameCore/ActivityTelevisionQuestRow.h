#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityTelevisionQuestRow; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D382E50)
#define RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3827A0)

namespace RPG::GameCore
{
	class ActivityTelevisionQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::System::UInt32 QuestGroupID; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TabName; // 0x20
		::RPG::Client::TextID OriginalTabName; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityTelevisionQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityTelevisionQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
