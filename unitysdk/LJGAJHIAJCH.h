#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCJHLFCHFCG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LJGAJHIAJCH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AAFD050)
#define LJGAJHIAJCH_DEKDKKMHIGI_OFFSET UNITYSDK_OFFSET(0x1AAFD410)
#define LJGAJHIAJCH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AAFD830)
#define LJGAJHIAJCH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AAFD550)
#define LJGAJHIAJCH_MFDMEHPKENB_OFFSET UNITYSDK_OFFSET(0x1AAFD560)
#define LJGAJHIAJCH_MODNFACHMDI_OFFSET UNITYSDK_OFFSET(0x1AAFD140)
#define LJGAJHIAJCH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAFD040)

inline static constexpr unsigned int LJGAJHIAJCH_TypeDefinitionIndex = 12573;

class LJGAJHIAJCH : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* PCOOLECDMNG; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::DCJHLFCHFCG HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* HNKDGJNGBIG; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 JPAJJLAKOME; // 0x3C

	::System::Void _ctor(::DCJHLFCHFCG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DCJHLFCHFCG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LJGAJHIAJCH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGAJHIAJCH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MODNFACHMDI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGAJHIAJCH_MODNFACHMDI_OFFSET))(this);
	}

	::System::Int32 DEKDKKMHIGI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGAJHIAJCH_DEKDKKMHIGI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGAJHIAJCH_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MFDMEHPKENB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LJGAJHIAJCH_MFDMEHPKENB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LJGAJHIAJCH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
