#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionManhattanPlacePickupItem; }

#define RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51BD00)
#define RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51BD10)
#define RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51BCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceActionManhattanPlacePickupItem_TypeDefinitionIndex = 18348;

	class CakeRaceActionManhattanPlacePickupItem : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRacePickupItemType PickupItemType; // 0x10
		::System::UInt32 Distance; // 0x14
		::System::UInt32 MaxItemNum; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionManhattanPlacePickupItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONMANHATTANPLACEPICKUPITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
