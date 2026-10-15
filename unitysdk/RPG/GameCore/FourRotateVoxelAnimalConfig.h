#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelAnimalConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6BF680)
#define RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6BF2A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelAnimalConfig_TypeDefinitionIndex = 16735;

	class FourRotateVoxelAnimalConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* UIProgressLockIconPath; // 0x10
		::System::String* UIProgressUnlockIconPath; // 0x18
		::System::Int32 UICollectionColor; // 0x20
		::System::Byte _padding0[0x4];
		::System::String* UIFinishPointIconPath; // 0x28
		::System::Int32 Brick2DMatIndex; // 0x30
		::System::Byte _padding1[0x4];
		::System::String* Brick2DMaterialPath; // 0x38
		::System::String* CastEffectPath; // 0x40
		::System::String* LiquidEffectPath; // 0x48
		::System::String* SprayEffectPath; // 0x50
		::System::String* SplashEffectPath; // 0x58
		::System::String* GatherEffectPath; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelAnimalConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelAnimalConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELANIMALCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
