#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NEJLIGKNHCC_EKNIEMDJPLN_CTOR_OFFSET UNITYSDK_OFFSET(0x20250)

inline static constexpr unsigned int NEJLIGKNHCC_EKNIEMDJPLN_TypeDefinitionIndex = 69294;

	struct alignas(4) NEJLIGKNHCC_EKNIEMDJPLN
	{
		::System::Int64 PKILDBNDGCN; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
		::System::Single BAFIOGNBNHJ; // 0x24
		::System::Boolean KKKIONIDKFA; // 0x28
		::System::Void _ctor(::System::Int64 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_EKNIEMDJPLN_CTOR_OFFSET))(this, a1, a2);
		}

	};
