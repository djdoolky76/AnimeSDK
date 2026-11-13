#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class IdleLivePowerByTagRow; }

#define RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE88EF0)
#define RPG_GAMECORE_IDLELIVEPOWERBYTAGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EE88CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLivePowerByTagRow_TypeDefinitionIndex = 11771;

	class IdleLivePowerByTagRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint TagPowerFactor; // 0x10
		::RPG::GameCore::FixPoint TagAddPower; // 0x18
		::System::UInt32 Num; // 0x20
		::RPG::GameCore::ILBattleAvatarTag AvatarTag; // 0x24
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
