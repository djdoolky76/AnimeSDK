#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FourRotateVoxelCameraConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED340)
#define RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ED260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelCameraConfig_TypeDefinitionIndex = 16738;

	class FourRotateVoxelCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FiveDimCameraLensConfig* Lens; // 0x10
		::RPG::GameCore::FiveDimCameraFollowConfig* Follow; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
