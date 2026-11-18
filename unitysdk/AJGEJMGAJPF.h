#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHBBIAOBPKD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AJGEJMGAJPF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17A6EE90)
#define AJGEJMGAJPF_DBEFAHBNFLK_OFFSET UNITYSDK_OFFSET(0x17A6F200)
#define AJGEJMGAJPF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17A6EE80)
#define AJGEJMGAJPF_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x17A6F0C0)
#define AJGEJMGAJPF_KCFBOPKOLKI_OFFSET UNITYSDK_OFFSET(0x17A6F340)
#define AJGEJMGAJPF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17A6F480)
#define AJGEJMGAJPF_PHHBAMMBKLA_OFFSET UNITYSDK_OFFSET(0x17A6EF80)
#define AJGEJMGAJPF__CTOR_OFFSET UNITYSDK_OFFSET(0x17A6EE70)

inline static constexpr unsigned int AJGEJMGAJPF_TypeDefinitionIndex = 15720;

class AJGEJMGAJPF : public ::System::Object
{
public:
	::System::String* ODCIEIKJJEB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::LHBBIAOBPKD HBDPAIKANDB; // 0x20
	::System::Int32 MFAAMEMILEM; // 0x30
	::System::Int32 OKBBGPGIODD; // 0x34
	::System::Int32 JODJPCDGMPB; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Byte ACIOBDEBDNK; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 FCLBMABDCAL; // 0x40

	::System::Void _ctor(::LHBBIAOBPKD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHBBIAOBPKD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AJGEJMGAJPF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJGEJMGAJPF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGEJMGAJPF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PHHBAMMBKLA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGEJMGAJPF_PHHBAMMBKLA_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGEJMGAJPF_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Int32 DBEFAHBNFLK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGEJMGAJPF_DBEFAHBNFLK_OFFSET))(this);
	}

	::System::Int32 KCFBOPKOLKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGEJMGAJPF_KCFBOPKOLKI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJGEJMGAJPF_LJANCIBECFG_OFFSET))(this);
	}
};
