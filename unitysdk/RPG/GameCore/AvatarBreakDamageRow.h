#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarBreakDamageRow; }

#define RPG_GAMECORE_AVATARBREAKDAMAGEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D40D360)
#define RPG_GAMECORE_AVATARBREAKDAMAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D40D220)

namespace RPG::GameCore
{
	class AvatarBreakDamageRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint BreakBaseDamage; // 0x10
		::System::UInt32 Level; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBREAKDAMAGEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarBreakDamageRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarBreakDamageRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARBREAKDAMAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
