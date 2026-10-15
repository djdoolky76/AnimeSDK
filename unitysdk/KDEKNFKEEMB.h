#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FloorInstanceType.h"

#define KDEKNFKEEMB_FOEBLLFDCIH_OFFSET UNITYSDK_OFFSET(0x13840)

	struct alignas(4) KDEKNFKEEMB
	{
		::RPG::GameCore::FloorInstanceType DGCHNIHLCIF; // 0x10
		::System::UInt32 LLDCHLHNADA; // 0x14
		::System::UInt32 GDBJDAOOCOH; // 0x18
		::System::Void FOEBLLFDCIH(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + KDEKNFKEEMB_FOEBLLFDCIH_OFFSET))(this, a1, a2);
		}

	};
