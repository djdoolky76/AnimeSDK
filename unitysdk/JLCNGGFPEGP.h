#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HFPAOFLECHA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JLCNGGFPEGP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BCEB30)
#define JLCNGGFPEGP_ELDABLJDOOB_OFFSET UNITYSDK_OFFSET(0x18BCE4C0)
#define JLCNGGFPEGP_FKKEONLDLFF_OFFSET UNITYSDK_OFFSET(0x18BCE600)
#define JLCNGGFPEGP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BCE4B0)
#define JLCNGGFPEGP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BCEB20)
#define JLCNGGFPEGP_LJPHLOPLCLL_OFFSET UNITYSDK_OFFSET(0x18BCE8D0)
#define JLCNGGFPEGP_NDCPGHGEPAA_OFFSET UNITYSDK_OFFSET(0x18BCED60)
#define JLCNGGFPEGP_OEOLEFBLFOE_OFFSET UNITYSDK_OFFSET(0x18BCE9E0)
#define JLCNGGFPEGP_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18BCEC20)
#define JLCNGGFPEGP__CTOR_OFFSET UNITYSDK_OFFSET(0x18BCE4A0)

inline static constexpr unsigned int JLCNGGFPEGP_TypeDefinitionIndex = 11172;

class JLCNGGFPEGP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* KAINAMDGKFM; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* AFGMEIKMIPH; // 0x20
	::HFPAOFLECHA HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 GPFNOPNOMOJ; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Int32 OENHKBGMOCH; // 0x44
	::System::Int32 KMJBHMCGKFP; // 0x48

	::System::Void _ctor(::HFPAOFLECHA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HFPAOFLECHA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JLCNGGFPEGP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ELDABLJDOOB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_ELDABLJDOOB_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FKKEONLDLFF()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_FKKEONLDLFF_OFFSET))(this);
	}

	::System::String* LJPHLOPLCLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_LJPHLOPLCLL_OFFSET))(this);
	}

	::System::Int32 OEOLEFBLFOE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_OEOLEFBLFOE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 NDCPGHGEPAA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLCNGGFPEGP_NDCPGHGEPAA_OFFSET))(this);
	}
};
