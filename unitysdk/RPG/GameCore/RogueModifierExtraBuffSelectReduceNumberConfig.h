#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExtraBuffSelectReduceNumberConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077F800)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077F810)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077F7C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraBuffSelectReduceNumberConfig_TypeDefinitionIndex = 18143;

	class RogueModifierExtraBuffSelectReduceNumberConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraBuffSelectReduceNumberConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRABUFFSELECTREDUCENUMBERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
