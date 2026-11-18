#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ELFBMHAHPIK.h"
#include "unitysdk/LHBJNJJCBPP.h"

class KGBFLHNJHHN;

#define FKLMEMBPANH_PMFCIGHLOKI_OFFSET UNITYSDK_OFFSET(0x1B109700)
#define FKLMEMBPANH__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1096E0)

inline static constexpr unsigned int FKLMEMBPANH_TypeDefinitionIndex = 12542;

class FKLMEMBPANH : public ::ELFBMHAHPIK
{
public:
	::System::Int32 PBJNMBABAGH; // 0x58

	::System::Void _ctor(::LHBJNJJCBPP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHBJNJJCBPP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FKLMEMBPANH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PMFCIGHLOKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FKLMEMBPANH_PMFCIGHLOKI_OFFSET))(this);
	}
};
