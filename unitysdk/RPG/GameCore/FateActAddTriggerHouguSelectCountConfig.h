#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddTriggerHouguSelectCountConfig; }

#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66C0F0)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66C100)
#define RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66C0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddTriggerHouguSelectCountConfig_TypeDefinitionIndex = 19245;

	class FateActAddTriggerHouguSelectCountConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddTriggerHouguSelectCountConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDTRIGGERHOUGUSELECTCOUNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
