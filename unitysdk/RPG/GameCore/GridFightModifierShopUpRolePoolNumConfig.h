#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierShopUpRolePoolNumConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D735C00)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D735C10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D735BC0)

namespace RPG::GameCore
{
	class GridFightModifierShopUpRolePoolNumConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierShopUpRolePoolNumConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSHOPUPROLEPOOLNUMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
