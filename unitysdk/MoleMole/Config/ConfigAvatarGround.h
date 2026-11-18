#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB7EB0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigAvatarGround_TypeDefinitionIndex = 54575;

	class ConfigAvatarGround : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 SlopeVerticalVelocityMin; // 0x10
		::System::Single EnvironmentFeatureModifyDistanceMax; // 0x1C
		::System::Single GarvityAccelerated; // 0x20
		::System::Single FallOnWallAngleThreshold; // 0x24
		::System::Single GroundHeightThreshold; // 0x28
		::System::Single FallOnWallPullOutSpeed; // 0x2C
		::System::Single GroundSlopeAngleThreshold; // 0x30
		::UnityEngine::Vector3 GroundVelocityMin; // 0x34
		::System::Single FallOnWallHeightThreshold; // 0x40
		::System::Single GravityInitSpeed; // 0x44
		::System::Single GroundHeightThresholdLowAltitude; // 0x48
		::System::Single GroundFootStepAngleThreshold; // 0x4C
		::System::Boolean EnableEnvironmentFeature; // 0x50
		::System::Boolean GroundFootStepHighSpeed; // 0x51
		::System::Boolean EnablePosConstraint; // 0x52
		::System::Byte _padding0[0x1];
		::System::Single SphereCastRadius; // 0x54
		::System::Single SlopeVerticalVelocityFactor; // 0x58
		::System::Single EnvironmentFeatureQueryRange; // 0x5C
		::System::Single GroundSlopeDistThreshold; // 0x60
		::System::Single GroundFootStepVelocityThreshold; // 0x64

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGAVATARGROUND__CTOR_OFFSET))(this);
		}
	};
}
