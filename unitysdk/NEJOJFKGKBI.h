#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JHMBEJKIBCP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define NEJOJFKGKBI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19116CD0)
#define NEJOJFKGKBI_DAAMJMFKHBA_OFFSET UNITYSDK_OFFSET(0x19116A70)
#define NEJOJFKGKBI_DLKMGJDJOCP_OFFSET UNITYSDK_OFFSET(0x19116BC0)
#define NEJOJFKGKBI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19116BB0)
#define NEJOJFKGKBI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19116F00)
#define NEJOJFKGKBI_LNOBBAIGKJL_OFFSET UNITYSDK_OFFSET(0x19116DC0)
#define NEJOJFKGKBI_PAFMMMKAKPJ_OFFSET UNITYSDK_OFFSET(0x19116F10)
#define NEJOJFKGKBI__CTOR_OFFSET UNITYSDK_OFFSET(0x19116A60)

inline static constexpr unsigned int NEJOJFKGKBI_TypeDefinitionIndex = 12373;

class NEJOJFKGKBI : public ::System::Object
{
public:
	::System::String* KOFBIOBLCDF; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::JHMBEJKIBCP HBDPAIKANDB; // 0x20
	::System::String* LANEJCCOENN; // 0x30
	::System::Int32 JABJBJHKDMH; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 AEANNLBLBBC; // 0x40

	::System::Void _ctor(::JHMBEJKIBCP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JHMBEJKIBCP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NEJOJFKGKBI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DAAMJMFKHBA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJOJFKGKBI_DAAMJMFKHBA_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NEJOJFKGKBI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DLKMGJDJOCP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJOJFKGKBI_DLKMGJDJOCP_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJOJFKGKBI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 LNOBBAIGKJL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJOJFKGKBI_LNOBBAIGKJL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJOJFKGKBI_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PAFMMMKAKPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJOJFKGKBI_PAFMMMKAKPJ_OFFSET))(this);
	}
};
