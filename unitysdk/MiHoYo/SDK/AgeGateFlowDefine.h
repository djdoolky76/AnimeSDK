#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATEFLOWDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC29D10)

namespace MiHoYo::SDK
{
	class AgeGateFlowDefine : public ::System::Object
	{
	public:
		// static const ::System::Object COMBO; // 0x0
		// static const ::System::Object ACCOUNT_PLATFORM; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATEFLOWDEFINE_CTOR_OFFSET))(this);
		}

	};
}
