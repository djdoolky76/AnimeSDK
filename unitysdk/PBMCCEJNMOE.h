#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BBAOKPAKNCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PBMCCEJNMOE_BFGJBICDJLL_OFFSET UNITYSDK_OFFSET(0x1D0D8D10)
#define PBMCCEJNMOE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0D8FA0)
#define PBMCCEJNMOE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0D8D00)
#define PBMCCEJNMOE_HLECPIEABFP_OFFSET UNITYSDK_OFFSET(0x1D0D8820)
#define PBMCCEJNMOE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0D8CF0)
#define PBMCCEJNMOE_NPPFHOMGPIF_OFFSET UNITYSDK_OFFSET(0x1D0D8AB0)
#define PBMCCEJNMOE_OOIOMGPHDGC_OFFSET UNITYSDK_OFFSET(0x1D0D8E30)
#define PBMCCEJNMOE_PBCEONNCLAK_OFFSET UNITYSDK_OFFSET(0x1D0D8BD0)
#define PBMCCEJNMOE_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1D0D8940)
#define PBMCCEJNMOE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0D8810)

inline static constexpr unsigned int PBMCCEJNMOE_TypeDefinitionIndex = 10869;

class PBMCCEJNMOE : public ::System::Object
{
public:
	::System::String* PKKHFDBCGOE; // 0x10
	::System::String* AHKHFCMAGLP; // 0x18
	::System::String* JFKJJBJPJOC; // 0x20
	::System::String* EGMGNOFJGJE; // 0x28
	::System::String* GILGDMNMLEN; // 0x30
	::BBAOKPAKNCB HBDPAIKANDB; // 0x38
	::System::Collections::Generic::List_1<::System::String*>* LKLMFJGIDOB; // 0x48
	::System::String* MGDDCFACENO; // 0x50
	::System::String* PEBHECAHGEI; // 0x58
	::System::String* EPNFKHHNFIO; // 0x60
	::System::String* AONIAEOKKBH; // 0x68
	::System::String* KGHLGHCHICD; // 0x70
	::System::String* PKMPBLIAFAG; // 0x78
	::System::String* KLJGOBLFICB; // 0x80
	::System::Collections::Generic::List_1<::System::Int32>* IAEOIHAOJNC; // 0x88
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x90
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x98
	::System::Boolean ADLMAEAOJOB; // 0x99
	::System::Byte _padding0[0x2];
	::System::Int32 CLFNNAAGGBP; // 0x9C
	::System::Int32 PCMOJLNOPPM; // 0xA0
	::System::Byte BGNBHAPEFNC; // 0xA4
	::System::Byte ACIOBDEBDNK; // 0xA5
	::System::Byte CNIAANMNOCF; // 0xA6
	::System::Byte GCHCDJCFCEG; // 0xA7

	::System::Void _ctor(::BBAOKPAKNCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BBAOKPAKNCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PBMCCEJNMOE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* HLECPIEABFP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_HLECPIEABFP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* NPPFHOMGPIF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_NPPFHOMGPIF_OFFSET))(this);
	}

	::System::String* PBCEONNCLAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_PBCEONNCLAK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BFGJBICDJLL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_BFGJBICDJLL_OFFSET))(this);
	}

	::System::Int32 OOIOMGPHDGC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_OOIOMGPHDGC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PBMCCEJNMOE_COFGIJJOFLP_OFFSET))(this);
	}
};
