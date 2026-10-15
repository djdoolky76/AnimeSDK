#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionPerformanceConfig; }
namespace RPG::GameCore { class MainMissionSortedItem; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7FB720)
#define RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7FB620)

namespace RPG::GameCore
{
	class MainMissionPerformanceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::RPG::GameCore::MainMissionSortedItem*>* MainMissionMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionPerformanceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionPerformanceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
