#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFSwitchComponentConfig; }

#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB263D0)
#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB263E0)
#define RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB26310)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFSwitchComponentConfig_TypeDefinitionIndex = 18912;

	class TRFSwitchComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 TeleportGateId; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFSwitchComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFSwitchComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFSwitchComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFSwitchComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFSWITCHCOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
