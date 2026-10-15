#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonAugmentConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7404C0)
#define RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7403A0)

namespace RPG::GameCore
{
	class GridFightSeasonAugmentConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 AugmentID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonAugmentConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonAugmentConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONAUGMENTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
