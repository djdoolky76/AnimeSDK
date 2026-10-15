#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraShakeSpaceType.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CurveShakeConfig; }
namespace RPG::GameCore { class ShakeDistanceAttenuation; }
namespace RPG::GameCore { class VCameraShakeV2; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERASHAKEV2_CHBIILFGEJA_OFFSET UNITYSDK_OFFSET(0x1DC7FA90)
#define RPG_GAMECORE_VCAMERASHAKEV2_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7FA30)
#define RPG_GAMECORE_VCAMERASHAKEV2_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7C720)

namespace RPG::GameCore
{
	inline static constexpr unsigned int VCameraShakeV2_TypeDefinitionIndex = 16417;

	class VCameraShakeV2 : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean ExportToJson; // 0x10
		::System::Boolean DontAddOnCameraPause; // 0x11
		::System::Byte _padding0[0x2];
		::System::Single ShakeScale; // 0x14
		::System::Single ShakeRange; // 0x18
		::System::Single PositionAmplitude; // 0x1C
		::System::Single ShakeTime; // 0x20
		::System::Single LoopTime; // 0x24
		::System::Boolean IsUseFullPeriod; // 0x28
		::System::Boolean HalfPeriodCorrection; // 0x29
		::System::Byte _padding1[0x2];
		::System::Single ShakeDistance; // 0x2C
		::RPG::GameCore::VCameraShakeSpaceType ShakeSpaceType; // 0x30
		::RPG::MVector3 ShakeDir; // 0x34
		::System::Boolean BaseOnCamera; // 0x40
		::System::Boolean LerpBackAfterShake; // 0x41
		::System::Byte _padding2[0x2];
		::System::Single BaseCycle; // 0x44
		::System::Single CycleDamping; // 0x48
		::System::Single RangeAttenuation; // 0x4C
		::System::Single RangeAttenuationDelay; // 0x50
		::System::Single RangeAttenuationTarget; // 0x54
		::System::Single RangeAttenuationDuration; // 0x58
		::RPG::MVector3 PerlinNoiseAmplitude; // 0x5C
		::RPG::MVector3 PerlinNoiseFreq; // 0x68
		::System::Boolean IsUseFullPeriodNoise; // 0x74
		::System::Boolean IsUseFullSampleRangeNoise; // 0x75
		::System::Boolean IsUsePositionNoise; // 0x76
		::System::Boolean IsUseRotationNoise; // 0x77
		::System::String* ShakeRangeCurvePath; // 0x78
		::System::String* BaseCycleCurvePath; // 0x80
		::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>* PosCurveShakeConfigList; // 0x88
		::Il2CppArray<::RPG::GameCore::CurveShakeConfig*>* RotCurveShakeConfigList; // 0x90
		::RPG::MVector3 RotationalAmplitude; // 0x98
		::System::Single RotationalFreq; // 0xA4
		::RPG::MVector3 RotationFreqV3; // 0xA8
		::System::Boolean MaxAttenuationProtect; // 0xB4
		::System::Byte _padding3[0x3];
		::RPG::GameCore::ShakeDistanceAttenuation* DistanceAttenuation; // 0xB8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHAKEV2_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraShakeV2* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraShakeV2*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHAKEV2_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		::RPG::GameCore::VCameraShakeV2* CHBIILFGEJA()
		{
			return ((::RPG::GameCore::VCameraShakeV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERASHAKEV2_CHBIILFGEJA_OFFSET))(this);
		}

	};
}
