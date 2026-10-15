#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TRFTeleportGateComponentConfig; }

#define RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB53DA0)
#define RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB53DB0)
#define RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB53D50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TRFTeleportGateComponentConfig_TypeDefinitionIndex = 18913;

	class TRFTeleportGateComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::UInt32 TeleportGateId; // 0x10
		::System::Boolean InitOn; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFTeleportGateComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFTeleportGateComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TRFTeleportGateComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TRFTeleportGateComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRFTELEPORTGATECOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
