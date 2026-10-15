#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelLevelEnvConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C2270)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C20B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelEnvConfig_TypeDefinitionIndex = 16741;

	class FourRotateVoxelLevelEnvConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* EnvProfilePath; // 0x10
		::System::String* SkyboxPath; // 0x18
		::System::String* BGMGroupName; // 0x20
		::System::String* BGMStateName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelEnvConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELENVCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
