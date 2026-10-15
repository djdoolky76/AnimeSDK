#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousStoryDisplayRow; }

#define RPG_GAMECORE_ROGUENOUSSTORYDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA254F0)
#define RPG_GAMECORE_ROGUENOUSSTORYDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA25370)

namespace RPG::GameCore
{
	class RogueNousStoryDisplayRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID TriggerCondition; // 0x10
		::System::UInt32 DisplayID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYDISPLAYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousStoryDisplayRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousStoryDisplayRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSSTORYDISPLAYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
