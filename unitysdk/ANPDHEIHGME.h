#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHGAFEKICKP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ANPDHEIHGME_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18773E90)
#define ANPDHEIHGME_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18773810)
#define ANPDHEIHGME_GBAGFODLFLM_OFFSET UNITYSDK_OFFSET(0x18773820)
#define ANPDHEIHGME_GJDKPEBAFDL_OFFSET UNITYSDK_OFFSET(0x18773B00)
#define ANPDHEIHGME_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18773AF0)
#define ANPDHEIHGME_OCBOPJCMBBH_OFFSET UNITYSDK_OFFSET(0x18773D80)
#define ANPDHEIHGME_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x18773C40)
#define ANPDHEIHGME__CTOR_OFFSET UNITYSDK_OFFSET(0x18773800)

inline static constexpr unsigned int ANPDHEIHGME_TypeDefinitionIndex = 14950;

class ANPDHEIHGME : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* JACNBIPCIFM; // 0x10
	::System::String* OJBOCAPJOPO; // 0x18
	::NHGAFEKICKP HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 HPJGINHPAPE; // 0x40

	::System::Void _ctor(::NHGAFEKICKP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NHGAFEKICKP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ANPDHEIHGME__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ANPDHEIHGME_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GBAGFODLFLM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPDHEIHGME_GBAGFODLFLM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPDHEIHGME_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 GJDKPEBAFDL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPDHEIHGME_GJDKPEBAFDL_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPDHEIHGME_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* OCBOPJCMBBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPDHEIHGME_OCBOPJCMBBH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANPDHEIHGME_COFGIJJOFLP_OFFSET))(this);
	}
};
