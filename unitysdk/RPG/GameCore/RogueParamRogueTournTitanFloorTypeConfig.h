#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueTournTitanFloorTypeConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2B7E0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2B7F0)
#define RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2B7A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueTournTitanFloorTypeConfig_TypeDefinitionIndex = 19847;

	class RogueParamRogueTournTitanFloorTypeConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueTournTitanFloorTypeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUETOURNTITANFLOORTYPECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
