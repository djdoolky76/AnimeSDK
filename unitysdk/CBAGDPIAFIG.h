#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HCADPOBFPNM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBAGDPIAFIG_AHINLFMFKCC_OFFSET UNITYSDK_OFFSET(0x17762BC0)
#define CBAGDPIAFIG_BNKPNGANFDN_OFFSET UNITYSDK_OFFSET(0x177623D0)
#define CBAGDPIAFIG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x177626C0)
#define CBAGDPIAFIG_EJLLJHJMOFM_OFFSET UNITYSDK_OFFSET(0x177628F0)
#define CBAGDPIAFIG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x177626A0)
#define CBAGDPIAFIG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x177626B0)
#define CBAGDPIAFIG_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x177627B0)
#define CBAGDPIAFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x177623C0)

inline static constexpr unsigned int CBAGDPIAFIG_TypeDefinitionIndex = 9479;

class CBAGDPIAFIG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* LLHKBNFBGDA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* AICFILHLIPF; // 0x18
	::HCADPOBFPNM HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* HHEIKKBMDOF; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44

	::System::Void _ctor(::HCADPOBFPNM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HCADPOBFPNM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CBAGDPIAFIG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BNKPNGANFDN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAGDPIAFIG_BNKPNGANFDN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBAGDPIAFIG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAGDPIAFIG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAGDPIAFIG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAGDPIAFIG_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* EJLLJHJMOFM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAGDPIAFIG_EJLLJHJMOFM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AHINLFMFKCC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBAGDPIAFIG_AHINLFMFKCC_OFFSET))(this);
	}
};
