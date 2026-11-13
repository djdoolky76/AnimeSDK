#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077D3F0)
#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077D400)
#define RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077D3B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig_TypeDefinitionIndex = 17997;

	class RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierAddBuffWithMostPathNumAndActivatePathEchoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERADDBUFFWITHMOSTPATHNUMANDACTIVATEPATHECHOCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
