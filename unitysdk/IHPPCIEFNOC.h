#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFMEBGKLGED.h"
#include "unitysdk/BJEBJDKNNHG.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define IHPPCIEFNOC_AOIPFKDDHBK_OFFSET UNITYSDK_OFFSET(0x16A9D970)
#define IHPPCIEFNOC_CNJCNJGHKPB_OFFSET UNITYSDK_OFFSET(0x16A9DA60)
#define IHPPCIEFNOC_NDAMBJELFCB_OFFSET UNITYSDK_OFFSET(0x16A9DDA0)
#define IHPPCIEFNOC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A9DF20)
#define IHPPCIEFNOC_ONGHMELLOGD_OFFSET UNITYSDK_OFFSET(0x16A9DE30)
#define IHPPCIEFNOC__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9D840)

inline static constexpr unsigned int IHPPCIEFNOC_TypeDefinitionIndex = 88163;

class IHPPCIEFNOC : public ::LFMEBGKLGED
{
public:
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* HFMIKBLLFNJ; // 0xF0
	::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* FJHOKAHAAID; // 0xF8

	::System::Void _ctor(::BJEBJDKNNHG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BJEBJDKNNHG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IHPPCIEFNOC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* AOIPFKDDHBK(::System::String* MCOHLHMKLIP)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHPPCIEFNOC_AOIPFKDDHBK_OFFSET))(this, MCOHLHMKLIP);
	}

	::System::Void CNJCNJGHKPB(::System::String* PCBPFADLJGK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHPPCIEFNOC_CNJCNJGHKPB_OFFSET))(this, PCBPFADLJGK);
	}

	::System::Single ONGHMELLOGD(::System::String* IDFIAANILMA)
	{
		return ((::System::Single(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHPPCIEFNOC_ONGHMELLOGD_OFFSET))(this, IDFIAANILMA);
	}

	::System::Boolean NDAMBJELFCB(::System::String* LCEGOBBEECM)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + IHPPCIEFNOC_NDAMBJELFCB_OFFSET))(this, LCEGOBBEECM);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHPPCIEFNOC_OJENCMOGDKL_OFFSET))(this);
	}
};
