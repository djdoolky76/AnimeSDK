#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class DAKLNGHMPBO;
class HIJOAGCMGGF;

#define OAJJCNFKIBI_JLEOEPMINAA_OFFSET UNITYSDK_OFFSET(0x67F120)

inline static constexpr unsigned int OAJJCNFKIBI_TypeDefinitionIndex = 57420;

struct alignas(8) OAJJCNFKIBI
{
	::System::Int32 CKELOFDFEEM; // 0x10
	::System::Byte _padding0[0x4];
	::DAKLNGHMPBO* MHKJIJNFHPF; // 0x18

	::HIJOAGCMGGF* JLEOEPMINAA(::System::UInt32 AOCOIDIMLIH)
	{
		return ((::HIJOAGCMGGF*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OAJJCNFKIBI_JLEOEPMINAA_OFFSET))(this, AOCOIDIMLIH);
	}
};
