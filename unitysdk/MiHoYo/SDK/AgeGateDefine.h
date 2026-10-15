#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_AGEGATEDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BC09720)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AgeGateDefine_TypeDefinitionIndex = 7551;

	class AgeGateDefine : public ::System::Object
	{
	public:
		// static const ::System::Object NO_AGE_GATE; // 0x0
		// static const ::System::Object AGE_GATE_REQUIRED; // 0x0
		// static const ::System::Object AGE_GATE_THIRDPARTY_USER_REGISTERY; // 0x0
		// static const ::System::Object ERROR; // 0x0
		// static const ::System::Object DISABLE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_AGEGATEDEFINE_CTOR_OFFSET))(this);
		}

	};
}
