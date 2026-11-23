#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class AB642D1382756991;
namespace System { class String; }
namespace UnityEngine::Playables { class PlayableDirector; }

#define E9D742AFEBA90EF4_A22854B5C8A4B5AF_OFFSET UNITYSDK_OFFSET(0x1F6C350)

inline static constexpr unsigned int E9D742AFEBA90EF4_TypeDefinitionIndex = 7776;

struct alignas(8) E9D742AFEBA90EF4
{
	::System::String* A85CBAFB8F5E7F30; // 0x10
	::AB642D1382756991* B9D26B8D64A56047; // 0x18

	::System::Void A22854B5C8A4B5AF(::UnityEngine::Playables::PlayableDirector* A9F0E1077186BAC8)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*))((::PBYTE)hIl2Cpp + E9D742AFEBA90EF4_A22854B5C8A4B5AF_OFFSET))(this, A9F0E1077186BAC8);
	}
};
