#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MLBLIKICEAK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define FFKCGOMJHFG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4C07C0)
#define FFKCGOMJHFG_DFPDKIDIINN_OFFSET UNITYSDK_OFFSET(0x1B4C0AF0)
#define FFKCGOMJHFG_FMMPAHDIIJI_OFFSET UNITYSDK_OFFSET(0x1B4C08B0)
#define FFKCGOMJHFG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4C09D0)
#define FFKCGOMJHFG_IFKOAKEOKPH_OFFSET UNITYSDK_OFFSET(0x1B4C09E0)
#define FFKCGOMJHFG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4C09C0)
#define FFKCGOMJHFG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4C07B0)

inline static constexpr unsigned int FFKCGOMJHFG_TypeDefinitionIndex = 14380;

class FFKCGOMJHFG : public ::System::Object
{
public:
	::System::String* FDPGAEOLHBP; // 0x10
	::System::String* DDEDCKMJDHE; // 0x18
	::System::String* FKNFDDBDACJ; // 0x20
	::MLBLIKICEAK HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* PENOMFCBIMO; // 0x40
	::System::Int32 IKFIAIHFIAL; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x4D
	::System::Byte CNIAANMNOCF; // 0x4E

	::System::Void _ctor(::MLBLIKICEAK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MLBLIKICEAK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FFKCGOMJHFG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKCGOMJHFG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FMMPAHDIIJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKCGOMJHFG_FMMPAHDIIJI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKCGOMJHFG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FFKCGOMJHFG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IFKOAKEOKPH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKCGOMJHFG_IFKOAKEOKPH_OFFSET))(this);
	}

	::System::String* DFPDKIDIINN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FFKCGOMJHFG_DFPDKIDIINN_OFFSET))(this);
	}
};
