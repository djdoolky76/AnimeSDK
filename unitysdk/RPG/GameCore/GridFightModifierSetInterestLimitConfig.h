#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSetInterestLimitConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETINTERESTLIMITCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9437A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETINTERESTLIMITCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9437B0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSETINTERESTLIMITCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E943760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSetInterestLimitConfig_TypeDefinitionIndex = 19813;

	class GridFightModifierSetInterestLimitConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETINTERESTLIMITCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetInterestLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetInterestLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETINTERESTLIMITCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSetInterestLimitConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSetInterestLimitConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSETINTERESTLIMITCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
