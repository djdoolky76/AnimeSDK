#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraFreelook3rdExtraParams; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC51AF0)
#define RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC51530)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraFreelook3rdExtraParams_TypeDefinitionIndex = 16410;

	class VCameraFreelook3rdExtraParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean EnableRigParamSettings; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 HeightGradient; // 0x14
		::RPG::MVector3 RadiusGradient; // 0x20
		::RPG::MVector2 AxisYRangeOverride; // 0x2C
		::System::Byte _padding1[0x4];
		::System::String* EnableAxisYRangeOverride; // 0x38
		::System::Boolean EnableCorrectionSettings; // 0x40
		::System::Byte _padding2[0x3];
		::RPG::MVector2 InputCorrectionPitchRange; // 0x44
		::System::Single LockedFieldOfViewRatio; // 0x4C
		::System::Boolean EnableExtraProtect; // 0x50
		::System::Byte _padding3[0x3];
		::System::Single ExtraProtectCameraRadius; // 0x54
		::System::Boolean DisableDefaultExtraProtect; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraFreelook3rdExtraParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraFreelook3rdExtraParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERAFREELOOK3RDEXTRAPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
