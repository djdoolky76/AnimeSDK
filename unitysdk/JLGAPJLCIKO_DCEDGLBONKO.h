#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define JLGAPJLCIKO_DCEDGLBONKO_CTOR_OFFSET UNITYSDK_OFFSET(0x15A0)

inline static constexpr unsigned int JLGAPJLCIKO_DCEDGLBONKO_TypeDefinitionIndex = 70680;

	struct alignas(4) JLGAPJLCIKO_DCEDGLBONKO
	{
		::UnityEngine::Vector3 JJCBICIJEIM; // 0x10
		::UnityEngine::Vector3 EHNHNANECFJ; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JLGAPJLCIKO_DCEDGLBONKO_CTOR_OFFSET))(this, a1, a2);
		}

	};
