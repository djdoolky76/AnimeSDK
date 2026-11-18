#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCKMBDMCHHF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EMIMOOLEMCM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B858280)
#define EMIMOOLEMCM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B8584B0)
#define EMIMOOLEMCM_HCIPFKPLNLA_OFFSET UNITYSDK_OFFSET(0x1B8585D0)
#define EMIMOOLEMCM_IPOBNOEHJND_OFFSET UNITYSDK_OFFSET(0x1B8584C0)
#define EMIMOOLEMCM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B8586E0)
#define EMIMOOLEMCM_NGKOPBCHFOP_OFFSET UNITYSDK_OFFSET(0x1B858370)
#define EMIMOOLEMCM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B858270)

inline static constexpr unsigned int EMIMOOLEMCM_TypeDefinitionIndex = 17328;

class EMIMOOLEMCM : public ::System::Object
{
public:
	::System::String* NJKOCAOMDLI; // 0x10
	::System::String* HDLCMPPKINK; // 0x18
	::System::String* OCKECPHHFIJ; // 0x20
	::System::String* JBFMBNFEEAO; // 0x28
	::DCKMBDMCHHF HBDPAIKANDB; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x40
	::System::Int32 OHMLOEKNBHC; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x4C
	::System::Byte CNIAANMNOCF; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 GAAEEJAGKMG; // 0x50
	::System::Int32 HFGDGOKLGMH; // 0x54

	::System::Void _ctor(::DCKMBDMCHHF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DCKMBDMCHHF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EMIMOOLEMCM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIMOOLEMCM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 NGKOPBCHFOP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIMOOLEMCM_NGKOPBCHFOP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMIMOOLEMCM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IPOBNOEHJND()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIMOOLEMCM_IPOBNOEHJND_OFFSET))(this);
	}

	::System::String* HCIPFKPLNLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIMOOLEMCM_HCIPFKPLNLA_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMIMOOLEMCM_LJANCIBECFG_OFFSET))(this);
	}
};
