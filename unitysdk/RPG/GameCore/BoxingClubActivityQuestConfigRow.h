#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BoxingClubActivityQuestConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D479CB0)
#define RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D479B10)

namespace RPG::GameCore
{
	class BoxingClubActivityQuestConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::String* Name; // 0x18
		::System::UInt32 ChallengeID; // 0x20
		::System::UInt32 ID; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::BoxingClubActivityQuestConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::BoxingClubActivityQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BOXINGCLUBACTIVITYQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
