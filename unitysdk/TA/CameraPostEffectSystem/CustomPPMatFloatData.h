#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/CameraPostEffectSystem/CustomPPMatBaseData.h"

#define TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATFLOATDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int CustomPPMatFloatData_TypeDefinitionIndex = 16087;

	class CustomPPMatFloatData : public ::TA::CameraPostEffectSystem::CustomPPMatBaseData
	{
	public:
		::System::Single Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATFLOATDATA__CTOR_OFFSET))(this);
		}
	};
}
