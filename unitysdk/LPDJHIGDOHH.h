#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPLHDBCEJF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LPDJHIGDOHH_AFOGBDCMPNF_OFFSET UNITYSDK_OFFSET(0x1AB02DA0)
#define LPDJHIGDOHH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AB02CB0)
#define LPDJHIGDOHH_DDKKJOFODIP_OFFSET UNITYSDK_OFFSET(0x1AB02ED0)
#define LPDJHIGDOHH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AB02EB0)
#define LPDJHIGDOHH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AB02EC0)
#define LPDJHIGDOHH__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB02CA0)

inline static constexpr unsigned int LPDJHIGDOHH_TypeDefinitionIndex = 13859;

class LPDJHIGDOHH : public ::System::Object
{
public:
	::System::String* PHNJKOBNDNK; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::FMPLHDBCEJF HBDPAIKANDB; // 0x20
	::System::String* LHDNHIKAPLI; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::FMPLHDBCEJF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FMPLHDBCEJF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LPDJHIGDOHH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJHIGDOHH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* AFOGBDCMPNF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJHIGDOHH_AFOGBDCMPNF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LPDJHIGDOHH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJHIGDOHH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DDKKJOFODIP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LPDJHIGDOHH_DDKKJOFODIP_OFFSET))(this);
	}
};
