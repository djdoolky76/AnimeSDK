#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSubAffixConfigRow; }

#define RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9834B0)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D982D70)

namespace RPG::GameCore
{
	class RelicSubAffixConfigRow : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint BaseValue; // 0x10
		::RPG::GameCore::AvatarPropertyType Property; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 StepNum; // 0x20
		::System::UInt32 AffixID; // 0x24
		::RPG::GameCore::FixPoint StepValue; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicSubAffixConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicSubAffixConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
