#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJLICDACADC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPANDKAAPPN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D0CED30)
#define NPANDKAAPPN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0CF0A0)
#define NPANDKAAPPN_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x1D0CEF60)
#define NPANDKAAPPN_JFMJHKHDIOI_OFFSET UNITYSDK_OFFSET(0x1D0CEA50)
#define NPANDKAAPPN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0CED20)
#define NPANDKAAPPN_MEMCMEKNIFG_OFFSET UNITYSDK_OFFSET(0x1D0CF0B0)
#define NPANDKAAPPN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1D0CEE20)
#define NPANDKAAPPN__CTOR_OFFSET UNITYSDK_OFFSET(0x1D0CEA40)

inline static constexpr unsigned int NPANDKAAPPN_TypeDefinitionIndex = 16574;

class NPANDKAAPPN : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* EECLICKMFAF; // 0x10
	::IJLICDACADC HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* MOKLDLDFFCD; // 0x30
	::System::String* FJMBECAMECM; // 0x38
	::System::Int32 HCJLGODPKJE; // 0x40
	::System::Int32 OFGMKLFNPPJ; // 0x44
	::System::Int32 PCMOJLNOPPM; // 0x48
	::System::Int32 PLKLIFBKNFM; // 0x4C
	::System::Int32 POKJNGILNLB; // 0x50
	::System::Byte CNIAANMNOCF; // 0x54
	::System::Byte ACIOBDEBDNK; // 0x55
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x56

	::System::Void _ctor(::IJLICDACADC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IJLICDACADC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NPANDKAAPPN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JFMJHKHDIOI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPANDKAAPPN_JFMJHKHDIOI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPANDKAAPPN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPANDKAAPPN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPANDKAAPPN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPANDKAAPPN_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPANDKAAPPN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MEMCMEKNIFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPANDKAAPPN_MEMCMEKNIFG_OFFSET))(this);
	}
};
