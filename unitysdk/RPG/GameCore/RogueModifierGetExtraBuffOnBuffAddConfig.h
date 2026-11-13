#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierGetExtraBuffOnBuffAddConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077F9E0)
#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077F9F0)
#define RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077F9A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierGetExtraBuffOnBuffAddConfig_TypeDefinitionIndex = 17957;

	class RogueModifierGetExtraBuffOnBuffAddConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierGetExtraBuffOnBuffAddConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERGETEXTRABUFFONBUFFADDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
