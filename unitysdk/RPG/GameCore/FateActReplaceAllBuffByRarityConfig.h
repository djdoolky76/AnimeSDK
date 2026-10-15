#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActReplaceAllBuffByRarityConfig; }

#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D699F30)
#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D699F40)
#define RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699EF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActReplaceAllBuffByRarityConfig_TypeDefinitionIndex = 19244;

	class FateActReplaceAllBuffByRarityConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActReplaceAllBuffByRarityConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREPLACEALLBUFFBYRARITYCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
