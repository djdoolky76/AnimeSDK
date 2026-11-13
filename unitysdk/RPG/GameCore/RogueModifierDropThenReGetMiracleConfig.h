#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueModifierConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueModifierDropThenReGetMiracleConfig; }

#define RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x2077DD60)
#define RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x2077DD70)
#define RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x2077DD20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierDropThenReGetMiracleConfig_TypeDefinitionIndex = 18159;

	class RogueModifierDropThenReGetMiracleConfig : public ::RPG::GameCore::RogueModifierConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueModifierDropThenReGetMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEMODIFIERDROPTHENREGETMIRACLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
