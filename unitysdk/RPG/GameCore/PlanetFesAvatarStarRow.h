#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlanetFesAvatarStarRow; }

#define RPG_GAMECORE_PLANETFESAVATARSTARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D923B90)
#define RPG_GAMECORE_PLANETFESAVATARSTARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9234F0)

namespace RPG::GameCore
{
	class PlanetFesAvatarStarRow : public ::System::Object
	{
	public:
		::System::UInt32 IncomeParam; // 0x10
		::System::UInt32 Rarity; // 0x14
		::System::UInt32 CostItemNumber; // 0x18
		::System::UInt32 StarLevel; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlanetFesAvatarStarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlanetFesAvatarStarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLANETFESAVATARSTARROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
