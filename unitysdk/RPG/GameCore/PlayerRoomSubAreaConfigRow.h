#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerRoomSubAreaConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D90E6F0)
#define RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D90E4F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerRoomSubAreaConfigRow_TypeDefinitionIndex = 14549;

	class PlayerRoomSubAreaConfigRow : public ::System::Object
	{
	public:
		::System::String* Icon; // 0x10
		::RPG::Client::TextID Name; // 0x18
		::System::UInt32 StaticCameraID; // 0x28
		::System::UInt32 ID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerRoomSubAreaConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerRoomSubAreaConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERROOMSUBAREACONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
