#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/TA/CameraPostEffectSystem/CustomPPMatBaseData.h"
#include "unitysdk/UnityEngine/E8984F4E44AE20E5.h"

#define TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATVECTOR4DATA__CTOR_OFFSET UNITYSDK_OFFSET(0x16514A0)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int CustomPPMatVector4Data_TypeDefinitionIndex = 16110;

	class CustomPPMatVector4Data : public ::TA::CameraPostEffectSystem::CustomPPMatBaseData
	{
	public:
		::UnityEngine::E8984F4E44AE20E5 Value; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATVECTOR4DATA__CTOR_OFFSET))(this);
		}
	};
}
