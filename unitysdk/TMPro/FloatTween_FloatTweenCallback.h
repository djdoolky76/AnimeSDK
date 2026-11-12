#pragma once
#include "unitysdk/unitysdk.h"

#define TMPRO_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET UNITYSDK_OFFSET(0x20596880)

namespace TMPro
{
	inline static constexpr unsigned int FloatTween_FloatTweenCallback_TypeDefinitionIndex = 45630;

	class FloatTween_FloatTweenCallback
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TMPRO_FLOATTWEEN_FLOATTWEENCALLBACK_CTOR_OFFSET))(this);
		}

	};
}
