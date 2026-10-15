#pragma once
#include "unitysdk/unitysdk.h"

#define LDODNIJEDOA_GJMGCDBHLOH_FHAKABPDEOE_OFFSET UNITYSDK_OFFSET(0x184E0)

inline static constexpr unsigned int LDODNIJEDOA_GJMGCDBHLOH_TypeDefinitionIndex = 77137;

	struct alignas(4) LDODNIJEDOA_GJMGCDBHLOH
	{
		::System::Boolean KGOEKLJCAOE; // 0x10
		::System::Boolean OJABDFLJMAE; // 0x11
		::System::Boolean ONMLNEADCLC; // 0x12
		::System::Boolean CLCFOKJJLCL; // 0x13
		::System::Boolean FHAKABPDEOE()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LDODNIJEDOA_GJMGCDBHLOH_FHAKABPDEOE_OFFSET))(this);
		}

	};
