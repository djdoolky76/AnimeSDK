#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJDDAGLMMOH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LMCOPNJEHMO_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1AB009B0)
#define LMCOPNJEHMO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB00660)
#define LMCOPNJEHMO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB00860)
#define LMCOPNJEHMO_JENCFBLNJBL_OFFSET UNITYSDK_OFFSET(0x1AB00750)
#define LMCOPNJEHMO_KBIIPJALCNE_OFFSET UNITYSDK_OFFSET(0x1AB00870)
#define LMCOPNJEHMO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB00650)
#define LMCOPNJEHMO__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB00640)

inline static constexpr unsigned int LMCOPNJEHMO_TypeDefinitionIndex = 16380;

class LMCOPNJEHMO : public ::System::Object
{
public:
	::System::String* AGIOKAICIHE; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::EJDDAGLMMOH HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 NLCDENLKOPM; // 0x34
	::System::Int32 OGAGKPKBBCG; // 0x38

	::System::Void _ctor(::EJDDAGLMMOH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EJDDAGLMMOH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LMCOPNJEHMO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOPNJEHMO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOPNJEHMO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* JENCFBLNJBL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOPNJEHMO_JENCFBLNJBL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LMCOPNJEHMO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 KBIIPJALCNE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOPNJEHMO_KBIIPJALCNE_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LMCOPNJEHMO_BKNKCFDBLGH_OFFSET))(this);
	}
};
