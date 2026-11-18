#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LDKGMDHNHJM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JKKGKLFHBML_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x15AABA90)
#define JKKGKLFHBML_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15AAB710)
#define JKKGKLFHBML_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x15AABBE0)
#define JKKGKLFHBML_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15AABBD0)
#define JKKGKLFHBML_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15AAB940)
#define JKKGKLFHBML_NFOJJOKMACB_OFFSET UNITYSDK_OFFSET(0x15AAB800)
#define JKKGKLFHBML_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15AAB950)
#define JKKGKLFHBML__CTOR_OFFSET UNITYSDK_OFFSET(0x15AAB700)

inline static constexpr unsigned int JKKGKLFHBML_TypeDefinitionIndex = 12419;

class JKKGKLFHBML : public ::System::Object
{
public:
	::LDKGMDHNHJM HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* IENCBDEPMFJ; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 NLCDENLKOPM; // 0x38
	::System::Int32 BMLHNBPINIA; // 0x3C

	::System::Void _ctor(::LDKGMDHNHJM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LDKGMDHNHJM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JKKGKLFHBML__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKGKLFHBML_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NFOJJOKMACB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKGKLFHBML_NFOJJOKMACB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKGKLFHBML_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKGKLFHBML_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKGKLFHBML_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JKKGKLFHBML_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JKKGKLFHBML_DECMGICKDLH_OFFSET))(this);
	}
};
