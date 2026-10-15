#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelRotatePlatformConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C40A0)
#define RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C40B0)
#define RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C4050)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelRotatePlatformConfig_TypeDefinitionIndex = 16760;

	class FourRotateVoxelRotatePlatformConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsRotatePlatform; // 0x10
		::System::Boolean IsClockwise; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::MVector2 RotateRandomInterval; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelRotatePlatformConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELROTATEPLATFORMCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
