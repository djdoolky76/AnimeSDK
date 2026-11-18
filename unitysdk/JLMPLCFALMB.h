#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PCNEMIJOHAI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JLMPLCFALMB_CLBHNIDENGD_OFFSET UNITYSDK_OFFSET(0x1B89B190)
#define JLMPLCFALMB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B89B530)
#define JLMPLCFALMB_DECMGICKDLH_OFFSET UNITYSDK_OFFSET(0x1B89B620)
#define JLMPLCFALMB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B89B180)
#define JLMPLCFALMB_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x1B89AF00)
#define JLMPLCFALMB_JMHMIPIGCCA_OFFSET UNITYSDK_OFFSET(0x1B89B410)
#define JLMPLCFALMB_LHFBDCOMFAM_OFFSET UNITYSDK_OFFSET(0x1B89B2D0)
#define JLMPLCFALMB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B89B520)
#define JLMPLCFALMB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B89B040)
#define JLMPLCFALMB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89AEF0)

inline static constexpr unsigned int JLMPLCFALMB_TypeDefinitionIndex = 17765;

class JLMPLCFALMB : public ::System::Object
{
public:
	::PCNEMIJOHAI HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* ENIAIAEGPBI; // 0x28
	::System::String* IENCBDEPMFJ; // 0x30
	::System::Int32 OKBBGPGIODD; // 0x38
	::System::Int32 DLBPJMGJLNE; // 0x3C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte GCHCDJCFCEG; // 0x43
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Int32 EEHLKMHNNNN; // 0x48

	::System::Void _ctor(::PCNEMIJOHAI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PCNEMIJOHAI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JLMPLCFALMB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JLMPLCFALMB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CLBHNIDENGD()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_CLBHNIDENGD_OFFSET))(this);
	}

	::System::Int32 LHFBDCOMFAM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_LHFBDCOMFAM_OFFSET))(this);
	}

	::System::String* JMHMIPIGCCA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_JMHMIPIGCCA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* DECMGICKDLH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JLMPLCFALMB_DECMGICKDLH_OFFSET))(this);
	}
};
