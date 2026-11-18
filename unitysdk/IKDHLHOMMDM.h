#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AGBNEKFIBCB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IKDHLHOMMDM_ACDOMAEJONK_OFFSET UNITYSDK_OFFSET(0x1B4EE990)
#define IKDHLHOMMDM_APGCNEFCNNK_OFFSET UNITYSDK_OFFSET(0x1B4EE750)
#define IKDHLHOMMDM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B4EE8A0)
#define IKDHLHOMMDM_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x1B4EE4F0)
#define IKDHLHOMMDM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B4EE890)
#define IKDHLHOMMDM_IGKFAFBGBAP_OFFSET UNITYSDK_OFFSET(0x1B4EE610)
#define IKDHLHOMMDM_LBAGPMHCOCN_OFFSET UNITYSDK_OFFSET(0x1B4EE3B0)
#define IKDHLHOMMDM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B4EE600)
#define IKDHLHOMMDM__CTOR_OFFSET UNITYSDK_OFFSET(0x1B4EE3A0)

inline static constexpr unsigned int IKDHLHOMMDM_TypeDefinitionIndex = 10683;

class IKDHLHOMMDM : public ::System::Object
{
public:
	::System::String* BEFGHBANBAB; // 0x10
	::System::String* FGECIGPJPCF; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::AGBNEKFIBCB HBDPAIKANDB; // 0x28
	::System::Int32 BDLMCMBNHHK; // 0x38
	::System::Int32 POJBGEOJBHL; // 0x3C
	::System::Int32 IJCCNHNDHNI; // 0x40
	::System::Int32 OFGMKLFNPPJ; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A

	::System::Void _ctor(::AGBNEKFIBCB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::AGBNEKFIBCB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IKDHLHOMMDM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 LBAGPMHCOCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_LBAGPMHCOCN_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_DCGJGALIIHB_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 IGKFAFBGBAP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_IGKFAFBGBAP_OFFSET))(this);
	}

	::System::Int32 APGCNEFCNNK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_APGCNEFCNNK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* ACDOMAEJONK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IKDHLHOMMDM_ACDOMAEJONK_OFFSET))(this);
	}
};
