#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/ComicEventBase.h"

#define UNITYENGINE_TIMELINE_KEYEVENTBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC353B0)

namespace UnityEngine::Timeline
{
	inline static constexpr unsigned int KeyEventBase_TypeDefinitionIndex = 32417;

	class KeyEventBase : public ::UnityEngine::Timeline::ComicEventBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_TIMELINE_KEYEVENTBASE__CTOR_OFFSET))(this);
		}
	};
}
