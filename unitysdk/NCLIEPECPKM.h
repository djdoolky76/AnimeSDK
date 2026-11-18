#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HNFADNMADCK.h"
#include "unitysdk/KFKFAGBGDOP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NCLIEPECPKM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19115C40)
#define NCLIEPECPKM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19115C30)
#define NCLIEPECPKM_HPLKPOIBLAA_OFFSET UNITYSDK_OFFSET(0x19115D30)
#define NCLIEPECPKM_IDCPJKGLDFC_OFFSET UNITYSDK_OFFSET(0x19115E40)
#define NCLIEPECPKM_KMODPGNOHHG_OFFSET UNITYSDK_OFFSET(0x19116140)
#define NCLIEPECPKM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19115B10)
#define NCLIEPECPKM_PABLNCMNJJO_OFFSET UNITYSDK_OFFSET(0x19115B20)
#define NCLIEPECPKM__CTOR_OFFSET UNITYSDK_OFFSET(0x19115B00)

inline static constexpr unsigned int NCLIEPECPKM_TypeDefinitionIndex = 9912;

class NCLIEPECPKM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::HNFADNMADCK>* GAHBDKBONGG; // 0x18
	::KFKFAGBGDOP HBDPAIKANDB; // 0x20
	::System::String* MKDOJCDGMMN; // 0x30
	::System::String* BMBPADLBCCE; // 0x38
	::System::Int32 DMJOGIPJKPN; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46

	::System::Void _ctor(::KFKFAGBGDOP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KFKFAGBGDOP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NCLIEPECPKM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLIEPECPKM_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PABLNCMNJJO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLIEPECPKM_PABLNCMNJJO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NCLIEPECPKM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLIEPECPKM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HPLKPOIBLAA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLIEPECPKM_HPLKPOIBLAA_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::HNFADNMADCK>* IDCPJKGLDFC()
	{
		return ((::System::Collections::Generic::List_1<::HNFADNMADCK>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLIEPECPKM_IDCPJKGLDFC_OFFSET))(this);
	}

	::System::Int32 KMODPGNOHHG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NCLIEPECPKM_KMODPGNOHHG_OFFSET))(this);
	}
};
