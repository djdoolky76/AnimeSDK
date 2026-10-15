#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonPortalConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D713200)
#define RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D713110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonPortalConfigRow_TypeDefinitionIndex = 13633;

	class GridFightSeasonPortalConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 SeasonID; // 0x10
		::System::UInt32 PortalID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonPortalConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonPortalConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONPORTALCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
