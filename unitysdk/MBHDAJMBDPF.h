#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEJMAKLBMOO.h"
#include "unitysdk/IDNEKBMBOLN.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MBHDAJMBDPF_CDLHPOIOBLJ_OFFSET UNITYSDK_OFFSET(0x18E03100)
#define MBHDAJMBDPF__CTOR_OFFSET UNITYSDK_OFFSET(0x18E030F0)

inline static constexpr unsigned int MBHDAJMBDPF_TypeDefinitionIndex = 11323;

class MBHDAJMBDPF : public ::AEJMAKLBMOO
{
public:
	::System::Int32 BELNJJKMMJP; // 0xA0

	::System::Void _ctor(::IDNEKBMBOLN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IDNEKBMBOLN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MBHDAJMBDPF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CDLHPOIOBLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MBHDAJMBDPF_CDLHPOIOBLJ_OFFSET))(this);
	}
};
