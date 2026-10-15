#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define BINEKJFCLMP_CTOR_OFFSET UNITYSDK_OFFSET(0x1A700)

	struct alignas(4) BINEKJFCLMP
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + BINEKJFCLMP_CTOR_OFFSET))(this, a1, a2);
		}

	};
