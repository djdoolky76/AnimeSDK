#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MDOLOFLPDIB.h"
#include "unitysdk/JOLAOMGCHOM.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PPADOFBOMDD_DCGJGPCLGBP_OFFSET UNITYSDK_OFFSET(0x1AD9E030)
#define PPADOFBOMDD_GGKDOCFLIHC_OFFSET UNITYSDK_OFFSET(0x1AD9E040)
#define PPADOFBOMDD_PKPCCCJALDP_OFFSET UNITYSDK_OFFSET(0x1AD9E0D0)
#define PPADOFBOMDD__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD9DFA0)

inline static constexpr unsigned int PPADOFBOMDD_TypeDefinitionIndex = 17758;

class PPADOFBOMDD : public ::MDOLOFLPDIB
{
public:
	::System::Collections::Generic::List_1<::PPADOFBOMDD*>* _JFPBLBGNHMH_k__BackingField; // 0x80

	::System::Void _ctor(::JOLAOMGCHOM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOLAOMGCHOM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PPADOFBOMDD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void DCGJGPCLGBP(::System::Collections::Generic::List_1<::PPADOFBOMDD*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::PPADOFBOMDD*>*))((::PBYTE)hIl2Cpp + PPADOFBOMDD_DCGJGPCLGBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GGKDOCFLIHC(::PPADOFBOMDD* NLFNKFAGCHI)
	{
		return ((::System::Void(*)(::PVOID, ::PPADOFBOMDD*))((::PBYTE)hIl2Cpp + PPADOFBOMDD_GGKDOCFLIHC_OFFSET))(this, NLFNKFAGCHI);
	}

	::System::Collections::Generic::List_1<::PPADOFBOMDD*>* PKPCCCJALDP()
	{
		return ((::System::Collections::Generic::List_1<::PPADOFBOMDD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PPADOFBOMDD_PKPCCCJALDP_OFFSET))(this);
	}
};
