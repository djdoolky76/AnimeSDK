#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMDDIOEJGI.h"
#include "unitysdk/IIHDLAPIEJE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEJJOLJABBP_AILJCNIMCOL_OFFSET UNITYSDK_OFFSET(0x1BB15CC0)
#define MEJJOLJABBP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BB15FC0)
#define MEJJOLJABBP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BB160B0)
#define MEJJOLJABBP_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x1BB160C0)
#define MEJJOLJABBP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BB16200)
#define MEJJOLJABBP__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB15CB0)

inline static constexpr unsigned int MEJJOLJABBP_TypeDefinitionIndex = 17767;

class MEJJOLJABBP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::IFMDDIOEJGI>* AOLMMJBBKMA; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::IIHDLAPIEJE HBDPAIKANDB; // 0x20
	::System::Int32 MFAAMEMILEM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36

	::System::Void _ctor(::IIHDLAPIEJE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IIHDLAPIEJE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MEJJOLJABBP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::IFMDDIOEJGI>* AILJCNIMCOL()
	{
		return ((::System::Collections::Generic::List_1<::IFMDDIOEJGI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJJOLJABBP_AILJCNIMCOL_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJJOLJABBP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MEJJOLJABBP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJJOLJABBP_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MEJJOLJABBP_LJANCIBECFG_OFFSET))(this);
	}
};
