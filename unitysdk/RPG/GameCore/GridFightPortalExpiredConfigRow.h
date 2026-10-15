#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPortalExpiredConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D70C230)
#define RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D70C0C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPortalExpiredConfigRow_TypeDefinitionIndex = 13653;

	class GridFightPortalExpiredConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 PortalID; // 0x10
		::System::UInt32 SubSeasonID; // 0x14
		::System::UInt32 SeasonID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPortalExpiredConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPortalExpiredConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPORTALEXPIREDCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
