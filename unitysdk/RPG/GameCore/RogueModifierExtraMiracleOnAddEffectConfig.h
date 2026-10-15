#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierExtraMiracleOnAddEffectConfig; }

#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9E94A0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9E94B0)
#define RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9E9460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierExtraMiracleOnAddEffectConfig_TypeDefinitionIndex = 17758;

	class RogueModifierExtraMiracleOnAddEffectConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierExtraMiracleOnAddEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIEREXTRAMIRACLEONADDEFFECTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
