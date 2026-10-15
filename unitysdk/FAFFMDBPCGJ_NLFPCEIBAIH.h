#pragma once
#include "unitysdk/unitysdk.h"
class FAFFMDBPCGJ_FDMAIMDKAPI;

#define FAFFMDBPCGJ_NLFPCEIBAIH_CTOR_OFFSET UNITYSDK_OFFSET(0x94B0)
#define FAFFMDBPCGJ_NLFPCEIBAIH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x2E761A0)

inline static constexpr unsigned int FAFFMDBPCGJ_NLFPCEIBAIH_TypeDefinitionIndex = 76733;

	struct alignas(8) FAFFMDBPCGJ_NLFPCEIBAIH
	{
		::FAFFMDBPCGJ_FDMAIMDKAPI* EEKLJJMFPJJ; // 0x10
		::System::Void _ctor(::FAFFMDBPCGJ_FDMAIMDKAPI* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FAFFMDBPCGJ_FDMAIMDKAPI*))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_NLFPCEIBAIH_CTOR_OFFSET))(this, a1);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FAFFMDBPCGJ_NLFPCEIBAIH_DISPOSE_OFFSET))(this);
		}

	};
