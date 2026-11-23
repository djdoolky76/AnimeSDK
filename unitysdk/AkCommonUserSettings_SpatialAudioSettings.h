#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define AKCOMMONUSERSETTINGS_SPATIALAUDIOSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x2912800)

inline static constexpr unsigned int AkCommonUserSettings_SpatialAudioSettings_TypeDefinitionIndex = 19723;

class AkCommonUserSettings_SpatialAudioSettings : public ::System::Object
{
public:
	::System::UInt32 m_MaxSoundPropagationDepth; // 0x10
	::System::Single m_MovementThreshold; // 0x14
	::System::UInt32 m_NumberOfPrimaryRays; // 0x18
	::System::UInt32 m_MaxReflectionOrder; // 0x1C
	::System::UInt32 m_MaxDiffractionOrder; // 0x20
	::System::UInt32 m_DiffractionOnReflectionsOrder; // 0x24
	::System::UInt32 m_MaxEmitterRoomAuxSends; // 0x28
	::System::Single m_MaxPathLength; // 0x2C
	::System::Single m_CPULimitPercentage; // 0x30
	::System::Boolean m_EnableGeometricDiffractionAndTransmission; // 0x34
	::System::Boolean m_CalcEmitterVirtualPosition; // 0x35
	::System::Byte _padding0[0x2];
	::System::UInt32 m_LoadBalancingSpread; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKCOMMONUSERSETTINGS_SPATIALAUDIOSETTINGS__CTOR_OFFSET))(this);
	}
};
