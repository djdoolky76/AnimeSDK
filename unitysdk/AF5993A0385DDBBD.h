#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define AF5993A0385DDBBD_A22854B5C8A4B5AF_OFFSET UNITYSDK_OFFSET(0x21B1390)

inline static constexpr unsigned int AF5993A0385DDBBD_TypeDefinitionIndex = 8817;

struct alignas(8) AF5993A0385DDBBD
{
	::System::String* A85CBAFB8F5E7F30; // 0x10
	::UnityEngine::GameObject* AD16191B12439BCD; // 0x18

	::System::Void A22854B5C8A4B5AF(::UnityEngine::Playables::PlayableDirector* A9F0E1077186BAC8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + AF5993A0385DDBBD_A22854B5C8A4B5AF_OFFSET))(this, A9F0E1077186BAC8);
	}
};
