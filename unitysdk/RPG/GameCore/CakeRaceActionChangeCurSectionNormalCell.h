#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRaceCellType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionChangeCurSectionNormalCell; }

#define RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5482D0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5482E0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5482A0)

namespace RPG::GameCore
{
	class CakeRaceActionChangeCurSectionNormalCell : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRaceCellType NewCellType; // 0x10
		::System::UInt32 Percent; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeCurSectionNormalCell*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGECURSECTIONNORMALCELL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
