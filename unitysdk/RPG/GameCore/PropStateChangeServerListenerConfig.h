#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropStateChangeServerListenerConfig; }

#define RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EB70EA0)
#define RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EB70EB0)
#define RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EB70E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropStateChangeServerListenerConfig_TypeDefinitionIndex = 20735;

	class PropStateChangeServerListenerConfig : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateChangeServerListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateChangeServerListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropStateChangeServerListenerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropStateChangeServerListenerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPSTATECHANGESERVERLISTENERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
