#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousMainStoryRow; }

#define RPG_GAMECORE_ROGUENOUSMAINSTORYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA24330)
#define RPG_GAMECORE_ROGUENOUSMAINSTORYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA23B40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMainStoryRow_TypeDefinitionIndex = 14913;

	class RogueNousMainStoryRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* DisplayID; // 0x10
		::System::UInt32 Layer; // 0x18
		::System::UInt32 StoryGroup; // 0x1C
		::System::UInt32 UnlockConditionDisplay; // 0x20
		::System::UInt32 QuestID; // 0x24
		::RPG::Client::TextID MainStoryName; // 0x28
		::System::UInt32 RogueNPCID; // 0x38
		::System::UInt32 StoryID; // 0x3C
		::RPG::Client::TextID TriggerCondition; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousMainStoryRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousMainStoryRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMAINSTORYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
