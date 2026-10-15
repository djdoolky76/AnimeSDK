#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopReplaceRoleConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735BA0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735BB0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735B60)

namespace RPG::GameCore
{
	class GridFightModifierShopReplaceRoleConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopReplaceRoleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPREPLACEROLECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
