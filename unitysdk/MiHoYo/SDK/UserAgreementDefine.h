#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MIHOYO_SDK_USERAGREEMENTDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1BFE8270)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UserAgreementDefine_TypeDefinitionIndex = 7585;

	class UserAgreementDefine : public ::System::Object
	{
	public:
		// static const ::System::String* ENV; // 0x0
		// static const ::System::String* LANGUAGE; // 0x0
		// static const ::System::String* GAME_BIZ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_USERAGREEMENTDEFINE_CTOR_OFFSET))(this);
		}

	};
}
