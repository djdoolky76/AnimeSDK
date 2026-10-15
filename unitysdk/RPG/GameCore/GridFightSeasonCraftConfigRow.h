#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightSeasonCraftConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D712B50)
#define RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D712A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightSeasonCraftConfigRow_TypeDefinitionIndex = 13461;

	class GridFightSeasonCraftConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 CraftID; // 0x10
		::System::UInt32 SeasonID; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightSeasonCraftConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightSeasonCraftConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSEASONCRAFTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
