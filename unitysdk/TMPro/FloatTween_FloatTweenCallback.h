#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x1F2E5A10)

namespace TMPro
{
	inline static constexpr unsigned int FloatTween_FloatTweenCallback_TypeDefinitionIndex = 44555;

	class FloatTween_FloatTweenCallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET))(this);
		}

	};
}
