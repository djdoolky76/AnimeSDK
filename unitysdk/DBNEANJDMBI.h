#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JALCEGMFNHB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define DBNEANJDMBI_AJFFCMNAIEN_OFFSET UNITYSDK_OFFSET(0x19C011B0)
#define DBNEANJDMBI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19C00E60)
#define DBNEANJDMBI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19C012C0)
#define DBNEANJDMBI_IEJBHOLKNPO_OFFSET UNITYSDK_OFFSET(0x19C00F50)
#define DBNEANJDMBI_IGJIKLAACJA_OFFSET UNITYSDK_OFFSET(0x19C012D0)
#define DBNEANJDMBI_JFNBMOEDJKH_OFFSET UNITYSDK_OFFSET(0x19C00D50)
#define DBNEANJDMBI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19C01060)
#define DBNEANJDMBI_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x19C01070)
#define DBNEANJDMBI__CTOR_OFFSET UNITYSDK_OFFSET(0x19C00D40)

inline static constexpr unsigned int DBNEANJDMBI_TypeDefinitionIndex = 12669;

class DBNEANJDMBI : public ::System::Object
{
public:
	::System::String* BADBBCLNFDO; // 0x10
	::System::String* OCKDFOKJNEM; // 0x18
	::System::String* KKBBCOKNLDN; // 0x20
	::JALCEGMFNHB HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Byte ACIOBDEBDNK; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 EMKPILMPIHC; // 0x44
	::System::Int32 PCMOJLNOPPM; // 0x48

	::System::Void _ctor(::JALCEGMFNHB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JALCEGMFNHB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DBNEANJDMBI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* JFNBMOEDJKH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNEANJDMBI_JFNBMOEDJKH_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNEANJDMBI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* IEJBHOLKNPO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNEANJDMBI_IEJBHOLKNPO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNEANJDMBI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNEANJDMBI_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::String* AJFFCMNAIEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNEANJDMBI_AJFFCMNAIEN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DBNEANJDMBI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 IGJIKLAACJA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DBNEANJDMBI_IGJIKLAACJA_OFFSET))(this);
	}
};
