#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicMainAffixAvatarValueRow; }

#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB96FE0)
#define RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB96740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicMainAffixAvatarValueRow_TypeDefinitionIndex = 10895;

	class RelicMainAffixAvatarValueRow : public ::System::Object
	{
	public:
		::System::Single DamageAddedRatio; // 0x10
		::System::UInt32 AvatarID; // 0x14
		::System::Single SPRatio; // 0x18
		::System::Single Defence; // 0x1C
		::System::Single Attack; // 0x20
		::System::Single BreakDamage; // 0x24
		::System::Single Speed; // 0x28
		::System::Single HP; // 0x2C
		::System::Single CriticalChance; // 0x30
		::System::Single CriticalDamage; // 0x34
		::System::Single StatusProbability; // 0x38
		::System::Single HealRatio; // 0x3C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicMainAffixAvatarValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicMainAffixAvatarValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXAVATARVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
