#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EFIFKJHLKCF.h"
#include "unitysdk/System/Object.h"

class JGBMOOJHMBF;

#define AKGKKCGGEAH_PBINFFJLMLC_JIDIGFKEDNB_OFFSET UNITYSDK_OFFSET(0x14223B80)
#define AKGKKCGGEAH_PBINFFJLMLC__CTOR_OFFSET UNITYSDK_OFFSET(0x14223B70)

inline static constexpr unsigned int AKGKKCGGEAH_PBINFFJLMLC_TypeDefinitionIndex = 64523;

class AKGKKCGGEAH_PBINFFJLMLC : public ::System::Object
{
public:
	::EFIFKJHLKCF KBLKINCFHBB; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKGKKCGGEAH_PBINFFJLMLC__CTOR_OFFSET))(this);
	}

	::System::Void JIDIGFKEDNB(::JGBMOOJHMBF* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::JGBMOOJHMBF*))((::PBYTE)hIl2Cpp + AKGKKCGGEAH_PBINFFJLMLC_JIDIGFKEDNB_OFFSET))(this, HMMMOCJAEOA);
	}
};
