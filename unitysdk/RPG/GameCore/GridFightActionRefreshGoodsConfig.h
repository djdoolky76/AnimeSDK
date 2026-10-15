#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionRefreshGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6EF0)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F6F00)
#define RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F7280)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionRefreshGoodsConfig_TypeDefinitionIndex = 19307;

	class GridFightActionRefreshGoodsConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionRefreshGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionRefreshGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONREFRESHGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
