#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class Sprite; }

#define MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE_FDBCDBBFE02CD51A_OFFSET UNITYSDK_OFFSET(0x39D0390)
#define MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE__CTOR_OFFSET UNITYSDK_OFFSET(0x176D770)

namespace MiHoYo::SDK::Console
{
	inline static constexpr unsigned int ConsoleButtonImage_TypeDefinitionIndex = 12679;

	class ConsoleButtonImage : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::Sprite* PS4Sprite; // 0x20
		::UnityEngine::Sprite* PS5Sprite; // 0x28
		::UnityEngine::Sprite* CXSprite; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE__CTOR_OFFSET))(this);
		}

		::System::Void FDBCDBBFE02CD51A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_CONSOLE_CONSOLEBUTTONIMAGE_FDBCDBBFE02CD51A_OFFSET))(this);
		}
	};
}
