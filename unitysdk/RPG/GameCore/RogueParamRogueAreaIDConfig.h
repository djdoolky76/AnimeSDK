#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueAreaIDConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9FD460)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9FD470)
#define RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9FD420)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueAreaIDConfig_TypeDefinitionIndex = 19841;

	class RogueParamRogueAreaIDConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueAreaIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueAreaIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueAreaIDConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueAreaIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEAREAIDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
