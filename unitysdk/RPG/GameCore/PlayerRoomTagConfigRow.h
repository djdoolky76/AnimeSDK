#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomTagConfigRow; }

#define RPG_GAMECORE_PLAYERROOMTAGCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EF78A80)
#define RPG_GAMECORE_PLAYERROOMTAGCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EF78900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomTagConfigRow_TypeDefinitionIndex = 14708;

	class PlayerRoomTagConfigRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 ID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMTAGCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerRoomTagConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerRoomTagConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMTAGCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
