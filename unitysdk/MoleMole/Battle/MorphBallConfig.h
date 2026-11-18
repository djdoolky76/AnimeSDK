#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_BATTLE_MORPHBALLCONFIG_COPYFROM_OFFSET UNITYSDK_OFFSET(0x1921AB60)
#define MOLEMOLE_BATTLE_MORPHBALLCONFIG_NEW_OFFSET UNITYSDK_OFFSET(0x1921ACB0)
#define MOLEMOLE_BATTLE_MORPHBALLCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1921ADC0)

namespace MoleMole::Battle
{
	inline static constexpr unsigned int MorphBallConfig_TypeDefinitionIndex = 55676;

	class MorphBallConfig : public ::System::Object
	{
	public:
		::System::Single spinRollAngleThreshold; // 0x10
		::System::Single ballControlAttenuationThresholdRatio; // 0x14
		::System::Single downSlopeControlMaxSpeedScale; // 0x18
		::System::Single ballGroundDamping; // 0x1C
		::System::Single ballAcceleration; // 0x20
		::System::Single ballControlAirAttenuationRatio; // 0x24
		::System::Single upSlopeControlMaxSpeedScale; // 0x28
		::System::Single spinRollAccelerationRatioThreshold; // 0x2C
		::System::Single ballBrakingSpeedRatio; // 0x30
		::System::Single ballAirDamping; // 0x34
		::System::Single tireToMarbleSpeedThreshold; // 0x38
		::System::Single ballBrakingAcceleration; // 0x3C
		::System::Single alignedAngleThreshold; // 0x40
		::System::Single ballForwardMaxSpeed; // 0x44
		::System::Single wallSpinningSpeedRatioThreshold; // 0x48
		::System::Single forceToLeanGain; // 0x4C
		::System::Single spinRollSpeedThreshold; // 0x50
		::System::Single wallBounceMaxSpeed; // 0x54
		::System::Single inputDeadZone; // 0x58
		::System::Single spinRollTorqueDrag; // 0x5C
		::System::Single downSlopeControlAccelerationScale; // 0x60
		::System::Single minimumAlignmentSpeed; // 0x64
		::System::Single upSlopeControlAccelerationScale; // 0x68
		::System::Single marbleToTireSpeedThreshold; // 0x6C
		::System::Single wallAngleThreshold; // 0x70
		::System::Single ballGravity; // 0x74
		::System::Int32 tireLeanAngleAvgWindow; // 0x78
		::System::Single fullSlopeAngle; // 0x7C
		::System::Single wallBounceness; // 0x80
		::System::Single spinRollTorqueRatio; // 0x84
		::System::Single marbleAlignmentAngularSpeed; // 0x88
		::System::Single accelerationDeadZone; // 0x8C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLCONFIG__CTOR_OFFSET))(this);
		}

		::System::Void CopyFrom(::MoleMole::Battle::MorphBallConfig* other)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::MorphBallConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLCONFIG_COPYFROM_OFFSET))(this, other);
		}

		static ::MoleMole::Battle::MorphBallConfig* New(::MoleMole::Battle::MorphBallConfig* other)
		{
			return ((::MoleMole::Battle::MorphBallConfig*(*)(::MoleMole::Battle::MorphBallConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLE_MORPHBALLCONFIG_NEW_OFFSET))(other);
		}
	};
}
