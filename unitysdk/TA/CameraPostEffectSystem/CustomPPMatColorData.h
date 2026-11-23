#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/CameraPostEffectSystem/CustomPPMatBaseData.h"
#include "unitysdk/UnityEngine/E46B881AA2636190.h"

#define TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATCOLORDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x28EE0C0)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int CustomPPMatColorData_TypeDefinitionIndex = 16442;

	class CustomPPMatColorData : public ::TA::CameraPostEffectSystem::CustomPPMatBaseData
	{
	public:
		::System::Boolean UseHRD; // 0x18
		::System::Byte _padding0[0x3];
		::UnityEngine::E46B881AA2636190 Value; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATCOLORDATA__CTOR_OFFSET))(this);
		}
	};
}
