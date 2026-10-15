#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelCameraComponentConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6ED140)
#define RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6ED150)
#define RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6ED110)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelCameraComponentConfig_TypeDefinitionIndex = 16751;

	class FourRotateVoxelCameraComponentConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean IsCamera; // 0x10
		::System::Byte _padding0[0x7];
		::System::String* CameraPathRef; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelCameraComponentConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELCAMERACOMPONENTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
