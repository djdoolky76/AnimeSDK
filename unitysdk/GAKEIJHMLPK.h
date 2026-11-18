#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIMPJFDKJFD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GAKEIJHMLPK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x166417F0)
#define GAKEIJHMLPK_ENMFBPHENPG_OFFSET UNITYSDK_OFFSET(0x166416C0)
#define GAKEIJHMLPK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x166417E0)
#define GAKEIJHMLPK_LHEHAPOFCCK_OFFSET UNITYSDK_OFFSET(0x166415B0)
#define GAKEIJHMLPK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x166417D0)
#define GAKEIJHMLPK__CTOR_OFFSET UNITYSDK_OFFSET(0x166415A0)

inline static constexpr unsigned int GAKEIJHMLPK_TypeDefinitionIndex = 12618;

class GAKEIJHMLPK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DIMPJFDKJFD HBDPAIKANDB; // 0x18
	::System::String* JHKLHHNIIFL; // 0x28
	::System::String* MOCOIOGLKBD; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::DIMPJFDKJFD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DIMPJFDKJFD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GAKEIJHMLPK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* LHEHAPOFCCK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKEIJHMLPK_LHEHAPOFCCK_OFFSET))(this);
	}

	::System::String* ENMFBPHENPG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKEIJHMLPK_ENMFBPHENPG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKEIJHMLPK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GAKEIJHMLPK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAKEIJHMLPK_COFGIJJOFLP_OFFSET))(this);
	}
};
