#pragma once
#include "unitysdk/unitysdk.h"

#define CINEMACHINE_SINGLESHOTSETTINGS_CCTOR_OFFSET UNITYSDK_OFFSET(0xDF954F0)
#define CINEMACHINE_SINGLESHOTSETTINGS_DGCGLNOLDIB_OFFSET UNITYSDK_OFFSET(0xF0BE0)
#define CINEMACHINE_SINGLESHOTSETTINGS_NBHCPBBGAKA_OFFSET UNITYSDK_OFFSET(0xF0B70)

namespace Cinemachine
{
	inline static constexpr unsigned int SingleShotSettings_TypeDefinitionIndex = 49633;

	struct alignas(4) SingleShotSettings
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::System::Single ViewSize; // 0x18
		::System::Single Yaw; // 0x1C
		::System::Single Pitch; // 0x20
		static ::Cinemachine::SingleShotSettings* StaticGet_Default()
		{
			return (::Cinemachine::SingleShotSettings*)UnitySDK::FromName("Cinemachine", "SingleShotSettings")->GetStaticField(0x12E40);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + CINEMACHINE_SINGLESHOTSETTINGS_CCTOR_OFFSET))();
		}

		/*
		::Cinemachine::SingleShotSettings NBHCPBBGAKA()
		{
			return ((::Cinemachine::SingleShotSettings(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_SINGLESHOTSETTINGS_NBHCPBBGAKA_OFFSET))(this);
		}
		*/

		/*
		::System::Boolean DGCGLNOLDIB(::Cinemachine::SingleShotSettings a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Cinemachine::SingleShotSettings))((::PBYTE)hIl2Cpp + CINEMACHINE_SINGLESHOTSETTINGS_DGCGLNOLDIB_OFFSET))(this, a1);
		}
		*/

	};
}
