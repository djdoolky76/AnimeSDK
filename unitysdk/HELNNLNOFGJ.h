#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define HELNNLNOFGJ_CTOR_OFFSET UNITYSDK_OFFSET(0x202EFC0)

inline static constexpr unsigned int HELNNLNOFGJ_TypeDefinitionIndex = 71103;

	struct alignas(4) HELNNLNOFGJ
	{
		::UnityEngine::Vector3 IKINMNCCKJI; // 0x10
		::System::Void _ctor(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + HELNNLNOFGJ_CTOR_OFFSET))(this, a1);
		}

	};
