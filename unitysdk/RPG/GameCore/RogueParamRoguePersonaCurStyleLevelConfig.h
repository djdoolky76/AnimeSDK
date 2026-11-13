#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRoguePersonaCurStyleLevelConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x207B50B0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x207B50C0)
#define RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x207B5070)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRoguePersonaCurStyleLevelConfig_TypeDefinitionIndex = 20185;

	class RogueParamRoguePersonaCurStyleLevelConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRoguePersonaCurStyleLevelConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEPERSONACURSTYLELEVELCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
