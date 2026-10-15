#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HMPEMGIONCJ_CTOR_OFFSET UNITYSDK_OFFSET(0x202EFC0)

	struct alignas(4) HMPEMGIONCJ
	{
		::UnityEngine::Vector3 IKINMNCCKJI; // 0x10
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HMPEMGIONCJ_CTOR_OFFSET))(this, a1);
		}

	};
