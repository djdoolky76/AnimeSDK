#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimTrainEnergySpeedMapItem; }

#define RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E1280)
#define RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E1170)

namespace RPG::GameCore
{
	class FiveDimTrainEnergySpeedMapItem : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Energy; // 0x10
		::System::Single Speed; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimTrainEnergySpeedMapItem* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimTrainEnergySpeedMapItem*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMTRAINENERGYSPEEDMAPITEM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
