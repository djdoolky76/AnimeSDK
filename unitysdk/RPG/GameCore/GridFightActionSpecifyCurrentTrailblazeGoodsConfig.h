#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionSpecifyCurrentTrailblazeGoodsConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYCURRENTTRAILBLAZEGOODSCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E92E670)
#define RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYCURRENTTRAILBLAZEGOODSCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E92E680)
#define RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYCURRENTTRAILBLAZEGOODSCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E92E630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionSpecifyCurrentTrailblazeGoodsConfig_TypeDefinitionIndex = 19531;

	class GridFightActionSpecifyCurrentTrailblazeGoodsConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYCURRENTTRAILBLAZEGOODSCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSpecifyCurrentTrailblazeGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSpecifyCurrentTrailblazeGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYCURRENTTRAILBLAZEGOODSCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionSpecifyCurrentTrailblazeGoodsConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionSpecifyCurrentTrailblazeGoodsConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONSPECIFYCURRENTTRAILBLAZEGOODSCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
