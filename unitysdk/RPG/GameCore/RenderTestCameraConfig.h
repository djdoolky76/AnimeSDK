#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RenderTestCameraConfig; }

#define RPG_GAMECORE_RENDERTESTCAMERACONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D959F50)
#define RPG_GAMECORE_RENDERTESTCAMERACONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D959A60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RenderTestCameraConfig_TypeDefinitionIndex = 24400;

	class RenderTestCameraConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single ElevationRestrict; // 0x10
		::System::Single DepressionRestrict; // 0x14
		::System::Single CameraMoveRatio; // 0x18
		::System::Single MaxDistance; // 0x1C
		::System::Single MinDistance; // 0x20
		::System::Single LerpStartChest; // 0x24
		::System::Single LerpLengthChest; // 0x28
		::System::Single LerpStartFace; // 0x2C
		::System::Single LerpLengthFace; // 0x30
		::System::Single BodyHeight; // 0x34
		::System::Single ChestHeight; // 0x38
		::System::Single FaceHeight; // 0x3C
		::System::Single BodyFOV; // 0x40
		::System::Single ChestFOV; // 0x44
		::System::Single FaceFOV; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTCAMERACONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RenderTestCameraConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RenderTestCameraConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RENDERTESTCAMERACONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
