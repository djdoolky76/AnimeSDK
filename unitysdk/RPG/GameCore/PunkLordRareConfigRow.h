#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PunkLordGroupType.h"
#include "unitysdk/RPG/GameCore/PunkLordMonsterRare.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PunkLordRareConfigRow; }

#define RPG_GAMECORE_PUNKLORDRARECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D95D7B0)
#define RPG_GAMECORE_PUNKLORDRARECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D95D630)

namespace RPG::GameCore
{
	class PunkLordRareConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 Weight; // 0x10
		::RPG::GameCore::PunkLordMonsterRare MonsterRare; // 0x14
		::RPG::GameCore::PunkLordGroupType GroupType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDRARECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PunkLordRareConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PunkLordRareConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PUNKLORDRARECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
