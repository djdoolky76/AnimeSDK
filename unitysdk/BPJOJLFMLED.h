#pragma once
#include "unitysdk/unitysdk.h"

#define BPJOJLFMLED_FJPACJAEBDM_OFFSET UNITYSDK_OFFSET(0x3E89640)
#define BPJOJLFMLED_OHKOLMODGMD_OFFSET UNITYSDK_OFFSET(0x3E896A0)

inline static constexpr unsigned int BPJOJLFMLED_TypeDefinitionIndex = 79954;

	struct alignas(4) BPJOJLFMLED
	{
		::System::Single JKDFIMCIKFJ; // 0x10
		::System::Single PMHMEGEJDGP; // 0x14
		::System::Single EDBIOAOHOFD; // 0x18
		::System::Boolean HPBDAOOGDHP; // 0x1C
		::System::Single FJPACJAEBDM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJOJLFMLED_FJPACJAEBDM_OFFSET))(this);
		}

		::System::Boolean OHKOLMODGMD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BPJOJLFMLED_OHKOLMODGMD_OFFSET))(this);
		}

	};
