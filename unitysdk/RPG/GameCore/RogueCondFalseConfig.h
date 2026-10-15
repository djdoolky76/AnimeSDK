#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondFalseConfig; }

#define RPG_GAMECORE_ROGUECONDFALSECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9B2250)
#define RPG_GAMECORE_ROGUECONDFALSECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9B2260)
#define RPG_GAMECORE_ROGUECONDFALSECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9B2210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondFalseConfig_TypeDefinitionIndex = 19800;

	class RogueCondFalseConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondFalseConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondFalseConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDFALSECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
