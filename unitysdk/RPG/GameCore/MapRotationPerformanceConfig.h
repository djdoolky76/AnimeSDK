#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MapRotationPerformanceConfig; }
namespace RPG::GameCore { class MapRotationPerformanceID; }

#define RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8301B0)
#define RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D82FF10)

namespace RPG::GameCore
{
	class MapRotationPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::MapRotationPerformanceID*>* DelayPerformanceInAirlock; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MapRotationPerformanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MapRotationPerformanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAPROTATIONPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
