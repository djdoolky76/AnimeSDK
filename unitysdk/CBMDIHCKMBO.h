#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GAGPADCCDAG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CBMDIHCKMBO_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x1A57FCA0)
#define CBMDIHCKMBO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A57FAA0)
#define CBMDIHCKMBO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A580000)
#define CBMDIHCKMBO_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1A57F820)
#define CBMDIHCKMBO_IIOBAJPHDMI_OFFSET UNITYSDK_OFFSET(0x1A57F710)
#define CBMDIHCKMBO_INKGGPFILOH_OFFSET UNITYSDK_OFFSET(0x1A57FEF0)
#define CBMDIHCKMBO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A580010)
#define CBMDIHCKMBO_MFDLCOOJMGG_OFFSET UNITYSDK_OFFSET(0x1A57FB90)
#define CBMDIHCKMBO_PKINHJFGMOF_OFFSET UNITYSDK_OFFSET(0x1A57FDE0)
#define CBMDIHCKMBO_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A57F960)
#define CBMDIHCKMBO__CTOR_OFFSET UNITYSDK_OFFSET(0x1A57F700)

inline static constexpr unsigned int CBMDIHCKMBO_TypeDefinitionIndex = 16617;

class CBMDIHCKMBO : public ::System::Object
{
public:
	::System::String* NJPNAJOIOEC; // 0x10
	::System::String* HNGABKPPLJK; // 0x18
	::GAGPADCCDAG HBDPAIKANDB; // 0x20
	::System::String* NIHBNOMGDAG; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* GIOJKMMDKKO; // 0x38
	::System::String* CEFOEPAPPBJ; // 0x40
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x48
	::System::Int32 PCMOJLNOPPM; // 0x50
	::System::Int32 OKBBGPGIODD; // 0x54
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x58
	::System::Byte ACIOBDEBDNK; // 0x59
	::System::Byte CNIAANMNOCF; // 0x5A
	::System::Byte _padding0[0x1];
	::System::Int32 BPMHKHIBGEJ; // 0x5C

	::System::Void _ctor(::GAGPADCCDAG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GAGPADCCDAG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CBMDIHCKMBO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IIOBAJPHDMI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_IIOBAJPHDMI_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MFDLCOOJMGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_MFDLCOOJMGG_OFFSET))(this);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_APCKPKCNFJE_OFFSET))(this);
	}

	::System::String* PKINHJFGMOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_PKINHJFGMOF_OFFSET))(this);
	}

	::System::String* INKGGPFILOH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_INKGGPFILOH_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CBMDIHCKMBO_LJANCIBECFG_OFFSET))(this);
	}
};
