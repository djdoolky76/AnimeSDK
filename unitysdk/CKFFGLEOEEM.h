#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJMBCDMFIGF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CKFFGLEOEEM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x157434D0)
#define CKFFGLEOEEM_EFOELIKLAFG_OFFSET UNITYSDK_OFFSET(0x15743290)
#define CKFFGLEOEEM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x157434B0)
#define CKFFGLEOEEM_GEDCIEFJJFO_OFFSET UNITYSDK_OFFSET(0x157433A0)
#define CKFFGLEOEEM_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x15743010)
#define CKFFGLEOEEM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x157434C0)
#define CKFFGLEOEEM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15743150)
#define CKFFGLEOEEM__CTOR_OFFSET UNITYSDK_OFFSET(0x15743000)

inline static constexpr unsigned int CKFFGLEOEEM_TypeDefinitionIndex = 14517;

class CKFFGLEOEEM : public ::System::Object
{
public:
	::EJMBCDMFIGF HBDPAIKANDB; // 0x10
	::System::String* IJIGLEBBNCP; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* PMAFBLCFBPP; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x3C
	::System::Int32 PCMOJLNOPPM; // 0x40

	::System::Void _ctor(::EJMBCDMFIGF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EJMBCDMFIGF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CKFFGLEOEEM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFFGLEOEEM_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFFGLEOEEM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* EFOELIKLAFG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFFGLEOEEM_EFOELIKLAFG_OFFSET))(this);
	}

	::System::String* GEDCIEFJJFO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFFGLEOEEM_GEDCIEFJJFO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKFFGLEOEEM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFFGLEOEEM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKFFGLEOEEM_COFGIJJOFLP_OFFSET))(this);
	}
};
