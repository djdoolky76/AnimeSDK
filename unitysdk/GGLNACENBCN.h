#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBCOOLNCLPF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GGLNACENBCN_AHDFGBFEFHI_OFFSET UNITYSDK_OFFSET(0x1A4D8B40)
#define GGLNACENBCN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A4D9290)
#define GGLNACENBCN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A4D9380)
#define GGLNACENBCN_HHEBACCLCDI_OFFSET UNITYSDK_OFFSET(0x1A4D8E10)
#define GGLNACENBCN_HODJNEFNAFJ_OFFSET UNITYSDK_OFFSET(0x1A4D9140)
#define GGLNACENBCN_KGJCCBAFNMD_OFFSET UNITYSDK_OFFSET(0x1A4D8A30)
#define GGLNACENBCN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A4D9280)
#define GGLNACENBCN_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x1A4D9030)
#define GGLNACENBCN_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x1A4D8F20)
#define GGLNACENBCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4D8A20)

inline static constexpr unsigned int GGLNACENBCN_TypeDefinitionIndex = 16678;

class GGLNACENBCN : public ::System::Object
{
public:
	::System::String* CJPFHJFDCFJ; // 0x10
	::System::String* JPHMIDHEHOO; // 0x18
	::System::String* OPLJIOOCIFC; // 0x20
	::System::String* OLIPEIPNKNH; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* DHBLPDHJAOH; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* KKHFGNGMDMN; // 0x40
	::OBCOOLNCLPF HBDPAIKANDB; // 0x48
	::System::Int32 LELOBEECEGI; // 0x58
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x5C
	::System::Byte ACIOBDEBDNK; // 0x5D
	::System::Byte GCHCDJCFCEG; // 0x5E
	::System::Byte CNIAANMNOCF; // 0x5F
	::System::Int32 AGGIGCKLCDF; // 0x60
	::System::Int32 NPGLLHEEMML; // 0x64
	::System::Int32 IOMFBDLIHFH; // 0x68

	::System::Void _ctor(::OBCOOLNCLPF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OBCOOLNCLPF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GGLNACENBCN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KGJCCBAFNMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_KGJCCBAFNMD_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AHDFGBFEFHI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_AHDFGBFEFHI_OFFSET))(this);
	}

	::System::String* HHEBACCLCDI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_HHEBACCLCDI_OFFSET))(this);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Int32 HODJNEFNAFJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_HODJNEFNAFJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GGLNACENBCN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GGLNACENBCN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
