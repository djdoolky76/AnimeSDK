#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define DOGCOHFLPOH_CTOR_OFFSET UNITYSDK_OFFSET(0x1CBD840)

inline static constexpr unsigned int DOGCOHFLPOH_TypeDefinitionIndex = 73967;

	struct alignas(4) DOGCOHFLPOH
	{
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
		::System::Int32 CBHBHNLMDBI; // 0x1C
		::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + DOGCOHFLPOH_CTOR_OFFSET))(this, a1, a2);
		}

	};
