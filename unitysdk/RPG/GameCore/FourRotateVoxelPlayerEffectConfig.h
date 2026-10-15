#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimPlayerEffectConfig; }
namespace RPG::GameCore { class FourRotateVoxelPlayerEffectConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F1020)
#define RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F0F70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelPlayerEffectConfig_TypeDefinitionIndex = 16736;

	class FourRotateVoxelPlayerEffectConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimPlayerEffectConfig* FiveDimEffectConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelPlayerEffectConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelPlayerEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELPLAYEREFFECTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
