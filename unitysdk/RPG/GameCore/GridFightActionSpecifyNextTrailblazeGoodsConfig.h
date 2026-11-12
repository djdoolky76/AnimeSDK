#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSpecifyNextTrailblazeGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYNEXTTRAILBLAZEGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92E6D0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYNEXTTRAILBLAZEGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92E6E0)
#define RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYNEXTTRAILBLAZEGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92E690)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSpecifyNextTrailblazeGoodsConfig_TypeDefinitionIndex = 19530;

	class GridFightActionSpecifyNextTrailblazeGoodsConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYNEXTTRAILBLAZEGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSpecifyNextTrailblazeGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSpecifyNextTrailblazeGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYNEXTTRAILBLAZEGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSpecifyNextTrailblazeGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSpecifyNextTrailblazeGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYNEXTTRAILBLAZEGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
