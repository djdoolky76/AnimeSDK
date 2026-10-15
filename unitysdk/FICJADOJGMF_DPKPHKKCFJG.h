#pragma once
#include "unitysdk/unitysdk.h"

#define FICJADOJGMF_DPKPHKKCFJG_CTOR_OFFSET UNITYSDK_OFFSET(0x2E776B0)

inline static constexpr unsigned int FICJADOJGMF_DPKPHKKCFJG_TypeDefinitionIndex = 68751;

	struct alignas(4) FICJADOJGMF_DPKPHKKCFJG
	{
		::System::Single GAFENHHEBPG; // 0x10
		::System::Int32 JBGAMCKONFK; // 0x14
		::System::Void _ctor(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FICJADOJGMF_DPKPHKKCFJG_CTOR_OFFSET))(this, a1, a2);
		}

	};
