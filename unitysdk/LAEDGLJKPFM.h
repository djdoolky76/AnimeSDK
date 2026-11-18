#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AFJGFDGEIDJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LAEDGLJKPFM_CLBNOKLABIE_OFFSET UNITYSDK_OFFSET(0x1A5FF5A0)
#define LAEDGLJKPFM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A5FF280)
#define LAEDGLJKPFM_FBEJCABGGLP_OFFSET UNITYSDK_OFFSET(0x1A5FF490)
#define LAEDGLJKPFM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5FF020)
#define LAEDGLJKPFM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A5FF370)
#define LAEDGLJKPFM_MBFNEDKMIJG_OFFSET UNITYSDK_OFFSET(0x1A5FF170)
#define LAEDGLJKPFM_MGMAAJNANAN_OFFSET UNITYSDK_OFFSET(0x1A5FF030)
#define LAEDGLJKPFM_OOOKBEFEKPF_OFFSET UNITYSDK_OFFSET(0x1A5FEF10)
#define LAEDGLJKPFM_PPIMLIGJNFO_OFFSET UNITYSDK_OFFSET(0x1A5FF380)
#define LAEDGLJKPFM__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5FEF00)

inline static constexpr unsigned int LAEDGLJKPFM_TypeDefinitionIndex = 11995;

class LAEDGLJKPFM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* JDNFBIDBAKC; // 0x18
	::System::String* EEALMDEEGJC; // 0x20
	::System::String* EGJHEIBOLPC; // 0x28
	::System::String* IDNDFBJAHLH; // 0x30
	::AFJGFDGEIDJ HBDPAIKANDB; // 0x38
	::System::String* IICGCHDFHIP; // 0x48
	::System::Byte BGNBHAPEFNC; // 0x50
	::System::Byte GCHCDJCFCEG; // 0x51
	::System::Byte CNIAANMNOCF; // 0x52
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x53
	::System::Byte ACIOBDEBDNK; // 0x54
	::System::Byte _padding0[0x3];
	::System::Int32 DMENOHMJCDG; // 0x58

	::System::Void _ctor(::AFJGFDGEIDJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AFJGFDGEIDJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LAEDGLJKPFM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OOOKBEFEKPF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_OOOKBEFEKPF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 MGMAAJNANAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_MGMAAJNANAN_OFFSET))(this);
	}

	::System::String* MBFNEDKMIJG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_MBFNEDKMIJG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PPIMLIGJNFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_PPIMLIGJNFO_OFFSET))(this);
	}

	::System::String* FBEJCABGGLP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_FBEJCABGGLP_OFFSET))(this);
	}

	::System::String* CLBNOKLABIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAEDGLJKPFM_CLBNOKLABIE_OFFSET))(this);
	}
};
