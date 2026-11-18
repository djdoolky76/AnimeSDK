#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PEPDJMGBPML.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECDLILOKCAC_AIOBAKECJGD_OFFSET UNITYSDK_OFFSET(0x15764730)
#define ECDLILOKCAC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15764350)
#define ECDLILOKCAC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15764440)
#define ECDLILOKCAC_KIBBHADKNHM_OFFSET UNITYSDK_OFFSET(0x15764450)
#define ECDLILOKCAC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15764720)
#define ECDLILOKCAC__CTOR_OFFSET UNITYSDK_OFFSET(0x15764340)

inline static constexpr unsigned int ECDLILOKCAC_TypeDefinitionIndex = 12387;

class ECDLILOKCAC : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CADCIPAEECL; // 0x10
	::PEPDJMGBPML HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* BHDJFGCKAMJ; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::PEPDJMGBPML LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PEPDJMGBPML, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECDLILOKCAC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLILOKCAC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECDLILOKCAC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KIBBHADKNHM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLILOKCAC_KIBBHADKNHM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLILOKCAC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AIOBAKECJGD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECDLILOKCAC_AIOBAKECJGD_OFFSET))(this);
	}
};
