#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

#define MIHOYO_SDK_ANIMATIONHANDLER_A4D4CEA025C1E90D_OFFSET UNITYSDK_OFFSET(0x29E6690)
#define MIHOYO_SDK_ANIMATIONHANDLER_A60DFF51A4A4DB4A_OFFSET UNITYSDK_OFFSET(0x29E63A0)
#define MIHOYO_SDK_ANIMATIONHANDLER_E18713A72BA2C73A_OFFSET UNITYSDK_OFFSET(0x29E6480)
#define MIHOYO_SDK_ANIMATIONHANDLER_FB81F2F03E401EC7_OFFSET UNITYSDK_OFFSET(0x29E6560)
#define MIHOYO_SDK_ANIMATIONHANDLER__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK
{
	inline static constexpr unsigned int AnimationHandler_TypeDefinitionIndex = 15835;

	class AnimationHandler : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Void A4D4CEA025C1E90D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_A4D4CEA025C1E90D_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER__CTOR_OFFSET))(this);
		}

		::System::Void E18713A72BA2C73A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_E18713A72BA2C73A_OFFSET))(this);
		}

		::System::Void A60DFF51A4A4DB4A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_A60DFF51A4A4DB4A_OFFSET))(this);
		}

		::System::Void FB81F2F03E401EC7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_ANIMATIONHANDLER_FB81F2F03E401EC7_OFFSET))(this);
		}
	};
}
