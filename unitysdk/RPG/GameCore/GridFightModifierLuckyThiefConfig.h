#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierLuckyThiefConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D734E80)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D734E90)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D734E40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLuckyThiefConfig_TypeDefinitionIndex = 19376;

	class GridFightModifierLuckyThiefConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLuckyThiefConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLuckyThiefConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLuckyThiefConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLuckyThiefConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLUCKYTHIEFCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
