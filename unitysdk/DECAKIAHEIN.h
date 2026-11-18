#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ONMBKFFAEEO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DECAKIAHEIN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18796690)
#define DECAKIAHEIN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18796790)
#define DECAKIAHEIN_GAFOEEOBLOH_OFFSET UNITYSDK_OFFSET(0x18796A70)
#define DECAKIAHEIN_JPFFHMPDKKD_OFFSET UNITYSDK_OFFSET(0x187967A0)
#define DECAKIAHEIN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18796780)
#define DECAKIAHEIN__CTOR_OFFSET UNITYSDK_OFFSET(0x18796680)

inline static constexpr unsigned int DECAKIAHEIN_TypeDefinitionIndex = 9346;

class DECAKIAHEIN : public ::System::Object
{
public:
	::ONMBKFFAEEO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* LKAANCKOJDK; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* PHOGFJNDNJB; // 0x30
	::System::Int32 MKEIGMGDBLD; // 0x38
	::System::Int32 OKBBGPGIODD; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::ONMBKFFAEEO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ONMBKFFAEEO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DECAKIAHEIN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DECAKIAHEIN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DECAKIAHEIN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DECAKIAHEIN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JPFFHMPDKKD()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DECAKIAHEIN_JPFFHMPDKKD_OFFSET))(this);
	}

	::System::Int32 GAFOEEOBLOH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DECAKIAHEIN_GAFOEEOBLOH_OFFSET))(this);
	}
};
