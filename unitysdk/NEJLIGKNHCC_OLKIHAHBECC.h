#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NEJLIGKNHCC_OLKIHAHBECC_COMPARETO_OFFSET UNITYSDK_OFFSET(0x20460)
#define NEJLIGKNHCC_OLKIHAHBECC_CTOR_OFFSET UNITYSDK_OFFSET(0x20430)

inline static constexpr unsigned int NEJLIGKNHCC_OLKIHAHBECC_TypeDefinitionIndex = 69292;

	struct alignas(4) NEJLIGKNHCC_OLKIHAHBECC
	{
		::System::Int64 PKILDBNDGCN; // 0x10
		::UnityEngine::Vector3 BBFOLEOPPPL; // 0x18
		::System::Byte _padding0[0x4];
		::System::UInt64 NALMBOOCCIN; // 0x28
		::System::Void _ctor(::System::Int64 a1, ::UnityEngine::Vector3 a2, ::System::UInt64 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::UnityEngine::Vector3, ::System::UInt64))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_OLKIHAHBECC_CTOR_OFFSET))(this, a1, a2, a3);
		}

		/*
		::System::Int32 CompareTo(::NEJLIGKNHCC_OLKIHAHBECC a1)
		{
			return ((::System::Int32(*)(::PVOID, ::NEJLIGKNHCC_OLKIHAHBECC))((::PBYTE)hIl2Cpp + NEJLIGKNHCC_OLKIHAHBECC_COMPARETO_OFFSET))(this, a1);
		}
		*/

	};
