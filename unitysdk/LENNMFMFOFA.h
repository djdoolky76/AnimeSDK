#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDMGDHBEEFM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LENNMFMFOFA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1958D810)
#define LENNMFMFOFA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1958D900)
#define LENNMFMFOFA_FOMIKJFMEGC_OFFSET UNITYSDK_OFFSET(0x1958D4D0)
#define LENNMFMFOFA_HHNJAHPKFDM_OFFSET UNITYSDK_OFFSET(0x1958D5E0)
#define LENNMFMFOFA_KAMFNLANGHC_OFFSET UNITYSDK_OFFSET(0x1958D6F0)
#define LENNMFMFOFA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1958D800)
#define LENNMFMFOFA_OCJNDDCJEGC_OFFSET UNITYSDK_OFFSET(0x1958D3C0)
#define LENNMFMFOFA__CTOR_OFFSET UNITYSDK_OFFSET(0x1958D3B0)

inline static constexpr unsigned int LENNMFMFOFA_TypeDefinitionIndex = 17506;

class LENNMFMFOFA : public ::System::Object
{
public:
	::LDMGDHBEEFM HBDPAIKANDB; // 0x10
	::System::String* OLPHIELDCGJ; // 0x20
	::System::String* KDLDGFGPJMN; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* LEIKCLDCAND; // 0x38
	::System::String* DHFACKENNBO; // 0x40
	::System::Byte CNIAANMNOCF; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::LDMGDHBEEFM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LDMGDHBEEFM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LENNMFMFOFA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* OCJNDDCJEGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNMFMFOFA_OCJNDDCJEGC_OFFSET))(this);
	}

	::System::String* FOMIKJFMEGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNMFMFOFA_FOMIKJFMEGC_OFFSET))(this);
	}

	::System::String* HHNJAHPKFDM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNMFMFOFA_HHNJAHPKFDM_OFFSET))(this);
	}

	::System::String* KAMFNLANGHC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNMFMFOFA_KAMFNLANGHC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNMFMFOFA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LENNMFMFOFA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LENNMFMFOFA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
