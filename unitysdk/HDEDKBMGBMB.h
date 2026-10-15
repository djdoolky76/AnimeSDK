#pragma once
#include "unitysdk/unitysdk.h"

#define HDEDKBMGBMB_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C49A70)

inline static constexpr unsigned int HDEDKBMGBMB_TypeDefinitionIndex = 6279;

	struct alignas(4) HDEDKBMGBMB
	{
		::System::Single DKEJJDHONBA; // 0x10
		::System::Single GAGIMHCEEAB; // 0x14
		::System::Single POGBHIAIKIC; // 0x18
		::System::Single KBHPEFCGECE; // 0x1C
		::System::Int32 NFMAONMNHJN; // 0x20
		::System::Single PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HDEDKBMGBMB_PEFLJDOKOIL_OFFSET))(this, a1);
		}

	};
