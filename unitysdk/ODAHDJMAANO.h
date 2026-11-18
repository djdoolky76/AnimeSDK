#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENAPGGCGJGD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ODAHDJMAANO_BPJJDBOHMLN_OFFSET UNITYSDK_OFFSET(0x1C09CC90)
#define ODAHDJMAANO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C09CB90)
#define ODAHDJMAANO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C09CEE0)
#define ODAHDJMAANO_HJEFCNNHHEO_OFFSET UNITYSDK_OFFSET(0x1C09CEF0)
#define ODAHDJMAANO_JNBJKKHMBNN_OFFSET UNITYSDK_OFFSET(0x1C09CDD0)
#define ODAHDJMAANO_LJABJODAMKF_OFFSET UNITYSDK_OFFSET(0x1C09C940)
#define ODAHDJMAANO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C09CC80)
#define ODAHDJMAANO_LMCFEHJCNFK_OFFSET UNITYSDK_OFFSET(0x1C09CA50)
#define ODAHDJMAANO_PCHMHIPALHD_OFFSET UNITYSDK_OFFSET(0x1C09D030)
#define ODAHDJMAANO__CTOR_OFFSET UNITYSDK_OFFSET(0x1C09C930)

inline static constexpr unsigned int ODAHDJMAANO_TypeDefinitionIndex = 16147;

class ODAHDJMAANO : public ::System::Object
{
public:
	::System::String* ALMBKJCEIDL; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::ENAPGGCGJGD HBDPAIKANDB; // 0x20
	::System::String* CEOEOAGJBAK; // 0x30
	::System::String* GCCPIEDLCMI; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 FHDIKPBONDO; // 0x44
	::System::Int32 DLLODMCEJJJ; // 0x48
	::System::Int32 ONPMJGJBNOA; // 0x4C

	::System::Void _ctor(::ENAPGGCGJGD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ENAPGGCGJGD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ODAHDJMAANO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* LJABJODAMKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_LJABJODAMKF_OFFSET))(this);
	}

	::System::Int32 LMCFEHJCNFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_LMCFEHJCNFK_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 BPJJDBOHMLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_BPJJDBOHMLN_OFFSET))(this);
	}

	::System::String* JNBJKKHMBNN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_JNBJKKHMBNN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ODAHDJMAANO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 HJEFCNNHHEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_HJEFCNNHHEO_OFFSET))(this);
	}

	::System::String* PCHMHIPALHD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ODAHDJMAANO_PCHMHIPALHD_OFFSET))(this);
	}
};
