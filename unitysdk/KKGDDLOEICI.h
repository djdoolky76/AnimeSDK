#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBLNDPDFHBH.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/MOIKGHEODAI.h"

class KGBFLHNJHHN;

#define KKGDDLOEICI_HBCDHGCAHPE_OFFSET UNITYSDK_OFFSET(0x1DAC8950)
#define KKGDDLOEICI__CTOR_OFFSET UNITYSDK_OFFSET(0x1DAC8940)

inline static constexpr unsigned int KKGDDLOEICI_TypeDefinitionIndex = 93806;

class KKGDDLOEICI : public ::OBLNDPDFHBH
{
public:
	::System::Nullable_1<::System::Single> GNADCDNGDIC; // 0x70

	::System::Void _ctor(::MOIKGHEODAI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOIKGHEODAI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KKGDDLOEICI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Single HBCDHGCAHPE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + KKGDDLOEICI_HBCDHGCAHPE_OFFSET))(this);
	}
};
