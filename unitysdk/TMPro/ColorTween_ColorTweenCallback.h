#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_COLORTWEEN_COLORTWEENCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x19B8A8B0)

namespace TMPro
{
	inline static constexpr unsigned int ColorTween_ColorTweenCallback_TypeDefinitionIndex = 45628;

	class ColorTween_ColorTweenCallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_COLORTWEEN_COLORTWEENCALLBACK_CTOR_OFFSET))(this);
		}

	};
}
