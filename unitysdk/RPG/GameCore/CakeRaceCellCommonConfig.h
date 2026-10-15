#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceCellCommonConfig; }

#define RPG_GAMECORE_CAKERACECELLCOMMONCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54E120)
#define RPG_GAMECORE_CAKERACECELLCOMMONCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54E000)

namespace RPG::GameCore
{
	class CakeRaceCellCommonConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PushPlateMoverCDMs; // 0x10
		::System::UInt32 PushPlateMoverDurationMs; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCOMMONCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceCellCommonConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceCellCommonConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACECELLCOMMONCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
