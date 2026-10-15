#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelFloorMapInfoConfig; }
namespace RPG::GameCore { class FourRotateVoxelMapInfoConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EE590)
#define RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EE440)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelFloorMapInfoConfig_TypeDefinitionIndex = 16745;

	class FourRotateVoxelFloorMapInfoConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 GroupID; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::FourRotateVoxelMapInfoConfig*>* MapInfoConfigs; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelFloorMapInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELFLOORMAPINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
