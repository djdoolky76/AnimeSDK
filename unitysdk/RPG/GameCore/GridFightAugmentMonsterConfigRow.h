#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightAugmentQuality.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightAugmentMonsterConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D726500)
#define RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D726390)

namespace RPG::GameCore
{
	class GridFightAugmentMonsterConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 DivisionLevel; // 0x10
		::System::UInt32 EnemyDiffLvAdd; // 0x14
		::RPG::GameCore::GridFightAugmentQuality Quality; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightAugmentMonsterConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightAugmentMonsterConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTAUGMENTMONSTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
