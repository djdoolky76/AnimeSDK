#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class NPCMonsterDataRow; }
namespace System { class String; }

#define RPG_GAMECORE_NPCMONSTERDATAROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E4952F0)
#define RPG_GAMECORE_NPCMONSTERDATAROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E494AF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int NPCMonsterDataRow_TypeDefinitionIndex = 14441;

	class NPCMonsterDataRow : public ::System::Object
	{
	public:
		::System::String* JsonPath; // 0x10
		::System::String* ConfigEntityPath; // 0x18
		::System::String* DefaultAIPath; // 0x20
		::System::UInt32 MappingInfoID; // 0x28
		::RPG::GameCore::MonsterRank Rank; // 0x2C
		::RPG::Client::TextID NPCName; // 0x30
		::System::Boolean IsMazeLink; // 0x40
		::System::Byte _padding0[0x3];
		::System::UInt32 PrototypeID; // 0x44
		::System::UInt32 ID; // 0x48
		::System::UInt32 MiniMapIconType; // 0x4C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::NPCMonsterDataRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::NPCMonsterDataRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_NPCMONSTERDATAROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
