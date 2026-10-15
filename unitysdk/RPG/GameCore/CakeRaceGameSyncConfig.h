#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CakeRaceGameSyncConfig; }

#define RPG_GAMECORE_CAKERACEGAMESYNCCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D550820)
#define RPG_GAMECORE_CAKERACEGAMESYNCCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54FC90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CakeRaceGameSyncConfig_TypeDefinitionIndex = 18398;

	class CakeRaceGameSyncConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 ServerFrameRate; // 0x10
		::System::UInt32 ClientDelayMs; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESYNCCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CakeRaceGameSyncConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CakeRaceGameSyncConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CAKERACEGAMESYNCCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
