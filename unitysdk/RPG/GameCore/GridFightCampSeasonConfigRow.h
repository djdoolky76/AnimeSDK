#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightCampSeasonConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCAMPSEASONCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E932540)
#define RPG_GAMECORE_GRIDFIGHTCAMPSEASONCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9323C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightCampSeasonConfigRow_TypeDefinitionIndex = 13749;

	class GridFightCampSeasonConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x10
		::System::UInt32 SeasonID; // 0x18
		::System::UInt32 CampID; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCAMPSEASONCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightCampSeasonConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightCampSeasonConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCAMPSEASONCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
