#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class FBMFHPMONGC;
namespace UnityEngine { class Animator; }

#define FBMFHPMONGC_GLJAKNDJFDC_FEJEKBDOPCE_OFFSET UNITYSDK_OFFSET(0x141910F0)
#define FBMFHPMONGC_GLJAKNDJFDC__CTOR_OFFSET UNITYSDK_OFFSET(0x141910E0)

inline static constexpr unsigned int FBMFHPMONGC_GLJAKNDJFDC_TypeDefinitionIndex = 50508;

class FBMFHPMONGC_GLJAKNDJFDC : public ::System::Object
{
public:
	::FBMFHPMONGC* KLHPEBKNIFB; // 0x10
	::UnityEngine::Animator* ICAAMDMMDDJ; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GLJAKNDJFDC__CTOR_OFFSET))(this);
	}

	::System::Boolean FEJEKBDOPCE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FBMFHPMONGC_GLJAKNDJFDC_FEJEKBDOPCE_OFFSET))(this);
	}
};
