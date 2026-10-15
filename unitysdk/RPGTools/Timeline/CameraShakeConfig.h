#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/MVector3.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPGTOOLS_TIMELINE_CAMERASHAKECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE8C3A90)
#define RPGTOOLS_TIMELINE_CAMERASHAKECONFIG_GNMNLFMLIPM_OFFSET UNITYSDK_OFFSET(0xE8C3720)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CameraShakeConfig_TypeDefinitionIndex = 47810;

	class CameraShakeConfig : public ::System::Object
	{
	public:
		::System::Boolean SimpleMode; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single ShakeRange; // 0x14
		::System::Single PositionAmplitude; // 0x18
		::UnityEngine::Vector3 ShakeDir; // 0x1C
		::System::Single Freq; // 0x28
		::System::Single ShakeTime; // 0x2C
		::System::Single RangeAttenuationDelay; // 0x30
		::System::Single RangeAttenuation; // 0x34
		::System::Single CycleDamping; // 0x38
		::System::Boolean UseFullPeriod; // 0x3C
		::System::Byte _padding1[0x3];
		::System::String* ShakeRangeCurvePath; // 0x40
		::System::String* BaseCycleCurvePath; // 0x48
		::RPG::MVector3 PerlinNoiseAmplitude; // 0x50
		::RPG::MVector3 PerlinNoiseFreq; // 0x5C
		::System::Boolean IsUseFullPeriodNoise; // 0x68
		::System::Boolean IsUsePositionNoise; // 0x69
		::System::Boolean IsUseRotationNoise; // 0x6A
		::System::Byte _padding2[0x1];
		::RPG::MVector3 RotationalAmplitude; // 0x6C
		::System::Single RotationalFreq; // 0x78
		::RPG::MVector3 RotationFreqV3; // 0x7C
		::RPG::MVector3 SimplePerlinNoiseAmplitude; // 0x88
		::RPG::MVector3 SimplePerlinNoiseFreq; // 0x94
		::System::Boolean UseAttenuation; // 0xA0
		::System::Byte _padding3[0x3];
		::System::Single SimpleShakeTime; // 0xA4
		::System::Single SimpleRangeAttenuationDelay; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECONFIG_CTOR_OFFSET))(this);
		}

		::RPG::GameCore::VCameraShakeV2* GNMNLFMLIPM()
		{
			return ((::RPG::GameCore::VCameraShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CAMERASHAKECONFIG_GNMNLFMLIPM_OFFSET))(this);
		}

	};
}
