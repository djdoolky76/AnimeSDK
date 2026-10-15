#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CakeRaceActionBase.h"
#include "unitysdk/RPG/GameCore/CakeRacePickupItemType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceActionGeneratePickupItem; }

#define RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D549400)
#define RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D549410)
#define RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5493B0)

namespace RPG::GameCore
{
	class CakeRaceActionGeneratePickupItem : public ::RPG::GameCore::CakeRaceActionBase
	{
	public:
		::RPG::GameCore::CakeRacePickupItemType PickupItemType; // 0x10
		::System::UInt32 Count; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGeneratePickupItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGeneratePickupItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceActionGeneratePickupItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceActionGeneratePickupItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEACTIONGENERATEPICKUPITEM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
