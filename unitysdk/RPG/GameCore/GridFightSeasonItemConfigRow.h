#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonItemConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA600E0)
#define RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5FF70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonItemConfigRow_TypeDefinitionIndex = 13535;

	class GridFightSeasonItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 ItemID; // 0x14
		::System::UInt32 ConfigID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonItemConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonItemConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
