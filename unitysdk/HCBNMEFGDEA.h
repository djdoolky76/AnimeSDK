#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBMABGPDEEM.h"
#include "unitysdk/OCAFLFPLDLC.h"
#include "unitysdk/FFKNGPMMDGI.h"
#include "unitysdk/HHDDMODOKLM.h"
#include "unitysdk/KKAOLIOILHD.h"
#include "unitysdk/NKAPMCGMIEF.h"
#include "unitysdk/System/Nullable_1.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HCBNMEFGDEA_BBNJIIJLLMA_OFFSET UNITYSDK_OFFSET(0x1B7C1C30)
#define HCBNMEFGDEA_CBGKHBKNNHA_OFFSET UNITYSDK_OFFSET(0x1B7C1C10)
#define HCBNMEFGDEA_CHELJPHJGHB_OFFSET UNITYSDK_OFFSET(0x1B7C1C90)
#define HCBNMEFGDEA_FAINNNIBALA_OFFSET UNITYSDK_OFFSET(0x1B7C1BE0)
#define HCBNMEFGDEA_FIPJGKBILOJ_OFFSET UNITYSDK_OFFSET(0x1B7C1BB0)
#define HCBNMEFGDEA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C1BA0)

inline static constexpr unsigned int HCBNMEFGDEA_TypeDefinitionIndex = 14700;

class HCBNMEFGDEA : public ::BBMABGPDEEM
{
public:
	::OCAFLFPLDLC FBLAGKBCOJB; // 0x48
	::System::Boolean OAPMDLMLMMB; // 0x50

	::System::Void _ctor(::HHDDMODOKLM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HHDDMODOKLM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HCBNMEFGDEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Nullable_1<::KKAOLIOILHD> FIPJGKBILOJ()
	{
		return ((::System::Nullable_1<::KKAOLIOILHD>(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBNMEFGDEA_FIPJGKBILOJ_OFFSET))(this);
	}

	::System::Nullable_1<::NKAPMCGMIEF> FAINNNIBALA()
	{
		return ((::System::Nullable_1<::NKAPMCGMIEF>(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBNMEFGDEA_FAINNNIBALA_OFFSET))(this);
	}

	::System::Nullable_1<::FFKNGPMMDGI> CBGKHBKNNHA()
	{
		return ((::System::Nullable_1<::FFKNGPMMDGI>(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBNMEFGDEA_CBGKHBKNNHA_OFFSET))(this);
	}

	::System::Nullable_1<::OCAFLFPLDLC> BBNJIIJLLMA()
	{
		return ((::System::Nullable_1<::OCAFLFPLDLC>(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBNMEFGDEA_BBNJIIJLLMA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CHELJPHJGHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HCBNMEFGDEA_CHELJPHJGHB_OFFSET))(this);
	}
};
