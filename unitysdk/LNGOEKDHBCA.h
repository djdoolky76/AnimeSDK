#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EJJGCGAPHNP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LNGOEKDHBCA_CLBMJNELPFE_OFFSET UNITYSDK_OFFSET(0x1AD66AE0)
#define LNGOEKDHBCA_COBHFNFAMJC_OFFSET UNITYSDK_OFFSET(0x1AD66790)
#define LNGOEKDHBCA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1AD668D0)
#define LNGOEKDHBCA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1AD669C0)
#define LNGOEKDHBCA_IPBDBKFKJPA_OFFSET UNITYSDK_OFFSET(0x1AD669D0)
#define LNGOEKDHBCA_KAGKCHKGKBN_OFFSET UNITYSDK_OFFSET(0x1AD66520)
#define LNGOEKDHBCA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1AD66510)
#define LNGOEKDHBCA_OIFLHFJCAIN_OFFSET UNITYSDK_OFFSET(0x1AD66630)
#define LNGOEKDHBCA__CTOR_OFFSET UNITYSDK_OFFSET(0x1AD66500)

inline static constexpr unsigned int LNGOEKDHBCA_TypeDefinitionIndex = 15047;

class LNGOEKDHBCA : public ::System::Object
{
public:
	::System::String* OLPBFKHFIGK; // 0x10
	::System::String* KPJOPMMIFOK; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::EJJGCGAPHNP HBDPAIKANDB; // 0x28
	::System::String* GDFDKKHCBCK; // 0x38
	::System::String* ADLMAEAOJOB; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean OHEFMLPBKDF; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4B
	::System::Int32 KIALABKLANK; // 0x4C

	::System::Void _ctor(::EJJGCGAPHNP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EJJGCGAPHNP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LNGOEKDHBCA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* KAGKCHKGKBN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_KAGKCHKGKBN_OFFSET))(this);
	}

	::System::Boolean OIFLHFJCAIN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_OIFLHFJCAIN_OFFSET))(this);
	}

	::System::Int32 COBHFNFAMJC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_COBHFNFAMJC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* IPBDBKFKJPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_IPBDBKFKJPA_OFFSET))(this);
	}

	::System::String* CLBMJNELPFE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LNGOEKDHBCA_CLBMJNELPFE_OFFSET))(this);
	}
};
