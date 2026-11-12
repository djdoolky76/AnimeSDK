#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierSwitchHpAndGoldConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E944690)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E9446A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E944650)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierSwitchHpAndGoldConfig_TypeDefinitionIndex = 19647;

	class GridFightModifierSwitchHpAndGoldConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierSwitchHpAndGoldConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERSWITCHHPANDGOLDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
