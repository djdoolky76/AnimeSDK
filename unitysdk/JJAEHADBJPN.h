#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IPNDKHPHDOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define JJAEHADBJPN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C299F0)
#define JJAEHADBJPN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C299E0)
#define JJAEHADBJPN_GJFJEMEFDIC_OFFSET UNITYSDK_OFFSET(0x17C298D0)
#define JJAEHADBJPN_HOFFNEEAIMI_OFFSET UNITYSDK_OFFSET(0x17C29530)
#define JJAEHADBJPN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C298C0)
#define JJAEHADBJPN_LNFFOBFGKEE_OFFSET UNITYSDK_OFFSET(0x17C29670)
#define JJAEHADBJPN_NJPMMHIEJKG_OFFSET UNITYSDK_OFFSET(0x17C29780)
#define JJAEHADBJPN__CTOR_OFFSET UNITYSDK_OFFSET(0x17C29520)

inline static constexpr unsigned int JJAEHADBJPN_TypeDefinitionIndex = 13459;

class JJAEHADBJPN : public ::System::Object
{
public:
	::System::String* LOJPDJKOGJE; // 0x10
	::System::String* EIBAMPPLFOI; // 0x18
	::IPNDKHPHDOD HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 LMDCKOADMLD; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Byte CNIAANMNOCF; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte _padding0[0x1];
	::System::Int32 PGGDPNGCIOC; // 0x40

	::System::Void _ctor(::IPNDKHPHDOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IPNDKHPHDOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JJAEHADBJPN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 HOFFNEEAIMI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEHADBJPN_HOFFNEEAIMI_OFFSET))(this);
	}

	::System::String* LNFFOBFGKEE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEHADBJPN_LNFFOBFGKEE_OFFSET))(this);
	}

	::System::Int32 NJPMMHIEJKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEHADBJPN_NJPMMHIEJKG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEHADBJPN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GJFJEMEFDIC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEHADBJPN_GJFJEMEFDIC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JJAEHADBJPN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJAEHADBJPN_COFGIJJOFLP_OFFSET))(this);
	}
};
