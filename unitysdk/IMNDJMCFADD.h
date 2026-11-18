#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HKFCMBOFLKF.h"
#include "unitysdk/IMNDJMCFADD_FIFEANIGJNF.h"
#include "unitysdk/HAKMCMBCDIN.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IMNDJMCFADD_ILJOBKKPEAN_OFFSET UNITYSDK_OFFSET(0x1A4FD9E0)
#define IMNDJMCFADD__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4FD9D0)

inline static constexpr unsigned int IMNDJMCFADD_TypeDefinitionIndex = 10101;

class IMNDJMCFADD : public ::HKFCMBOFLKF
{
public:
	::System::Void _ctor(::HAKMCMBCDIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HAKMCMBCDIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IMNDJMCFADD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* ILJOBKKPEAN(::IMNDJMCFADD_FIFEANIGJNF GJBHEJGENMI)
	{
		return ((::System::String*(*)(::PVOID, ::IMNDJMCFADD_FIFEANIGJNF))((::PBYTE)hIl2Cpp + IMNDJMCFADD_ILJOBKKPEAN_OFFSET))(this, GJBHEJGENMI);
	}
};
