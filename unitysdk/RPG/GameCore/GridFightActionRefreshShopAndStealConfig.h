#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionRefreshShopAndStealConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D724990)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7249A0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D724D40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRefreshShopAndStealConfig_TypeDefinitionIndex = 19306;

	class GridFightActionRefreshShopAndStealConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRefreshShopAndStealConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHSHOPANDSTEALCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
