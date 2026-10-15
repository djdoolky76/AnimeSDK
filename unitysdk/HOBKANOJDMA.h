#pragma once
#include "unitysdk/unitysdk.h"

#define HOBKANOJDMA_CTOR_OFFSET UNITYSDK_OFFSET(0x11150)
#define HOBKANOJDMA_MJLLHMGLOHL_OFFSET UNITYSDK_OFFSET(0x2E80640)

inline static constexpr unsigned int HOBKANOJDMA_TypeDefinitionIndex = 62049;

	struct alignas(4) HOBKANOJDMA
	{
		::System::Int32 KDMHBDFCNMG; // 0x10
		::System::Int32 GLNJBPOLMCN; // 0x14
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + HOBKANOJDMA_CTOR_OFFSET))(this, a1, a2);
		}

		/*
		::System::Boolean MJLLHMGLOHL(::HOBKANOJDMA a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HOBKANOJDMA))((::PBYTE)hIl2Cpp + HOBKANOJDMA_MJLLHMGLOHL_OFFSET))(this, a1);
		}
		*/

	};
