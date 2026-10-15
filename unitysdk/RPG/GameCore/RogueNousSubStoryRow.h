#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousSubStoryRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUENOUSSUBSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA27380)
#define RPG_GAMECORE_ROGUENOUSSUBSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA26B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousSubStoryRow_TypeDefinitionIndex = 14911;

	class RogueNousSubStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* NextIDList; // 0x10
		::System::String* LevelGraphPath; // 0x18
		::Il2CppArray<::System::UInt32>* DisplayID; // 0x20
		::System::UInt32 RequireArea; // 0x28
		::System::UInt32 QuestID; // 0x2C
		::System::Int32 MaxNousValue; // 0x30
		::System::UInt32 StoryID; // 0x34
		::System::Int32 MinNousValue; // 0x38
		::System::UInt32 TalkNameID; // 0x3C
		::System::UInt32 Layer; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID TriggerCondition; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousSubStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousSubStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSUBSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
