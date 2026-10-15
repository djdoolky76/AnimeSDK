#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueActGetRogueMagicScepterConfig; }

#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D99E2D0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D99E2E0)
#define RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D99E290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetRogueMagicScepterConfig_TypeDefinitionIndex = 19688;

	class RogueActGetRogueMagicScepterConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueActGetRogueMagicScepterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETROGUEMAGICSCEPTERCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
