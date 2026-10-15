#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumPhaseUpgradeRow; }

#define RPG_GAMECORE_MUSEUMPHASEUPGRADEROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D89A4A0)
#define RPG_GAMECORE_MUSEUMPHASEUPGRADEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D89A2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumPhaseUpgradeRow_TypeDefinitionIndex = 14216;

	class MuseumPhaseUpgradeRow : public ::System::Object
	{
	public:
		::System::UInt32 MuseumPhaseID; // 0x10
		::System::UInt32 AreaID; // 0x14
		::System::UInt32 RequireStatsB; // 0x18
		::System::UInt32 RenewPoint; // 0x1C
		::System::UInt32 RequireStatsA; // 0x20
		::System::UInt32 RequireStatsC; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEUPGRADEROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumPhaseUpgradeRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumPhaseUpgradeRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMPHASEUPGRADEROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
