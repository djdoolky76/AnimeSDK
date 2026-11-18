#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/APEBKDFPOOD.h"
#include "unitysdk/BKDMJOAJFFP.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IHBHCFAMHPH_EPEKCJPFCLI_OFFSET UNITYSDK_OFFSET(0x152E6BA0)
#define IHBHCFAMHPH__CTOR_OFFSET UNITYSDK_OFFSET(0x152E6B90)

inline static constexpr unsigned int IHBHCFAMHPH_TypeDefinitionIndex = 15499;

class IHBHCFAMHPH : public ::APEBKDFPOOD
{
public:
	::System::Collections::Generic::List_1<::System::String*>* OEEDCEICOOJ; // 0x78

	::System::Void _ctor(::BKDMJOAJFFP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BKDMJOAJFFP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHBHCFAMHPH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::String*>* EPEKCJPFCLI()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + IHBHCFAMHPH_EPEKCJPFCLI_OFFSET))(this);
	}
};
