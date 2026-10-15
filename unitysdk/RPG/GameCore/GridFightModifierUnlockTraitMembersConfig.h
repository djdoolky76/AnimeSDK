#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierUnlockTraitMembersConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7360E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7360F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7360A0)

namespace RPG::GameCore
{
	class GridFightModifierUnlockTraitMembersConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierUnlockTraitMembersConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERUNLOCKTRAITMEMBERSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
