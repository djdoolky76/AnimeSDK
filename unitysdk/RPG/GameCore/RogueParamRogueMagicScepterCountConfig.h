#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueParameterConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueParamRogueMagicScepterCountConfig; }

#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA2AFA0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA2AFB0)
#define RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA2AF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueParamRogueMagicScepterCountConfig_TypeDefinitionIndex = 19842;

	class RogueParamRogueMagicScepterCountConfig : public ::RPG::GameCore::RogueParameterConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueParamRogueMagicScepterCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEPARAMROGUEMAGICSCEPTERCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
