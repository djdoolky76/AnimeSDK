#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierAddRefreshCntWhenGetInterestConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREFRESHCNTWHENGETINTERESTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E93FC10)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREFRESHCNTWHENGETINTERESTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E93FC20)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERADDREFRESHCNTWHENGETINTERESTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E93FBD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierAddRefreshCntWhenGetInterestConfig_TypeDefinitionIndex = 19768;

	class GridFightModifierAddRefreshCntWhenGetInterestConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREFRESHCNTWHENGETINTERESTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRefreshCntWhenGetInterestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRefreshCntWhenGetInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREFRESHCNTWHENGETINTERESTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierAddRefreshCntWhenGetInterestConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierAddRefreshCntWhenGetInterestConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERADDREFRESHCNTWHENGETINTERESTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
