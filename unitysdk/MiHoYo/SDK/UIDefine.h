#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_UIDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C0127D0)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIDefine_TypeDefinitionIndex = 8213;

	class UIDefine : public ::System::Object
	{
	public:
		// static const ::System::Object AccountCharacterLimitNum; // 0x0
		// static const ::System::Object PasswordCharacterLimitNum; // 0x0
		// static const ::System::Object PhoneCharacterLimitNum; // 0x0
		// static const ::System::Object CodeCharacterLimitNum; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIDEFINE_CTOR_OFFSET))(this);
		}

	};
}
