#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HLKHNNFPGDC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CKABBILAGAN_BKNKCFDBLGH_OFFSET UNITYSDK_OFFSET(0x1A545A50)
#define CKABBILAGAN_CFMDMOMPCLG_OFFSET UNITYSDK_OFFSET(0x1A545D90)
#define CKABBILAGAN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A545B90)
#define CKABBILAGAN_DGNLLFEJCNJ_OFFSET UNITYSDK_OFFSET(0x1A5456D0)
#define CKABBILAGAN_EMLIKHBDBMH_OFFSET UNITYSDK_OFFSET(0x1A5457F0)
#define CKABBILAGAN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A5457E0)
#define CKABBILAGAN_FOGOLEKFJAD_OFFSET UNITYSDK_OFFSET(0x1A545C80)
#define CKABBILAGAN_JOOGAMFIMIM_OFFSET UNITYSDK_OFFSET(0x1A545900)
#define CKABBILAGAN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A545A40)
#define CKABBILAGAN__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5456C0)

inline static constexpr unsigned int CKABBILAGAN_TypeDefinitionIndex = 14830;

class CKABBILAGAN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::HLKHNNFPGDC HBDPAIKANDB; // 0x18
	::System::String* BPDKHHGNBMK; // 0x28
	::System::String* NGBGOIPKGDF; // 0x30
	::System::String* PFGDOJFEBAD; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte BGNBHAPEFNC; // 0x42
	::System::Byte GCHCDJCFCEG; // 0x43
	::System::Byte KKEIFBMCEMO; // 0x44
	::System::Byte _padding0[0x3];
	::System::Int32 NLCDENLKOPM; // 0x48
	::System::Int32 AGCCNKHEAKP; // 0x4C
	::System::Int32 POIPKBMDCNI; // 0x50

	::System::Void _ctor(::HLKHNNFPGDC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HLKHNNFPGDC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CKABBILAGAN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DGNLLFEJCNJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_DGNLLFEJCNJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKABBILAGAN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EMLIKHBDBMH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_EMLIKHBDBMH_OFFSET))(this);
	}

	::System::Int32 JOOGAMFIMIM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_JOOGAMFIMIM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BKNKCFDBLGH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_BKNKCFDBLGH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* FOGOLEKFJAD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_FOGOLEKFJAD_OFFSET))(this);
	}

	::System::Int32 CFMDMOMPCLG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKABBILAGAN_CFMDMOMPCLG_OFFSET))(this);
	}
};
