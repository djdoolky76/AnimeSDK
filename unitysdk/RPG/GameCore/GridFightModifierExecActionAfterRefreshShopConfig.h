#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterRefreshShopConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734170)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734180)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734130)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterRefreshShopConfig_TypeDefinitionIndex = 19378;

	class GridFightModifierExecActionAfterRefreshShopConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterRefreshShopConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERREFRESHSHOPCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
