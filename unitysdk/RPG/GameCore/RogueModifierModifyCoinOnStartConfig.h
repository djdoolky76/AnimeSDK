#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierModifyCoinOnStartConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC29CA0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC29CB0)
#define RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC29C60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierModifyCoinOnStartConfig_TypeDefinitionIndex = 18146;

	class RogueModifierModifyCoinOnStartConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierModifyCoinOnStartConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERMODIFYCOINONSTARTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
