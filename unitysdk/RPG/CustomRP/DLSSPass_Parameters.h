#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/CustomRP/DLSSPass_CameraParameters.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int DLSSPass_Parameters_TypeDefinitionIndex = 37555;

	struct alignas(4) DLSSPass_Parameters
	{
		::System::Boolean resetHistory; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single preExposure; // 0x14
		::RPG::CustomRP::DLSSPass_CameraParameters cameraParameters; // 0x18
	};
}
