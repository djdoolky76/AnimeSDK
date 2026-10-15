#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightModifierConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightModifierLostCoinAndGainMoreConfig; }

#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D707390)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7073A0)
#define RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D707350)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightModifierLostCoinAndGainMoreConfig_TypeDefinitionIndex = 19391;

	class GridFightModifierLostCoinAndGainMoreConfig : public ::RPG::GameCore::GridFightModifierConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightModifierLostCoinAndGainMoreConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTMODIFIERLOSTCOINANDGAINMORECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
