#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KEILJJCJBEI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HELBHKLAFPP_BOPOIPGDNKN_OFFSET UNITYSDK_OFFSET(0x1B7C3130)
#define HELBHKLAFPP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B7C3270)
#define HELBHKLAFPP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B7C2D50)
#define HELBHKLAFPP_LGEHGDIBBPC_OFFSET UNITYSDK_OFFSET(0x1B7C2FF0)
#define HELBHKLAFPP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B7C2EA0)
#define HELBHKLAFPP_MGFNLLKPGEA_OFFSET UNITYSDK_OFFSET(0x1B7C2EB0)
#define HELBHKLAFPP_NCJJHGHPKCK_OFFSET UNITYSDK_OFFSET(0x1B7C2D60)
#define HELBHKLAFPP_PLNLLMEGAML_OFFSET UNITYSDK_OFFSET(0x1B7C2C10)
#define HELBHKLAFPP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7C2C00)

inline static constexpr unsigned int HELBHKLAFPP_TypeDefinitionIndex = 11134;

class HELBHKLAFPP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::KEILJJCJBEI HBDPAIKANDB; // 0x18
	::System::Byte ACIOBDEBDNK; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x29
	::System::Byte CNIAANMNOCF; // 0x2A
	::System::Byte _padding0[0x1];
	::System::Int32 GMEKIIMCLEK; // 0x2C
	::System::Int32 GCCAKLCOFLO; // 0x30
	::System::Int32 LCCEKJOLBJG; // 0x34
	::System::Int32 JBKJPCHHDNM; // 0x38
	::System::Int32 LDHENOINKHK; // 0x3C

	::System::Void _ctor(::KEILJJCJBEI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KEILJJCJBEI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HELBHKLAFPP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PLNLLMEGAML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBHKLAFPP_PLNLLMEGAML_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HELBHKLAFPP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NCJJHGHPKCK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBHKLAFPP_NCJJHGHPKCK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBHKLAFPP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MGFNLLKPGEA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBHKLAFPP_MGFNLLKPGEA_OFFSET))(this);
	}

	::System::Int32 LGEHGDIBBPC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBHKLAFPP_LGEHGDIBBPC_OFFSET))(this);
	}

	::System::Int32 BOPOIPGDNKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBHKLAFPP_BOPOIPGDNKN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HELBHKLAFPP_COFGIJJOFLP_OFFSET))(this);
	}
};
