#pragma once
#include "unitysdk/unitysdk.h"

#define MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x131DA0F0)

namespace MoleMole::Config::CameraSequence::Utils
{
	inline static constexpr unsigned int CameraRotationBasedOnEntityPolicy_TypeDefinitionIndex = 62939;

	class CameraRotationBasedOnEntityPolicy
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CAMERASEQUENCE_UTILS_CAMERAROTATIONBASEDONENTITYPOLICY__CTOR_OFFSET))(this);
		}
	};
}
