#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NJNBLECJIEE.h"
#include "unitysdk/GMPJBHAPOPD.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DBMLGNBFJCD_HOADIDCEOIA_OFFSET UNITYSDK_OFFSET(0x17F175C0)
#define DBMLGNBFJCD__CTOR_OFFSET UNITYSDK_OFFSET(0x17F175B0)

inline static constexpr unsigned int DBMLGNBFJCD_TypeDefinitionIndex = 10064;

class DBMLGNBFJCD : public ::NJNBLECJIEE
{
public:
	::System::Void _ctor(::GMPJBHAPOPD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GMPJBHAPOPD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DBMLGNBFJCD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* HOADIDCEOIA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBMLGNBFJCD_HOADIDCEOIA_OFFSET))(this);
	}
};
