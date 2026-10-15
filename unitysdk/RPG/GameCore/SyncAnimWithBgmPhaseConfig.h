#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SyncAnimWithBgmPhaseConfig; }

#define RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB50020)
#define RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB4FEA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SyncAnimWithBgmPhaseConfig_TypeDefinitionIndex = 22391;

	class SyncAnimWithBgmPhaseConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartTime; // 0x10
		::System::Single BlendParam; // 0x14
		::System::Single NorTimeOffset; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::SyncAnimWithBgmPhaseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SyncAnimWithBgmPhaseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SYNCANIMWITHBGMPHASECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
