#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSubAffixAvatarValueRow; }

#define RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D982380)
#define RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D982030)

namespace RPG::GameCore
{
	class RelicSubAffixAvatarValueRow : public ::System::Object
	{
	public:
		::System::Single StatusResistance; // 0x10
		::System::Single Attack; // 0x14
		::System::Single Defence; // 0x18
		::System::Single HP; // 0x1C
		::System::Single Speed; // 0x20
		::System::UInt32 AvatarID; // 0x24
		::System::Single StatusProbability; // 0x28
		::System::Single CriticalDamage; // 0x2C
		::System::Single BreakDamage; // 0x30
		::System::Single CriticalChance; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicSubAffixAvatarValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicSubAffixAvatarValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXAVATARVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
