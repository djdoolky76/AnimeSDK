#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimPropBakedMoveConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimGarbageBinBakedMoveConfig; }
namespace RPG::GameCore { class FiveDimTrampolineConfig; }

#define RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C04E0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C04F0)
#define RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C04B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimGarbageBinBakedMoveConfig_TypeDefinitionIndex = 16681;

	class FiveDimGarbageBinBakedMoveConfig : public ::RPG::GameCore::FiveDimPropBakedMoveConfig
	{
	public:
		::System::Single FallGravity; // 0x30
		::System::Single MaxFallSpeed; // 0x34
		::System::Single ColliderSizeXSmall; // 0x38
		::System::Single ColliderSizeYSmall; // 0x3C
		::RPG::MVector3 ColliderCenterSmall; // 0x40
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FiveDimTrampolineConfig* InternalTrampolineConfig; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimGarbageBinBakedMoveConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMGARBAGEBINBAKEDMOVECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
