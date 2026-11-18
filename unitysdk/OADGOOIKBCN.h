#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KDOCNGIOANC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define OADGOOIKBCN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF73940)
#define OADGOOIKBCN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF73930)
#define OADGOOIKBCN_GGCIFFNJNHN_OFFSET UNITYSDK_OFFSET(0x1BF73820)
#define OADGOOIKBCN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF73810)
#define OADGOOIKBCN_NLDJKBEHCAJ_OFFSET UNITYSDK_OFFSET(0x1BF73B70)
#define OADGOOIKBCN_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1BF73A30)
#define OADGOOIKBCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF73800)

inline static constexpr unsigned int OADGOOIKBCN_TypeDefinitionIndex = 15381;

class OADGOOIKBCN : public ::System::Object
{
public:
	::KDOCNGIOANC HBDPAIKANDB; // 0x10
	::System::String* BFCOLDHLMFI; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Int32 PCMOJLNOPPM; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x34
	::System::Byte CNIAANMNOCF; // 0x35
	::System::Byte ACIOBDEBDNK; // 0x36
	::System::Byte _padding0[0x1];
	::System::Int32 HMLGICGPPDG; // 0x38

	::System::Void _ctor(::KDOCNGIOANC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KDOCNGIOANC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + OADGOOIKBCN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGOOIKBCN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* GGCIFFNJNHN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGOOIKBCN_GGCIFFNJNHN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + OADGOOIKBCN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGOOIKBCN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGOOIKBCN_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Int32 NLDJKBEHCAJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OADGOOIKBCN_NLDJKBEHCAJ_OFFSET))(this);
	}
};
