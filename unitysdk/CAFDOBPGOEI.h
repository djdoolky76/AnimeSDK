#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HBDKBFCJLNL.h"
#include "unitysdk/BLFGGFKGNBL.h"
#include "unitysdk/FFKNGPMMDGI.h"
#include "unitysdk/KKAOLIOILHD.h"
#include "unitysdk/NKAPMCGMIEF.h"
#include "unitysdk/OCAFLFPLDLC.h"
#include "unitysdk/System/Nullable_1.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CAFDOBPGOEI_BBNJIIJLLMA_OFFSET UNITYSDK_OFFSET(0x1877F630)
#define CAFDOBPGOEI_CBGKHBKNNHA_OFFSET UNITYSDK_OFFSET(0x1877F5E0)
#define CAFDOBPGOEI_CHELJPHJGHB_OFFSET UNITYSDK_OFFSET(0x1877F640)
#define CAFDOBPGOEI_FAINNNIBALA_OFFSET UNITYSDK_OFFSET(0x1877F5C0)
#define CAFDOBPGOEI_FIPJGKBILOJ_OFFSET UNITYSDK_OFFSET(0x1877F5A0)
#define CAFDOBPGOEI__CTOR_OFFSET UNITYSDK_OFFSET(0x1877F590)

inline static constexpr unsigned int CAFDOBPGOEI_TypeDefinitionIndex = 14075;

class CAFDOBPGOEI : public ::HBDKBFCJLNL
{
public:
	::System::Void _ctor(::BLFGGFKGNBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BLFGGFKGNBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CAFDOBPGOEI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Nullable_1<::KKAOLIOILHD> FIPJGKBILOJ()
	{
		return ((::System::Nullable_1<::KKAOLIOILHD>(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDOBPGOEI_FIPJGKBILOJ_OFFSET))(this);
	}

	::System::Nullable_1<::NKAPMCGMIEF> FAINNNIBALA()
	{
		return ((::System::Nullable_1<::NKAPMCGMIEF>(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDOBPGOEI_FAINNNIBALA_OFFSET))(this);
	}

	::System::Nullable_1<::FFKNGPMMDGI> CBGKHBKNNHA()
	{
		return ((::System::Nullable_1<::FFKNGPMMDGI>(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDOBPGOEI_CBGKHBKNNHA_OFFSET))(this);
	}

	::System::Nullable_1<::OCAFLFPLDLC> BBNJIIJLLMA()
	{
		return ((::System::Nullable_1<::OCAFLFPLDLC>(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDOBPGOEI_BBNJIIJLLMA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CHELJPHJGHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CAFDOBPGOEI_CHELJPHJGHB_OFFSET))(this);
	}
};
