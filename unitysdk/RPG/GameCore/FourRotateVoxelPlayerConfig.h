#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayerActionConfig; }
namespace RPG::GameCore { class FourRotateVoxelPlayerConfig; }
namespace RPG::GameCore { class FourRotateVoxelPlayerEffectConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C34E0)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C0CA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayerConfig_TypeDefinitionIndex = 16737;

	class FourRotateVoxelPlayerConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FourRotateVoxelPlayerEffectConfig* EffectConfig; // 0x10
		::RPG::GameCore::FiveDimPlayerActionConfig* InteractConfig; // 0x18
		::RPG::GameCore::FiveDimPlayerActionConfig* DeadActions; // 0x20
		::RPG::GameCore::FiveDimPlayerActionConfig* ResetActions; // 0x28
		::RPG::GameCore::FiveDimPlayerActionConfig* MediumLandActions; // 0x30
		::RPG::GameCore::FiveDimPlayerActionConfig* HeavyLandActions; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPlayerConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPlayerConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
