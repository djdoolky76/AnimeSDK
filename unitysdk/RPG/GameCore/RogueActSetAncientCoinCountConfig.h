#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActSetAncientCoinCountConfig; }

#define RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9A1720)
#define RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9A1730)
#define RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9A16E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActSetAncientCoinCountConfig_TypeDefinitionIndex = 19621;

	class RogueActSetAncientCoinCountConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetAncientCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetAncientCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActSetAncientCoinCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActSetAncientCoinCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTSETANCIENTCOINCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
