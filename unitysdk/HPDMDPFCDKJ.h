#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HPDMDPFCDKJ_CTOR_OFFSET UNITYSDK_OFFSET(0x202EFC0)

inline static constexpr unsigned int HPDMDPFCDKJ_TypeDefinitionIndex = 57791;

	struct alignas(4) HPDMDPFCDKJ
	{
		::UnityEngine::Vector3 IKINMNCCKJI; // 0x10
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HPDMDPFCDKJ_CTOR_OFFSET))(this, a1);
		}

	};
