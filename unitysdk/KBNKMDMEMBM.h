#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LPAINBAPDBL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define KBNKMDMEMBM_BDGCAOBNDHJ_OFFSET UNITYSDK_OFFSET(0x17493A10)
#define KBNKMDMEMBM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17493CA0)
#define KBNKMDMEMBM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17493670)
#define KBNKMDMEMBM_GIJGALKAMHI_OFFSET UNITYSDK_OFFSET(0x17493D90)
#define KBNKMDMEMBM_GPBFENDAJMF_OFFSET UNITYSDK_OFFSET(0x17493680)
#define KBNKMDMEMBM_IOHIHIFBFAN_OFFSET UNITYSDK_OFFSET(0x17493B60)
#define KBNKMDMEMBM_KLCNIHEJMBF_OFFSET UNITYSDK_OFFSET(0x17493790)
#define KBNKMDMEMBM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17493B50)
#define KBNKMDMEMBM_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x174938D0)
#define KBNKMDMEMBM__CTOR_OFFSET UNITYSDK_OFFSET(0x17493660)

inline static constexpr unsigned int KBNKMDMEMBM_TypeDefinitionIndex = 17706;

class KBNKMDMEMBM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::LPAINBAPDBL HBDPAIKANDB; // 0x18
	::System::String* GPNJCCHKLIP; // 0x28
	::System::Int32 LMCOFAFHNBN; // 0x30
	::System::Int32 HIIOFLLIEMD; // 0x34
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 BJJLIIONAAO; // 0x3C
	::System::Int32 CAHNBGIOLCH; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x45
	::System::Byte CNIAANMNOCF; // 0x46

	::System::Void _ctor(::LPAINBAPDBL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LPAINBAPDBL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KBNKMDMEMBM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* GPBFENDAJMF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_GPBFENDAJMF_OFFSET))(this);
	}

	::System::Int32 KLCNIHEJMBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_KLCNIHEJMBF_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 BDGCAOBNDHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_BDGCAOBNDHJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IOHIHIFBFAN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_IOHIHIFBFAN_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GIJGALKAMHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + KBNKMDMEMBM_GIJGALKAMHI_OFFSET))(this);
	}
};
