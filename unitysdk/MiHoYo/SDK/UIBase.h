#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_UIBASE_A9102E2367C7116B_OFFSET UNITYSDK_OFFSET(0x3976800)
#define MIHOYO_SDK_UIBASE_BBAF4324AA02C1B3_OFFSET UNITYSDK_OFFSET(0x39767A0)
#define MIHOYO_SDK_UIBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int UIBase_TypeDefinitionIndex = 12488;

	class UIBase : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void BBAF4324AA02C1B3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE_BBAF4324AA02C1B3_OFFSET))(this);
		}

		::System::Void A9102E2367C7116B(::System::Boolean E937D4885DAA1AE8)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE_A9102E2367C7116B_OFFSET))(this, E937D4885DAA1AE8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_UIBASE__CTOR_OFFSET))(this);
		}
	};
}
