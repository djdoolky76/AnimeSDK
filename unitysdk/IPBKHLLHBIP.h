#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GPJMHAAEIKO.h"
#include "unitysdk/MDANFNMCABA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IPBKHLLHBIP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17485860)
#define IPBKHLLHBIP_DOJILHIHJND_OFFSET UNITYSDK_OFFSET(0x17485A80)
#define IPBKHLLHBIP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17485A70)
#define IPBKHLLHBIP_HPAEJMJJEOF_OFFSET UNITYSDK_OFFSET(0x17485950)
#define IPBKHLLHBIP_LCPGOPHCKPF_OFFSET UNITYSDK_OFFSET(0x17485BD0)
#define IPBKHLLHBIP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17485A60)
#define IPBKHLLHBIP__CTOR_OFFSET UNITYSDK_OFFSET(0x17485850)

inline static constexpr unsigned int IPBKHLLHBIP_TypeDefinitionIndex = 12963;

class IPBKHLLHBIP : public ::System::Object
{
public:
	::MDANFNMCABA HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* MPNDDKEPBJI; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32
	::System::Byte _padding0[0x1];
	::System::Int32 PHLACHCIIIL; // 0x34
	::GPJMHAAEIKO LKKKMMHABFH; // 0x38

	::System::Void _ctor(::MDANFNMCABA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MDANFNMCABA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IPBKHLLHBIP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKHLLHBIP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HPAEJMJJEOF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKHLLHBIP_HPAEJMJJEOF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKHLLHBIP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IPBKHLLHBIP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::GPJMHAAEIKO DOJILHIHJND()
	{
		return ((::GPJMHAAEIKO(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKHLLHBIP_DOJILHIHJND_OFFSET))(this);
	}

	::System::Int32 LCPGOPHCKPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IPBKHLLHBIP_LCPGOPHCKPF_OFFSET))(this);
	}
};
