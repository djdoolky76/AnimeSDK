#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Sprite; }

#define MIHOYO_SDK_PS_PSBUTTONIMAGE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x3A1FD50)
#define MIHOYO_SDK_PS_PSBUTTONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int PSButtonImage_TypeDefinitionIndex = 12916;

	class PSButtonImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Sprite* PS4Sprite; // 0x20
		::UnityEngine::Sprite* PS5Sprite; // 0x28

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBUTTONIMAGE_FDBCDBBFE02CD51A_OFFSET))(this);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_PSBUTTONIMAGE__CTOR_OFFSET))(this);
		}
	};
}
