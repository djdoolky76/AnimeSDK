#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BLOFHFCGJHA.h"
#include "unitysdk/BPMJLIFOPNG_Direction.h"
class CBGGOEJGLIC;

#define BPMJLIFOPNG_CTOR_OFFSET UNITYSDK_OFFSET(0xC1AA850)
#define BPMJLIFOPNG_GHDFDJALJDA_OFFSET UNITYSDK_OFFSET(0xC1AA970)

	class BPMJLIFOPNG : public ::BLOFHFCGJHA
	{
	public:
		::BPMJLIFOPNG_Direction BGNACBGBMHG; // 0x20
		::System::Void _ctor(::BPMJLIFOPNG_Direction a1)
		{
			return ((::System::Void(*)(::PVOID, ::BPMJLIFOPNG_Direction))((::PBYTE)hIl2Cpp + BPMJLIFOPNG_CTOR_OFFSET))(this, a1);
		}

		::System::Void GHDFDJALJDA(::CBGGOEJGLIC* a1)
		{
			return ((::System::Void(*)(::PVOID, ::CBGGOEJGLIC*))((::PBYTE)hIl2Cpp + BPMJLIFOPNG_GHDFDJALJDA_OFFSET))(this, a1);
		}

	};
