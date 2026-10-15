#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionChangeValidItem; }

#define RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D548790)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5487A0)
#define RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D548760)

namespace RPG::GameCore
{
	class CakeRaceActionChangeValidItem : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::System::UInt32 InvalidItemId; // 0x10
		::System::UInt32 ValidItemId; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeValidItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeValidItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionChangeValidItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionChangeValidItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONCHANGEVALIDITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
