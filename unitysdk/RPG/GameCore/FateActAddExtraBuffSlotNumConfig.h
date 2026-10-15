#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActAddExtraBuffSlotNumConfig; }

#define RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BD30)
#define RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66BD40)
#define RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66BCF0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActAddExtraBuffSlotNumConfig_TypeDefinitionIndex = 19240;

	class FateActAddExtraBuffSlotNumConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActAddExtraBuffSlotNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTADDEXTRABUFFSLOTNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
