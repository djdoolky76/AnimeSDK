#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SwordTrainingStoryType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SwordTrainingStoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_SWORDTRAININGSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EDFEE90)
#define RPG_GAMECORE_SWORDTRAININGSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EDFE870)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SwordTrainingStoryRow_TypeDefinitionIndex = 12521;

	class SwordTrainingStoryRow : public ::System::Object
	{
	public:
		::System::String* StoryImage; // 0x10
		::Il2CppArray<::System::UInt32>* EffectIDList; // 0x18
		::RPG::Client::TextID StoryHint; // 0x20
		::System::UInt32 StoryID; // 0x30
		::System::UInt32 ExamID; // 0x34
		::RPG::Client::TextID StoryDesc; // 0x38
		::RPG::Client::TextID ConditionDesc; // 0x48
		::System::UInt32 Condition; // 0x58
		::RPG::GameCore::SwordTrainingStoryType StoryType; // 0x5C
		::System::UInt32 MissionID; // 0x60
		::System::UInt32 RepeatPerformanceID; // 0x64
		::RPG::Client::TextID StoryTitle; // 0x68
		::RPG::Client::TextID EffectDesc; // 0x78
		::System::UInt32 PartnerID; // 0x88
		::System::UInt32 PerformanceID; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SwordTrainingStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SwordTrainingStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SWORDTRAININGSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
