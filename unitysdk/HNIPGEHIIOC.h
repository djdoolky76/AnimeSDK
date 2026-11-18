#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MINBODCIHAN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HNIPGEHIIOC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19538630)
#define HNIPGEHIIOC_DMHKDEPMPPE_OFFSET UNITYSDK_OFFSET(0x19538D50)
#define HNIPGEHIIOC_DPOOGNKFDFD_OFFSET UNITYSDK_OFFSET(0x19538E90)
#define HNIPGEHIIOC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19539270)
#define HNIPGEHIIOC_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x19538C10)
#define HNIPGEHIIOC_JCEOCLLHFKE_OFFSET UNITYSDK_OFFSET(0x19538860)
#define HNIPGEHIIOC_KMHJBEEJCJL_OFFSET UNITYSDK_OFFSET(0x19538B00)
#define HNIPGEHIIOC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195393C0)
#define HNIPGEHIIOC_LPAPCGADPEL_OFFSET UNITYSDK_OFFSET(0x195389C0)
#define HNIPGEHIIOC_NFDDBLOMGJP_OFFSET UNITYSDK_OFFSET(0x19539280)
#define HNIPGEHIIOC_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x19538FA0)
#define HNIPGEHIIOC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19538720)
#define HNIPGEHIIOC__CTOR_OFFSET UNITYSDK_OFFSET(0x19538620)

inline static constexpr unsigned int HNIPGEHIIOC_TypeDefinitionIndex = 9870;

class HNIPGEHIIOC : public ::System::Object
{
public:
	::System::String* BCBNBEIHNJL; // 0x10
	::System::String* FADLEKPFIJP; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* OHMLOEKNBHC; // 0x20
	::MINBODCIHAN HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte BGNBHAPEFNC; // 0x41
	::System::Byte _padding0[0x2];
	::System::Int32 PAIAMAFOGDH; // 0x44
	::System::Int32 JEMBNCLPELC; // 0x48
	::System::Int32 PCMOJLNOPPM; // 0x4C
	::System::Int32 POKJNGILNLB; // 0x50
	::System::Int32 OCBLBMODGNH; // 0x54
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x58
	::System::Boolean NNFPOHBHMHN; // 0x59
	::System::Byte GCHCDJCFCEG; // 0x5A
	::System::Byte ACIOBDEBDNK; // 0x5B

	::System::Void _ctor(::MINBODCIHAN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MINBODCIHAN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HNIPGEHIIOC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean JCEOCLLHFKE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_JCEOCLLHFKE_OFFSET))(this);
	}

	::System::Int32 LPAPCGADPEL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_LPAPCGADPEL_OFFSET))(this);
	}

	::System::String* KMHJBEEJCJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_KMHJBEEJCJL_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 DMHKDEPMPPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_DMHKDEPMPPE_OFFSET))(this);
	}

	::System::String* DPOOGNKFDFD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_DPOOGNKFDFD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NGKOPBCHFOP()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NFDDBLOMGJP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_NFDDBLOMGJP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HNIPGEHIIOC_LJANCIBECFG_OFFSET))(this);
	}
};
