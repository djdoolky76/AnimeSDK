#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JJEFHGGCMDD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CDKELFMILFC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17765920)
#define CDKELFMILFC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x177657C0)
#define CDKELFMILFC_HJFCIELMJPA_OFFSET UNITYSDK_OFFSET(0x17765680)
#define CDKELFMILFC_HPGMILGBBJA_OFFSET UNITYSDK_OFFSET(0x177657E0)
#define CDKELFMILFC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x177657D0)
#define CDKELFMILFC_PECDODLKJGP_OFFSET UNITYSDK_OFFSET(0x17765A10)
#define CDKELFMILFC__CTOR_OFFSET UNITYSDK_OFFSET(0x17765670)

inline static constexpr unsigned int CDKELFMILFC_TypeDefinitionIndex = 10864;

class CDKELFMILFC : public ::System::Object
{
public:
	::JJEFHGGCMDD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* BFJIFOAIOIP; // 0x28
	::System::Int32 NKFNLKNHGDD; // 0x30
	::System::Int32 OCGIOHPBCIK; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::JJEFHGGCMDD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JJEFHGGCMDD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CDKELFMILFC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HJFCIELMJPA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKELFMILFC_HJFCIELMJPA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CDKELFMILFC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKELFMILFC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 HPGMILGBBJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKELFMILFC_HPGMILGBBJA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKELFMILFC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* PECDODLKJGP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CDKELFMILFC_PECDODLKJGP_OFFSET))(this);
	}
};
