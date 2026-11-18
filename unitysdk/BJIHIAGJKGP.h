#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHLKLICMBCH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BJIHIAGJKGP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C51C4D0)
#define BJIHIAGJKGP_COOONIAHCPC_OFFSET UNITYSDK_OFFSET(0x1C51C230)
#define BJIHIAGJKGP_EPBFCKBEOPC_OFFSET UNITYSDK_OFFSET(0x1C51C120)
#define BJIHIAGJKGP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C51C370)
#define BJIHIAGJKGP_HLGGAPIBHEC_OFFSET UNITYSDK_OFFSET(0x1C51C5C0)
#define BJIHIAGJKGP_IHNBOEJFCMP_OFFSET UNITYSDK_OFFSET(0x1C51C380)
#define BJIHIAGJKGP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C51C4C0)
#define BJIHIAGJKGP_NHJAPKCELKD_OFFSET UNITYSDK_OFFSET(0x1C51BFE0)
#define BJIHIAGJKGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C51BFD0)

inline static constexpr unsigned int BJIHIAGJKGP_TypeDefinitionIndex = 17527;

class BJIHIAGJKGP : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* IFEOAPDMFCD; // 0x10
	::LHLKLICMBCH HBDPAIKANDB; // 0x18
	::System::String* FMOCLELHINJ; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 LDHOICMCKOI; // 0x38
	::System::Int32 PHOGFJNDNJB; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 AAAJDFHICAD; // 0x44
	::System::Int32 DBEKHENGKNH; // 0x48

	::System::Void _ctor(::LHLKLICMBCH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHLKLICMBCH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BJIHIAGJKGP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 NHJAPKCELKD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_NHJAPKCELKD_OFFSET))(this);
	}

	::System::String* EPBFCKBEOPC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_EPBFCKBEOPC_OFFSET))(this);
	}

	::System::Int32 COOONIAHCPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_COOONIAHCPC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IHNBOEJFCMP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_IHNBOEJFCMP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HLGGAPIBHEC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BJIHIAGJKGP_HLGGAPIBHEC_OFFSET))(this);
	}
};
