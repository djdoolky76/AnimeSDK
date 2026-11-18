#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OMMJHLCGEDL.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AANKABCENDF_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A50F980)
#define AANKABCENDF_DCCENPAEBBM_OFFSET UNITYSDK_OFFSET(0x1A50FA80)
#define AANKABCENDF_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A50FA70)
#define AANKABCENDF_HKBMLDGIMGF_OFFSET UNITYSDK_OFFSET(0x1A50FBC0)
#define AANKABCENDF_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A50F860)
#define AANKABCENDF_LNLNHEMFAEC_OFFSET UNITYSDK_OFFSET(0x1A50F870)
#define AANKABCENDF_PHHDNJBIIFK_OFFSET UNITYSDK_OFFSET(0x1A50F750)
#define AANKABCENDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1A50F740)

inline static constexpr unsigned int AANKABCENDF_TypeDefinitionIndex = 14162;

class AANKABCENDF : public ::System::Object
{
public:
	::OMMJHLCGEDL HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* LOFMHHBJJOB; // 0x28
	::System::String* DHBLPDHJAOH; // 0x30
	::System::Int32 JJFDBHNNBMC; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Byte CNIAANMNOCF; // 0x3E
	::System::Byte GCHCDJCFCEG; // 0x3F
	::System::Int32 GDMCLKMOALE; // 0x40

	::System::Void _ctor(::OMMJHLCGEDL LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OMMJHLCGEDL, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AANKABCENDF__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PHHDNJBIIFK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANKABCENDF_PHHDNJBIIFK_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AANKABCENDF_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* LNLNHEMFAEC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AANKABCENDF_LNLNHEMFAEC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AANKABCENDF_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AANKABCENDF_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DCCENPAEBBM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANKABCENDF_DCCENPAEBBM_OFFSET))(this);
	}

	::System::Int32 HKBMLDGIMGF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AANKABCENDF_HKBMLDGIMGF_OFFSET))(this);
	}
};
