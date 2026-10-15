#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MRect.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimScrollAgentConfig; }

#define RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D79D0)
#define RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6D79E0)
#define RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7900)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimScrollAgentConfig_TypeDefinitionIndex = 18541;

	class FiveDimScrollAgentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::MRect ViewRect; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimScrollAgentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimScrollAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimScrollAgentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimScrollAgentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLAGENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
