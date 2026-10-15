#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_COLORTWEEN_COLORTWEENCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E53A0)

namespace TMPro
{
	inline static constexpr unsigned int ColorTween_ColorTweenCallback_TypeDefinitionIndex = 44553;

	class ColorTween_ColorTweenCallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_COLORTWEENCALLBACK_CTOR_OFFSET))(this);
		}

	};
}
