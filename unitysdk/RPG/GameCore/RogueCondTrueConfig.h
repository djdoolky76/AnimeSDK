#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueCondTrueConfig; }

#define RPG_GAMECORE_ROGUECONDTRUECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1F56A5A0)
#define RPG_GAMECORE_ROGUECONDTRUECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1F56A5B0)
#define RPG_GAMECORE_ROGUECONDTRUECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1F56A560)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueCondTrueConfig_TypeDefinitionIndex = 20129;

	class RogueCondTrueConfig : public ::RPG::GameCore::RogueConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueCondTrueConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueCondTrueConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUECONDTRUECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
