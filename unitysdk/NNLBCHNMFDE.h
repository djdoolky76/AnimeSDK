#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LIFHIOPNGIC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NNLBCHNMFDE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1CFEF040)
#define NNLBCHNMFDE_EPDHLJJHEBG_OFFSET UNITYSDK_OFFSET(0x1CFEF4D0)
#define NNLBCHNMFDE_FGNDPHHBOHC_OFFSET UNITYSDK_OFFSET(0x1CFEF3C0)
#define NNLBCHNMFDE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1CFEF270)
#define NNLBCHNMFDE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1CFEF610)
#define NNLBCHNMFDE_LPFMNKEFPMM_OFFSET UNITYSDK_OFFSET(0x1CFEF130)
#define NNLBCHNMFDE_ODKAFLJKNFP_OFFSET UNITYSDK_OFFSET(0x1CFEF620)
#define NNLBCHNMFDE_PEIMCJBOLNJ_OFFSET UNITYSDK_OFFSET(0x1CFEF280)
#define NNLBCHNMFDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1CFEF030)

inline static constexpr unsigned int NNLBCHNMFDE_TypeDefinitionIndex = 15222;

class NNLBCHNMFDE : public ::System::Object
{
public:
	::System::String* NJBFNHKKGHF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::LIFHIOPNGIC HBDPAIKANDB; // 0x20
	::System::Int32 HECAODOCCMK; // 0x30
	::System::Int32 JEDEMPHDCAK; // 0x34
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 LEGKKOIBGGN; // 0x3C
	::System::Int32 FFEPCOOLEOA; // 0x40

	::System::Void _ctor(::LIFHIOPNGIC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LIFHIOPNGIC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NNLBCHNMFDE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LPFMNKEFPMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_LPFMNKEFPMM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PEIMCJBOLNJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_PEIMCJBOLNJ_OFFSET))(this);
	}

	::System::String* FGNDPHHBOHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_FGNDPHHBOHC_OFFSET))(this);
	}

	::System::Int32 EPDHLJJHEBG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_EPDHLJJHEBG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 ODKAFLJKNFP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NNLBCHNMFDE_ODKAFLJKNFP_OFFSET))(this);
	}
};
