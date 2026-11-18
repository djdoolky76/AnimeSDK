#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OPFLPOKNAEF.h"
#include "unitysdk/System/ValueType.h"

class EKOBFMLBADH;

#define NIADGBKPEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x6C9F50)

inline static constexpr unsigned int NIADGBKPEAK_TypeDefinitionIndex = 72166;

struct alignas(8) NIADGBKPEAK
{
	::EKOBFMLBADH* MFKJLJJGHJF; // 0x10
	::OPFLPOKNAEF EKDCELDLOGH; // 0x18

	::System::Void _ctor(::EKOBFMLBADH* HLFFCMIFFIB, ::OPFLPOKNAEF& MNOMCCLBJAO)
	{
		return ((::System::Void(*)(::PVOID, ::EKOBFMLBADH*, ::OPFLPOKNAEF&))((::PBYTE)hIl2Cpp + NIADGBKPEAK__CTOR_OFFSET))(this, HLFFCMIFFIB, MNOMCCLBJAO);
	}
};
