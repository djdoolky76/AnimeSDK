#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATBASEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TA::CameraPostEffectSystem
{
	inline static constexpr unsigned int CustomPPMatBaseData_TypeDefinitionIndex = 16031;

	class CustomPPMatBaseData : public ::System::Object
	{
	public:
		::System::String* Name; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TA_CAMERAPOSTEFFECTSYSTEM_CUSTOMPPMATBASEDATA__CTOR_OFFSET))(this);
		}
	};
}
