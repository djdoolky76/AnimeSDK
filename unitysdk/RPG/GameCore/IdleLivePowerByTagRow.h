#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLivePowerByTagRow; }

#define RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D77DB30)
#define RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D77D8F0)

namespace RPG::GameCore
{
	class IdleLivePowerByTagRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint TagAddPower; // 0x10
		::System::UInt32 Num; // 0x18
		::RPG::GameCore::ILBattleAvatarTag AvatarTag; // 0x1C
		::RPG::GameCore::FixPoint TagPowerFactor; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::IdleLivePowerByTagRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::IdleLivePowerByTagRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
