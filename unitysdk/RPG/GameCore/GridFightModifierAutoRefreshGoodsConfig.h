#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAutoRefreshGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9403E0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9403F0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E9403A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAutoRefreshGoodsConfig_TypeDefinitionIndex = 19617;

	class GridFightModifierAutoRefreshGoodsConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAutoRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERAUTOREFRESHGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
