#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueTournMode.h"
#include "unitysdk/RPG/GameCore/RogueTournRoomType.h"
#include "unitysdk/RPG/GameCore/RogueTournVariantType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournRoomRow; }

#define RPG_GAMECORE_ROGUETOURNROOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA13AD0)
#define RPG_GAMECORE_ROGUETOURNROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA13900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueTournRoomRow_TypeDefinitionIndex = 14962;

	class RogueTournRoomRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueTournMode TournMode; // 0x10
		::RPG::GameCore::RogueTournVariantType VariantType; // 0x14
		::RPG::GameCore::RogueTournRoomType RogueRoomType; // 0x18
		::System::UInt32 RogueRoomID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournRoomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournRoomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
