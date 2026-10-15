#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAKCNNBAHEP.h"

#define BPFLOGNFMBO_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC37F20)
#define BPFLOGNFMBO_DPMJELFJBBE_OFFSET UNITYSDK_OFFSET(0x1EC37F40)

inline static constexpr unsigned int BPFLOGNFMBO_TypeDefinitionIndex = 44195;

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
