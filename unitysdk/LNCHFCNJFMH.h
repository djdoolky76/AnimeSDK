#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EOOBLEALPIO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LNCHFCNJFMH_AGIDPKEIDNP_OFFSET UNITYSDK_OFFSET(0x1AD65280)
#define LNCHFCNJFMH_ANKJIMPCCAC_OFFSET UNITYSDK_OFFSET(0x1AD65C30)
#define LNCHFCNJFMH_BAKHBMHNLKG_OFFSET UNITYSDK_OFFSET(0x1AD65730)
#define LNCHFCNJFMH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD65640)
#define LNCHFCNJFMH_DLBMCODFPON_OFFSET UNITYSDK_OFFSET(0x1AD653A0)
#define LNCHFCNJFMH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD65390)
#define LNCHFCNJFMH_HDAGGDKMDAI_OFFSET UNITYSDK_OFFSET(0x1AD65B20)
#define LNCHFCNJFMH_HFELKHNAKDL_OFFSET UNITYSDK_OFFSET(0x1AD65500)
#define LNCHFCNJFMH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD65B10)
#define LNCHFCNJFMH_NFKMFBDOMKD_OFFSET UNITYSDK_OFFSET(0x1AD65840)
#define LNCHFCNJFMH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD65270)

inline static constexpr unsigned int LNCHFCNJFMH_TypeDefinitionIndex = 14013;

class LNCHFCNJFMH : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* BKGOMDBILLM; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* JAGOPDBPPJG; // 0x20
	::EOOBLEALPIO HBDPAIKANDB; // 0x28
	::System::String* LPBMFGMIAPG; // 0x38
	::System::String* GOCHEDPLCEI; // 0x40
	::System::Byte GCHCDJCFCEG; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x49
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4A
	::System::Byte CNIAANMNOCF; // 0x4B
	::System::Int32 LKLMFJGIDOB; // 0x4C
	::System::Int32 BHIEEAGJJGN; // 0x50
	::System::Single KGFJLHOMLLM; // 0x54

	::System::Void _ctor(::EOOBLEALPIO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EOOBLEALPIO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LNCHFCNJFMH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* AGIDPKEIDNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_AGIDPKEIDNP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single DLBMCODFPON()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_DLBMCODFPON_OFFSET))(this);
	}

	::System::Int32 HFELKHNAKDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_HFELKHNAKDL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* BAKHBMHNLKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_BAKHBMHNLKG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NFKMFBDOMKD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_NFKMFBDOMKD_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* HDAGGDKMDAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_HDAGGDKMDAI_OFFSET))(this);
	}

	::System::Int32 ANKJIMPCCAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNCHFCNJFMH_ANKJIMPCCAC_OFFSET))(this);
	}
};
