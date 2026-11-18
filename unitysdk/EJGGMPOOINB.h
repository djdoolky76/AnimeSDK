#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PNBGGHAODBE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EJGGMPOOINB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A1A05D0)
#define EJGGMPOOINB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A1A0370)
#define EJGGMPOOINB_IFLLPMDKGME_OFFSET UNITYSDK_OFFSET(0x1A1A06C0)
#define EJGGMPOOINB_INFLJPCNNKM_OFFSET UNITYSDK_OFFSET(0x1A1A0490)
#define EJGGMPOOINB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A1A0360)
#define EJGGMPOOINB_NIFIOCFLOEO_OFFSET UNITYSDK_OFFSET(0x1A1A0380)
#define EJGGMPOOINB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A0350)

inline static constexpr unsigned int EJGGMPOOINB_TypeDefinitionIndex = 15606;

class EJGGMPOOINB : public ::System::Object
{
public:
	::PNBGGHAODBE HBDPAIKANDB; // 0x10
	::System::String* NKNIFAIPLHK; // 0x20
	::System::String* DCLPFALENGN; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 GGHBJAOGHGP; // 0x3C

	::System::Void _ctor(::PNBGGHAODBE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PNBGGHAODBE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EJGGMPOOINB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGGMPOOINB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJGGMPOOINB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* NIFIOCFLOEO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGGMPOOINB_NIFIOCFLOEO_OFFSET))(this);
	}

	::System::Int32 INFLJPCNNKM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGGMPOOINB_INFLJPCNNKM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGGMPOOINB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* IFLLPMDKGME()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGGMPOOINB_IFLLPMDKGME_OFFSET))(this);
	}
};
