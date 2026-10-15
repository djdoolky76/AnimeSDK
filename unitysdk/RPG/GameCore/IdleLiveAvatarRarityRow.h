#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLiveAvatarRarityRow; }

#define RPG_GAMECORE_IDLELIVEAVATARRARITYROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7782F0)
#define RPG_GAMECORE_IDLELIVEAVATARRARITYROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D778170)

namespace RPG::GameCore
{
	class IdleLiveAvatarRarityRow : public ::System::Object
	{
	public:
		::System::UInt32 Rarity; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARRARITYROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLiveAvatarRarityRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLiveAvatarRarityRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEAVATARRARITYROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
