#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicSubAffixConfigRow; }

#define RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB9B920)
#define RPG_GAMECORE_RELICSUBAFFIXCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EB9B1E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RelicSubAffixConfigRow_TypeDefinitionIndex = 14791;

	class RelicSubAffixConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::UInt32 StepNum; // 0x14
		::RPG::GameCore::FixPoint StepValue; // 0x18
		::RPG::GameCore::FixPoint BaseValue; // 0x20
		::System::UInt32 AffixID; // 0x28
		::RPG::GameCore::AvatarPropertyType Property; // 0x2C
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
