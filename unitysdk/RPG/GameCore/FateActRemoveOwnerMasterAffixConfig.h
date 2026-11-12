#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActRemoveOwnerMasterAffixConfig; }

#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8A6630)
#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8A6640)
#define RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8A65F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActRemoveOwnerMasterAffixConfig_TypeDefinitionIndex = 19425;

	class FateActRemoveOwnerMasterAffixConfig : public ::RPG::GameCore::FateActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActRemoveOwnerMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTREMOVEOWNERMASTERAFFIXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
