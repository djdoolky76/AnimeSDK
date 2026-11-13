#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/TutorialGuideShowType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TutorialGuideGroupRow; }
namespace RPG::GameCore { class TutorialTriggerParam; }

#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E3459D0)
#define RPG_GAMECORE_TUTORIALGUIDEGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E344DE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialGuideGroupRow_TypeDefinitionIndex = 15537;

	class TutorialGuideGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* FinishTriggerParams; // 0x10
		::Il2CppArray<::RPG::GameCore::TutorialTriggerParam*>* TriggerParams; // 0x18
		::Il2CppArray<::System::UInt32>* TutorialGuideIDList; // 0x20
		::RPG::Client::TextID MessageText; // 0x28
		::System::UInt32 GroupID; // 0x38
		::System::Boolean CanReview; // 0x3C
		::System::Byte _padding0[0x3];
		::System::UInt32 RewardID; // 0x40
		::System::UInt32 TutorialType; // 0x44
		::RPG::GameCore::TutorialGuideShowType TutorialShowType; // 0x48
		::System::UInt32 Order; // 0x4C
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
