#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondMiracleStatusConfig; }

#define RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2370)
#define RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2380)
#define RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondMiracleStatusConfig_TypeDefinitionIndex = 19811;

	class RogueCondMiracleStatusConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondMiracleStatusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondMiracleStatusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondMiracleStatusConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondMiracleStatusConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDMIRACLESTATUSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
