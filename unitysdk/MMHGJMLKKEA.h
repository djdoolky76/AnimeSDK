#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJNJMGFCMEF.h"
#include "unitysdk/FFKNGPMMDGI.h"
#include "unitysdk/FJEEBFBNIEH.h"
#include "unitysdk/KKAOLIOILHD.h"
#include "unitysdk/NKAPMCGMIEF.h"
#include "unitysdk/OCAFLFPLDLC.h"
#include "unitysdk/System/Nullable_1.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MMHGJMLKKEA_BBNJIIJLLMA_OFFSET UNITYSDK_OFFSET(0x17FCB2E0)
#define MMHGJMLKKEA_CBGKHBKNNHA_OFFSET UNITYSDK_OFFSET(0x17FCB290)
#define MMHGJMLKKEA_CHELJPHJGHB_OFFSET UNITYSDK_OFFSET(0x17FCB2F0)
#define MMHGJMLKKEA_FAINNNIBALA_OFFSET UNITYSDK_OFFSET(0x17FCB250)
#define MMHGJMLKKEA_FIPJGKBILOJ_OFFSET UNITYSDK_OFFSET(0x17FCB210)
#define MMHGJMLKKEA__CTOR_OFFSET UNITYSDK_OFFSET(0x17FCB200)

inline static constexpr unsigned int MMHGJMLKKEA_TypeDefinitionIndex = 17181;

class MMHGJMLKKEA : public ::IJNJMGFCMEF
{
public:
	::System::Void _ctor(::FJEEBFBNIEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FJEEBFBNIEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MMHGJMLKKEA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Nullable_1<::KKAOLIOILHD> FIPJGKBILOJ()
	{
		return ((::System::Nullable_1<::KKAOLIOILHD>(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHGJMLKKEA_FIPJGKBILOJ_OFFSET))(this);
	}

	::System::Nullable_1<::NKAPMCGMIEF> FAINNNIBALA()
	{
		return ((::System::Nullable_1<::NKAPMCGMIEF>(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHGJMLKKEA_FAINNNIBALA_OFFSET))(this);
	}

	::System::Nullable_1<::FFKNGPMMDGI> CBGKHBKNNHA()
	{
		return ((::System::Nullable_1<::FFKNGPMMDGI>(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHGJMLKKEA_CBGKHBKNNHA_OFFSET))(this);
	}

	::System::Nullable_1<::OCAFLFPLDLC> BBNJIIJLLMA()
	{
		return ((::System::Nullable_1<::OCAFLFPLDLC>(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHGJMLKKEA_BBNJIIJLLMA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* CHELJPHJGHB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MMHGJMLKKEA_CHELJPHJGHB_OFFSET))(this);
	}
};
