#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActChangeRogueCoinConfig; }

#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D96FD70)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D96FD80)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D96FD30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueCoinConfig_TypeDefinitionIndex = 19618;

	class RogueActChangeRogueCoinConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActChangeRogueCoinConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActChangeRogueCoinConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUECOINCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
