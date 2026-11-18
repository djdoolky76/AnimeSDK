#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PBEHPIJCOPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OAFCEFIDELO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18E25180)
#define OAFCEFIDELO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18E25170)
#define OAFCEFIDELO_IKPOIFFILEP_OFFSET UNITYSDK_OFFSET(0x18E24F40)
#define OAFCEFIDELO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18E25050)
#define OAFCEFIDELO_ONJJNKNDOLE_OFFSET UNITYSDK_OFFSET(0x18E25060)
#define OAFCEFIDELO__CTOR_OFFSET UNITYSDK_OFFSET(0x18E24F30)

inline static constexpr unsigned int OAFCEFIDELO_TypeDefinitionIndex = 15426;

class OAFCEFIDELO : public ::System::Object
{
public:
	::System::String* CMHOABBGCGG; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::PBEHPIJCOPE HBDPAIKANDB; // 0x20
	::System::String* JIMHHGFNHGH; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A

	::System::Void _ctor(::PBEHPIJCOPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PBEHPIJCOPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OAFCEFIDELO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IKPOIFFILEP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCEFIDELO_IKPOIFFILEP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCEFIDELO_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ONJJNKNDOLE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCEFIDELO_ONJJNKNDOLE_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OAFCEFIDELO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OAFCEFIDELO_COFGIJJOFLP_OFFSET))(this);
	}
};
