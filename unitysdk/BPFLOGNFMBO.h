#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAKCNNBAHEP.h"

#define BPFLOGNFMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC655C0)
#define BPFLOGNFMBO_DPMJELFJBBE_OFFSET UNITYSDK_OFFSET(0x1EC655E0)

	class BPFLOGNFMBO
	{
	public:
		::System::Void _ctor(::DAKCNNBAHEP a1)
		{
			return ((::System::Void(*)(::PVOID, ::DAKCNNBAHEP))((::PBYTE)hIl2Cpp + BPFLOGNFMBO_CTOR_OFFSET))(this, a1);
		}

		::System::Void DPMJELFJBBE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BPFLOGNFMBO_DPMJELFJBBE_OFFSET))(this);
		}

	};
