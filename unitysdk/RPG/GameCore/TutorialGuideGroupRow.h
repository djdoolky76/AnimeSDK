#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideGroupRow; }
namespace RPG::GameCore { class TutorialTriggerParam; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC69F80)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DC693C0)

namespace RPG::GameCore
{
	class TutorialGuideGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* FinishTriggerParams; // 0x10
		::Il2CppArray<::System::UInt32>* TutorialGuideIDList; // 0x18
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* TriggerParams; // 0x20
		::System::UInt32 RewardID; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::RPG::Client::TextID MessageText; // 0x30
		::System::Boolean CanReview; // 0x40
		::System::Byte _padding0[0x3];
		::RPG::GameCore::TutorialGuideShowType TutorialShowType; // 0x44
		::System::UInt32 Order; // 0x48
		::System::UInt32 TutorialType; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::TutorialGuideGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TutorialGuideGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TUTORIALGUIDEGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
