#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FateModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateModifierDeactivatePlayerBattleMasterAffixConfig; }

#define RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69B3C0)
#define RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D69B3D0)
#define RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D69B380)

namespace RPG::GameCore
{
	class FateModifierDeactivatePlayerBattleMasterAffixConfig : public ::RPG::GameCore::FateModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateModifierDeactivatePlayerBattleMasterAffixConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEMODIFIERDEACTIVATEPLAYERBATTLEMASTERAFFIXCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
