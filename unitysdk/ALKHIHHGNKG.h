#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector2.h"
namespace UnityEngine { class Camera; }

#define ALKHIHHGNKG_CTOR_OFFSET UNITYSDK_OFFSET(0x10400)

inline static constexpr unsigned int ALKHIHHGNKG_TypeDefinitionIndex = 73053;

	struct alignas(8) ALKHIHHGNKG
	{
		::UnityEngine::Vector2 GBBBEOMKBPN; // 0x10
		::UnityEngine::Camera* ODPDOBEGCOE; // 0x18
		::System::Void _ctor(::UnityEngine::Vector2 a1, ::UnityEngine::Camera* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + ALKHIHHGNKG_CTOR_OFFSET))(this, a1, a2);
		}

	};
