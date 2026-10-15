#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueTournAvatarRow; }

#define RPG_GAMECORE_ROGUETOURNAVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA317C0)
#define RPG_GAMECORE_ROGUETOURNAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA316D0)

namespace RPG::GameCore
{
	class RogueTournAvatarRow : public ::System::Object
	{
	public:
		::System::UInt32 AvatarID; // 0x10
		::System::UInt32 SpecialAvatarID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNAVATARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueTournAvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueTournAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUETOURNAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
