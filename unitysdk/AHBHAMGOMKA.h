#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDMDMDMIACM.h"
#include "unitysdk/PNIFOBDJCIC.h"
#include "unitysdk/OFBNGMGMOPK.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AHBHAMGOMKA_GBAPPOLJMAD_OFFSET UNITYSDK_OFFSET(0x1DC788D0)
#define AHBHAMGOMKA_GEGAAIGJCKO_OFFSET UNITYSDK_OFFSET(0x1DC78710)
#define AHBHAMGOMKA__CTOR_OFFSET UNITYSDK_OFFSET(0x1DC786E0)

inline static constexpr unsigned int AHBHAMGOMKA_TypeDefinitionIndex = 93560;

class AHBHAMGOMKA : public ::CDMDMDMIACM
{
public:
	// static const ::System::Char NHLILFCDKKL = 0x2C; // 0x0
	::System::Collections::Generic::List_1<::System::Int32>* MGHHBILOEBL; // 0xE8

	::System::Void _ctor(::OFBNGMGMOPK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OFBNGMGMOPK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AHBHAMGOMKA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void GEGAAIGJCKO(::OFBNGMGMOPK LJBPECKCCEA)
	{
		return ((::System::Void(*)(::PVOID, ::OFBNGMGMOPK))((::PBYTE)hIl2Cpp + AHBHAMGOMKA_GEGAAIGJCKO_OFFSET))(this, LJBPECKCCEA);
	}

	::System::Int32 GBAPPOLJMAD(::PNIFOBDJCIC MGGKFACPGFE)
	{
		return ((::System::Int32(*)(::PVOID, ::PNIFOBDJCIC))((::PBYTE)hIl2Cpp + AHBHAMGOMKA_GBAPPOLJMAD_OFFSET))(this, MGGKFACPGFE);
	}
};
