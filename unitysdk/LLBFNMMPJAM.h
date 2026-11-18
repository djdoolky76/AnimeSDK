#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNJABDNDBMI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LLBFNMMPJAM_ACDOMAEJONK_OFFSET UNITYSDK_OFFSET(0x1B7F2B40)
#define LLBFNMMPJAM_ADBBCNFGHPJ_OFFSET UNITYSDK_OFFSET(0x1B7F2920)
#define LLBFNMMPJAM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7F2A40)
#define LLBFNMMPJAM_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x1B7F2C80)
#define LLBFNMMPJAM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7F2B30)
#define LLBFNMMPJAM_FOMHDKOHKCO_OFFSET UNITYSDK_OFFSET(0x1B7F2D90)
#define LLBFNMMPJAM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7F2A30)
#define LLBFNMMPJAM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B7F27E0)
#define LLBFNMMPJAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7F27D0)

inline static constexpr unsigned int LLBFNMMPJAM_TypeDefinitionIndex = 15853;

class LLBFNMMPJAM : public ::System::Object
{
public:
	::System::String* FGECIGPJPCF; // 0x10
	::HNJABDNDBMI HBDPAIKANDB; // 0x18
	::System::String* DDCEOGKNPOI; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* AMDHKKJPOOA; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Int32 BEFGHBANBAB; // 0x48

	::System::Void _ctor(::HNJABDNDBMI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HNJABDNDBMI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LLBFNMMPJAM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* ADBBCNFGHPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_ADBBCNFGHPJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ACDOMAEJONK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_ACDOMAEJONK_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_DCGJGALIIHB_OFFSET))(this);
	}

	::System::String* FOMHDKOHKCO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LLBFNMMPJAM_FOMHDKOHKCO_OFFSET))(this);
	}
};
