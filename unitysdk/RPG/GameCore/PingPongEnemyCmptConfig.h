#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PingPongEnemyCmptConfig; }
namespace System { class String; }

#define RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8E7DD0)
#define RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8E7DE0)
#define RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8E7D00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PingPongEnemyCmptConfig_TypeDefinitionIndex = 18934;

	class PingPongEnemyCmptConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::String* ConfigPath; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PingPongEnemyCmptConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PingPongEnemyCmptConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PINGPONGENEMYCMPTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
