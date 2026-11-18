#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class BAMCLBBFMBD;

#define BAMCLBBFMBD_AHJEEHCNBLF__CTOR_OFFSET UNITYSDK_OFFSET(0x6E1520)

inline static constexpr unsigned int BAMCLBBFMBD_AHJEEHCNBLF_TypeDefinitionIndex = 64669;

struct alignas(4) BAMCLBBFMBD_AHJEEHCNBLF
{
	::System::Int32 NOCEJKJAHJC; // 0x10
	::System::UInt32 HAPEPFAGBPG; // 0x14

	::System::Void _ctor(::BAMCLBBFMBD* IPMMCGDMODG)
	{
		return ((::System::Void(*)(::PVOID, ::BAMCLBBFMBD*))((::PBYTE)hIl2Cpp + BAMCLBBFMBD_AHJEEHCNBLF__CTOR_OFFSET))(this, IPMMCGDMODG);
	}
};
