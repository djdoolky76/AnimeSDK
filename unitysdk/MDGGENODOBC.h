#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PAFJCMDGOGA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MDGGENODOBC_BNFBEOLMNBE_OFFSET UNITYSDK_OFFSET(0x1C177010)
#define MDGGENODOBC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C1772E0)
#define MDGGENODOBC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C177510)
#define MDGGENODOBC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C177000)
#define MDGGENODOBC_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1C1773D0)
#define MDGGENODOBC__CTOR_OFFSET UNITYSDK_OFFSET(0x1C176FF0)

inline static constexpr unsigned int MDGGENODOBC_TypeDefinitionIndex = 13617;

class MDGGENODOBC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* CHGIBNCABBF; // 0x18
	::PAFJCMDGOGA HBDPAIKANDB; // 0x20
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x36

	::System::Void _ctor(::PAFJCMDGOGA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PAFJCMDGOGA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MDGGENODOBC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGENODOBC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BNFBEOLMNBE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGENODOBC_BNFBEOLMNBE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGENODOBC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDGGENODOBC_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDGGENODOBC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
