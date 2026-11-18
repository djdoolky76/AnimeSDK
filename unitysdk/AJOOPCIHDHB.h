#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DFDPLIPONKB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AJOOPCIHDHB_ANNHHHEGPOA_OFFSET UNITYSDK_OFFSET(0x1A521340)
#define AJOOPCIHDHB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A521950)
#define AJOOPCIHDHB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A521B80)
#define AJOOPCIHDHB_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x1A521B90)
#define AJOOPCIHDHB_IHDIGBLHPGK_OFFSET UNITYSDK_OFFSET(0x1A521700)
#define AJOOPCIHDHB_IOCNEHIGCOA_OFFSET UNITYSDK_OFFSET(0x1A521840)
#define AJOOPCIHDHB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A521330)
#define AJOOPCIHDHB_LJNBIAFBMIL_OFFSET UNITYSDK_OFFSET(0x1A5215C0)
#define AJOOPCIHDHB_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x1A521480)
#define AJOOPCIHDHB_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x1A5211F0)
#define AJOOPCIHDHB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1A521A40)
#define AJOOPCIHDHB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5211E0)

inline static constexpr unsigned int AJOOPCIHDHB_TypeDefinitionIndex = 14860;

class AJOOPCIHDHB : public ::System::Object
{
public:
	::System::String* GPNJCCHKLIP; // 0x10
	::System::String* OJGOGLBOEIG; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::DFDPLIPONKB HBDPAIKANDB; // 0x28
	::System::Int32 PEHLJEEIACG; // 0x38
	::System::Int32 HCAJIDPDDGH; // 0x3C
	::System::Int32 FEIOEHMLAIM; // 0x40
	::System::Int32 JABJBJHKDMH; // 0x44
	::System::Int32 EKGAGALOAMK; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte CNIAANMNOCF; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x50

	::System::Void _ctor(::DFDPLIPONKB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DFDPLIPONKB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AJOOPCIHDHB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 ANNHHHEGPOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_ANNHHHEGPOA_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Int32 LJNBIAFBMIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_LJNBIAFBMIL_OFFSET))(this);
	}

	::System::Int32 IHDIGBLHPGK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_IHDIGBLHPGK_OFFSET))(this);
	}

	::System::String* IOCNEHIGCOA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_IOCNEHIGCOA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJOOPCIHDHB_GPBFENDAJMF_OFFSET))(this);
	}
};
