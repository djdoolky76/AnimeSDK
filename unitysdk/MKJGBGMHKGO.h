#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NDKEOHEJEMJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MKJGBGMHKGO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x195A63D0)
#define MKJGBGMHKGO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x195A65D0)
#define MKJGBGMHKGO_GLDAHKGLMHJ_OFFSET UNITYSDK_OFFSET(0x195A65E0)
#define MKJGBGMHKGO_HBNKNBKLDAJ_OFFSET UNITYSDK_OFFSET(0x195A64C0)
#define MKJGBGMHKGO_ILJJKAPDFJF_OFFSET UNITYSDK_OFFSET(0x195A62C0)
#define MKJGBGMHKGO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x195A62B0)
#define MKJGBGMHKGO__CTOR_OFFSET UNITYSDK_OFFSET(0x195A62A0)

inline static constexpr unsigned int MKJGBGMHKGO_TypeDefinitionIndex = 16870;

class MKJGBGMHKGO : public ::System::Object
{
public:
	::System::String* LJLLLMEHKBN; // 0x10
	::System::String* PAPDJMEPODA; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* PFPNPDIDCEO; // 0x28
	::NDKEOHEJEMJ HBDPAIKANDB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::NDKEOHEJEMJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NDKEOHEJEMJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MKJGBGMHKGO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJGBGMHKGO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ILJJKAPDFJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJGBGMHKGO_ILJJKAPDFJF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJGBGMHKGO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HBNKNBKLDAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJGBGMHKGO_HBNKNBKLDAJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MKJGBGMHKGO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GLDAHKGLMHJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MKJGBGMHKGO_GLDAHKGLMHJ_OFFSET))(this);
	}
};
