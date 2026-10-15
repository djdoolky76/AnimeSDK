#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActFetchMasterAffixConfig; }

#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66C270)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66C280)
#define RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66C230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActFetchMasterAffixConfig_TypeDefinitionIndex = 19242;

	class FateActFetchMasterAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActFetchMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActFetchMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActFetchMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTFETCHMASTERAFFIXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
