#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueMagicRoomType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicRoomRow; }

#define RPG_GAMECORE_ROGUEMAGICROOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A7D70)
#define RPG_GAMECORE_ROGUEMAGICROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9A7C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueMagicRoomRow_TypeDefinitionIndex = 14860;

	class RogueMagicRoomRow : public ::System::Object
	{
	public:
		::RPG::GameCore::RogueMagicRoomType RogueRoomType; // 0x10
		::System::UInt32 RogueRoomID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICROOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicRoomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicRoomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
