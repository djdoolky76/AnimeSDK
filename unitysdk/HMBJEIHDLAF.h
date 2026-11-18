#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMDLEABINEN.h"
#include "unitysdk/OLPBMKGHOOP.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define HMBJEIHDLAF__CTOR_OFFSET UNITYSDK_OFFSET(0x19E320E0)

inline static constexpr unsigned int HMBJEIHDLAF_TypeDefinitionIndex = 48274;

class HMBJEIHDLAF : public ::FMDLEABINEN
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JPBBCGKBGMJ; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* KIOCDNILEIE; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* IEBFBJIJAGB; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* AFPHNICMJNH; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* ANKNPELCHOK; // 0x40
	::System::Collections::Generic::List_1<::System::Int32>* OMGIIHCLEGK; // 0x48
	::OLPBMKGHOOP AGNBAPHOMOG; // 0x50
	::System::Int32 ENNLOKAPGNK; // 0x54
	::System::Single IJCNOJINCKF; // 0x58
	::System::Int32 DPPEEEDLJHK; // 0x5C
	::System::Int32 FFIPKEDMCNE; // 0x60
	::System::Int32 DANOBECIMEB; // 0x64
	::System::Int32 PHGFIBPJEJA; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HMBJEIHDLAF__CTOR_OFFSET))(this);
	}
};
