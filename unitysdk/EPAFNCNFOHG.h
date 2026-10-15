#pragma once
#include "unitysdk/unitysdk.h"

#define EPAFNCNFOHG_PEFLJDOKOIL_OFFSET UNITYSDK_OFFSET(0x3C47910)

	struct alignas(4) EPAFNCNFOHG
	{
		::System::Single DKEJJDHONBA; // 0x10
		::System::Single GAGIMHCEEAB; // 0x14
		::System::Int32 NFMAONMNHJN; // 0x18
		::System::Single PEFLJDOKOIL(::System::Int32 a1)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + EPAFNCNFOHG_PEFLJDOKOIL_OFFSET))(this, a1);
		}

	};
