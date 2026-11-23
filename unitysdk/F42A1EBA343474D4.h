#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine::Playables { class PlayableDirector; }

#define F42A1EBA343474D4_A22854B5C8A4B5AF_OFFSET UNITYSDK_OFFSET(0x2196C20)

inline static constexpr unsigned int F42A1EBA343474D4_TypeDefinitionIndex = 8733;

struct alignas(4) F42A1EBA343474D4
{
	::System::Void A22854B5C8A4B5AF(::UnityEngine::Playables::PlayableDirector* A9F0E1077186BAC8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + F42A1EBA343474D4_A22854B5C8A4B5AF_OFFSET))(this, A9F0E1077186BAC8);
	}
};
