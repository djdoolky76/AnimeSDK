#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MainMissionPerformanceIndexConfig; }

#define RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CDD70)
#define RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7CDCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MainMissionPerformanceIndexConfig_TypeDefinitionIndex = 19030;

	class MainMissionPerformanceIndexConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::UInt32>* MainMissionIndexList; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::MainMissionPerformanceIndexConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MainMissionPerformanceIndexConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MAINMISSIONPERFORMANCEINDEXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
