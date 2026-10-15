#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelLevelCustomCameraParameterConfig; }

#define RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C20A0)
#define RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C1F30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelLevelCustomCameraParameterConfig_TypeDefinitionIndex = 16749;

	class FourRotateVoxelLevelCustomCameraParameterConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsUseCustomCameraParameter; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single TargetOrthographicSize; // 0x14
		::System::UInt32 StartCurveTargetEntityID; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelLevelCustomCameraParameterConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelLevelCustomCameraParameterConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELLEVELCUSTOMCAMERAPARAMETERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
