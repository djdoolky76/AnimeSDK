#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }

#define PJPIEKNGCMC_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xDE5F0)
#define PJPIEKNGCMC_EQUALS_OFFSET UNITYSDK_OFFSET(0xDE570)
#define PJPIEKNGCMC_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xDE600)

inline static constexpr unsigned int PJPIEKNGCMC_TypeDefinitionIndex = 73816;

	struct alignas(4) PJPIEKNGCMC
	{
		::System::Int32 PCOMBGJBKBB; // 0x10
		::System::Int32 BIKLAFLEIOC; // 0x14
		::System::Boolean NCBLMJDAJPD; // 0x18
		::System::Boolean EBOBDAOGOPM; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 MPAJJCGFAKP; // 0x1C
		::System::Int32 NLODKEKDMOI; // 0x20
		/*
		::System::Boolean Equals(::PJPIEKNGCMC a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PJPIEKNGCMC))((::PBYTE)hIl2Cpp + PJPIEKNGCMC_EQUALS_OFFSET))(this, a1);
		}
		*/

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + PJPIEKNGCMC_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PJPIEKNGCMC_GETHASHCODE_OFFSET))(this);
		}

	};
