#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGeckoBakedMoveConfig; }

#define RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C13C0)
#define RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C13D0)
#define RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C1390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGeckoBakedMoveConfig_TypeDefinitionIndex = 16679;

	class FiveDimGeckoBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Single FallGravity; // 0x30
		::System::Single MaxFallSpeed; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGeckoBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGECKOBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
