#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DIOBJHHNNIG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ODGCPPNOICF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD87950)
#define ODGCPPNOICF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD875D0)
#define ODGCPPNOICF_IJDBPPNMNLG_OFFSET UNITYSDK_OFFSET(0x1AD875F0)
#define ODGCPPNOICF_INEJHDHPFBM_OFFSET UNITYSDK_OFFSET(0x1AD87700)
#define ODGCPPNOICF_JEPFLFNCOIE_OFFSET UNITYSDK_OFFSET(0x1AD87840)
#define ODGCPPNOICF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD875E0)
#define ODGCPPNOICF__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD875C0)

inline static constexpr unsigned int ODGCPPNOICF_TypeDefinitionIndex = 16529;

class ODGCPPNOICF : public ::System::Object
{
public:
	::DIOBJHHNNIG HBDPAIKANDB; // 0x10
	::System::String* EDFAEDKCKEO; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* DINHJELIHPN; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 KAHNIFAOGFC; // 0x3C

	::System::Void _ctor(::DIOBJHHNNIG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DIOBJHHNNIG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ODGCPPNOICF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODGCPPNOICF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGCPPNOICF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* IJDBPPNMNLG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGCPPNOICF_IJDBPPNMNLG_OFFSET))(this);
	}

	::System::Int32 INEJHDHPFBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGCPPNOICF_INEJHDHPFBM_OFFSET))(this);
	}

	::System::String* JEPFLFNCOIE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGCPPNOICF_JEPFLFNCOIE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODGCPPNOICF_COFGIJJOFLP_OFFSET))(this);
	}
};
