#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/RogueMagicStyleType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueMagicStyleTypeSelectRow; }
namespace System { class String; }

#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D7580)
#define RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9D6E70)

namespace RPG::GameCore
{
	class RogueMagicStyleTypeSelectRow : public ::System::Object
	{
	public:
		::System::String* IconPath; // 0x10
		::System::UInt32 DisplayID; // 0x18
		::RPG::GameCore::RogueMagicStyleType EnumType; // 0x1C
		::RPG::Client::TextID EnumDesc; // 0x20
		::System::UInt32 UnlockID; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueMagicStyleTypeSelectRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueMagicStyleTypeSelectRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMAGICSTYLETYPESELECTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
