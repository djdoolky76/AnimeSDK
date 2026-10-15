#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM_ABTESTRESCODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC31B10)

namespace MiHoYo::SDK::Base::ABTestPlatform::Const
{
	class ABTestGeneralParam_ABTestResCode : public ::System::Object
	{
	public:
		// static const ::System::Object ENTER_EXPERIMENT; // 0x0
		// static const ::System::Object ENTER; // 0x0
		// static const ::System::Object NOT_ENTER_EXPERIMENT; // 0x0
		// static const ::System::Object SCENE_ERROR; // 0x0
		// static const ::System::Object EXPERIMENT_ERROR; // 0x0
		// static const ::System::Object ENTER_SCENE_NOT_ENTER_EXPERIMENT; // 0x0
		// static const ::System::Object NOT_TAGGED_USER; // 0x0
		// static const ::System::Object ENTER_EMPTY_BUCKET; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_BASE_ABTESTPLATFORM_CONST_ABTESTGENERALPARAM_ABTESTRESCODE_CTOR_OFFSET))(this);
		}

	};
}
