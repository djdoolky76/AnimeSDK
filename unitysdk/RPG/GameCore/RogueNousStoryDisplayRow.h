#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousStoryDisplayRow; }

#define RPG_GAMECORE_ROGUENOUSSTORYDISPLAYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC37670)
#define RPG_GAMECORE_ROGUENOUSSTORYDISPLAYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EC374F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousStoryDisplayRow_TypeDefinitionIndex = 15071;

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
