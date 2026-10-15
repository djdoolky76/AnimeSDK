#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NEJLIGKNHCC_PDGFGBACAFH_CTOR_OFFSET UNITYSDK_OFFSET(0x10D20)

inline static constexpr unsigned int NEJLIGKNHCC_PDGFGBACAFH_TypeDefinitionIndex = 69295;

	struct alignas(4) NEJLIGKNHCC_PDGFGBACAFH
	{
		::System::Int64 PKILDBNDGCN; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
		::System::Void _ctor(::System::Int64 a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_PDGFGBACAFH_CTOR_OFFSET))(this, a1, a2);
		}

	};
