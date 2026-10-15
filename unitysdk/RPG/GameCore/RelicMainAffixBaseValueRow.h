#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AvatarPropertyType.h"
#include "unitysdk/RPG/GameCore/RelicAffixType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RelicMainAffixBaseValueRow; }

#define RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D97EDD0)
#define RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D97EC00)

namespace RPG::GameCore
{
	class RelicMainAffixBaseValueRow : public ::System::Object
	{
	public:
		::System::Single BaseValue; // 0x10
		::System::Single ValuePerLevel; // 0x14
		::RPG::GameCore::RelicAffixType Type; // 0x18
		::RPG::GameCore::AvatarPropertyType RelicMainAffix; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RelicMainAffixBaseValueRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RelicMainAffixBaseValueRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RELICMAINAFFIXBASEVALUEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
