#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierExecActionAfterBuyGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7062C0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7062D0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D706280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierExecActionAfterBuyGoodsConfig_TypeDefinitionIndex = 19362;

	class GridFightModifierExecActionAfterBuyGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierExecActionAfterBuyGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIEREXECACTIONAFTERBUYGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
