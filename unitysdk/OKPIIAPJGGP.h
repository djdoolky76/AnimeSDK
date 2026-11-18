#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KLDCCFDJDBH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define OKPIIAPJGGP_ALCJBBFBILD_OFFSET UNITYSDK_OFFSET(0x1C0A7200)
#define OKPIIAPJGGP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C0A7340)
#define OKPIIAPJGGP_EDNKOHKEPII_OFFSET UNITYSDK_OFFSET(0x1C0A6F60)
#define OKPIIAPJGGP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C0A71F0)
#define OKPIIAPJGGP_KMJOKBIIEDB_OFFSET UNITYSDK_OFFSET(0x1C0A6E20)
#define OKPIIAPJGGP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C0A71E0)
#define OKPIIAPJGGP_PKAFGEDIBJL_OFFSET UNITYSDK_OFFSET(0x1C0A70A0)
#define OKPIIAPJGGP__CTOR_OFFSET UNITYSDK_OFFSET(0x1C0A6E10)

inline static constexpr unsigned int OKPIIAPJGGP_TypeDefinitionIndex = 15128;

class OKPIIAPJGGP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KLDCCFDJDBH HBDPAIKANDB; // 0x18
	::System::Int32 OCFJMFHDEBP; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 OJEBFLKGHLO; // 0x30
	::System::Int32 CHEMDLHDNFG; // 0x34
	::System::Int32 JPKHIJMPNHH; // 0x38

	::System::Void _ctor(::KLDCCFDJDBH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KLDCCFDJDBH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OKPIIAPJGGP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 KMJOKBIIEDB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIIAPJGGP_KMJOKBIIEDB_OFFSET))(this);
	}

	::System::Int32 EDNKOHKEPII()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIIAPJGGP_EDNKOHKEPII_OFFSET))(this);
	}

	::System::Int32 PKAFGEDIBJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIIAPJGGP_PKAFGEDIBJL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIIAPJGGP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OKPIIAPJGGP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ALCJBBFBILD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIIAPJGGP_ALCJBBFBILD_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKPIIAPJGGP_COFGIJJOFLP_OFFSET))(this);
	}
};
