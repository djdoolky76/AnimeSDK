#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueSubMode.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueDLCRoomRow; }

#define RPG_GAMECORE_ROGUEDLCROOMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9C6510)
#define RPG_GAMECORE_ROGUEDLCROOMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9C6380)

namespace RPG::GameCore
{
	class RogueDLCRoomRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RogueRoomSections; // 0x10
		::RPG::GameCore::RogueSubMode RogueSubMode; // 0x18
		::System::UInt32 RogueRoomID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCROOMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueDLCRoomRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueDLCRoomRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEDLCROOMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
