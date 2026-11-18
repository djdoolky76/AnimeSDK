#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNIKJDFFCOH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MHAPBLFFOOM_BHCDFCAIBFL_OFFSET UNITYSDK_OFFSET(0x1B315E50)
#define MHAPBLFFOOM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B3164C0)
#define MHAPBLFFOOM_EGEICPGFNLO_OFFSET UNITYSDK_OFFSET(0x1B315A30)
#define MHAPBLFFOOM_FBJKHJMHCLL_OFFSET UNITYSDK_OFFSET(0x1B316260)
#define MHAPBLFFOOM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B315D00)
#define MHAPBLFFOOM_KPCIPEEDPDM_OFFSET UNITYSDK_OFFSET(0x1B3165B0)
#define MHAPBLFFOOM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B3163A0)
#define MHAPBLFFOOM_MGHPNPECBDA_OFFSET UNITYSDK_OFFSET(0x1B315D10)
#define MHAPBLFFOOM_NIFBJKELLCE_OFFSET UNITYSDK_OFFSET(0x1B3163B0)
#define MHAPBLFFOOM_PKPONFONJPB_OFFSET UNITYSDK_OFFSET(0x1B315F90)
#define MHAPBLFFOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B315A20)

inline static constexpr unsigned int MHAPBLFFOOM_TypeDefinitionIndex = 16273;

class MHAPBLFFOOM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* FCDKDAKMDAP; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* EGFLJNKLEMO; // 0x20
	::PNIKJDFFCOH HBDPAIKANDB; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* CDJLCBBKBPL; // 0x38
	::System::Int32 LNFCLGPILNE; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x46
	::System::Byte _padding0[0x1];
	::System::Int32 FGODFIOGIGJ; // 0x48
	::System::Int32 PIDNCPFDPJK; // 0x4C
	::System::Int32 EADBHAHAANN; // 0x50

	::System::Void _ctor(::PNIKJDFFCOH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PNIKJDFFCOH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MHAPBLFFOOM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EGEICPGFNLO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_EGEICPGFNLO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MGHPNPECBDA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_MGHPNPECBDA_OFFSET))(this);
	}

	::System::Int32 BHCDFCAIBFL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_BHCDFCAIBFL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* PKPONFONJPB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_PKPONFONJPB_OFFSET))(this);
	}

	::System::Int32 FBJKHJMHCLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_FBJKHJMHCLL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NIFBJKELLCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_NIFBJKELLCE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 KPCIPEEDPDM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MHAPBLFFOOM_KPCIPEEDPDM_OFFSET))(this);
	}
};
