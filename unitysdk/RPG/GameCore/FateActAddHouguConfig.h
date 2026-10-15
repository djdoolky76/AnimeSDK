#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddHouguConfig; }

#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BD90)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66BDA0)
#define RPG_GAMECORE_FATEACTADDHOUGUCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66BD50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddHouguConfig_TypeDefinitionIndex = 19246;

	class FateActAddHouguConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddHouguConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddHouguConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddHouguConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDHOUGUCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
