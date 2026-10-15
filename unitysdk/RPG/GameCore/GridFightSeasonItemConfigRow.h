#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonItemConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D712EB0)
#define RPG_GAMECORE_GRIDFIGHTSEASONITEMCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D712D90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonItemConfigRow_TypeDefinitionIndex = 13459;

	class GridFightSeasonItemConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ItemID; // 0x10
		::System::UInt32 SeasonID; // 0x14
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
