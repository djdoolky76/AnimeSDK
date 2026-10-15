#pragma once
#include "unitysdk/unitysdk.h"

#define EBOAPGFADNL_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C46350)

	struct alignas(4) EBOAPGFADNL
	{
		::System::Single DKEJJDHONBA; // 0x10
		::System::Single GAGIMHCEEAB; // 0x14
		::System::Single POGBHIAIKIC; // 0x18
		::System::Int32 NFMAONMNHJN; // 0x1C
		::System::Single PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EBOAPGFADNL_PEFLJDOKOIL_OFFSET))(this, a1);
		}

	};
