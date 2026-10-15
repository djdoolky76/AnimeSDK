#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameEntityMoveBakedConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimConveyorBakedConfig; }
namespace RPG::GameCore { class FiveDimGroundBakedConfig; }
namespace RPG::GameCore { class FiveDimJumpBakedConfig; }
namespace RPG::GameCore { class FiveDimLadderBakedConfig; }
namespace RPG::GameCore { class FiveDimLedgeBakedConfig; }
namespace RPG::GameCore { class FiveDimMiscMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimMoveBakedConfig; }
namespace RPG::GameCore { class FiveDimPhysicsBakedConfig; }
namespace RPG::GameCore { class FiveDimWallBakedConfig; }

#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C99E0)
#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C99F0)
#define RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C99B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMoveBakedConfig_TypeDefinitionIndex = 16661;

	class FiveDimMoveBakedConfig : public ::RPG::GameCore::LittleGameEntityMoveBakedConfig
	{
	public:
		::System::Single UnitLength; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FiveDimPhysicsBakedConfig* PhysicsBakedConfig; // 0x18
		::RPG::GameCore::FiveDimGroundBakedConfig* GroundBakedConfig; // 0x20
		::RPG::GameCore::FiveDimJumpBakedConfig* JumpBakedConfig; // 0x28
		::RPG::GameCore::FiveDimWallBakedConfig* WallBakedConfig; // 0x30
		::RPG::GameCore::FiveDimLadderBakedConfig* LadderBakedConfig; // 0x38
		::RPG::GameCore::FiveDimLedgeBakedConfig* LedgeBakedConfig; // 0x40
		::RPG::GameCore::FiveDimConveyorBakedConfig* ConveyorBakedConfig; // 0x48
		::RPG::GameCore::FiveDimMiscMoveBakedConfig* MiscBakedConfig; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveBakedConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveBakedConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVEBAKEDCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
