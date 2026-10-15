#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CINEMACHINE_VIEWPORTCOMPOSITION_FJCOLNKJLBO_OFFSET UNITYSDK_OFFSET(0xF0CC0)
#define CINEMACHINE_VIEWPORTCOMPOSITION_PGCHGHNMIPH_OFFSET UNITYSDK_OFFSET(0xF0D10)

namespace Cinemachine
{
	struct alignas(4) ViewportComposition
	{
		::System::Single X; // 0x10
		::System::Single Y; // 0x14
		::UnityEngine::Vector2 FJCOLNKJLBO()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_VIEWPORTCOMPOSITION_FJCOLNKJLBO_OFFSET))(this);
		}

		::System::Void PGCHGHNMIPH(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CINEMACHINE_VIEWPORTCOMPOSITION_PGCHGHNMIPH_OFFSET))(this, a1);
		}

	};
}
