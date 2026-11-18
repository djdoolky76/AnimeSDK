#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CDPJCCAIEDP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BOOLDBBJIBN_CCDILGLGIGE_OFFSET UNITYSDK_OFFSET(0x1877F430)
#define BOOLDBBJIBN_CHLNFODLGDI_OFFSET UNITYSDK_OFFSET(0x1877EE30)
#define BOOLDBBJIBN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1877F340)
#define BOOLDBBJIBN_EEAKIFPAEBA_OFFSET UNITYSDK_OFFSET(0x1877ECD0)
#define BOOLDBBJIBN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1877ECC0)
#define BOOLDBBJIBN_JHHOBKPDHAC_OFFSET UNITYSDK_OFFSET(0x1877F230)
#define BOOLDBBJIBN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1877F570)
#define BOOLDBBJIBN_NNIANDNNPNF_OFFSET UNITYSDK_OFFSET(0x1877EF90)
#define BOOLDBBJIBN_OIJPAKKAHHN_OFFSET UNITYSDK_OFFSET(0x1877F0F0)
#define BOOLDBBJIBN__CTOR_OFFSET UNITYSDK_OFFSET(0x1877ECB0)

inline static constexpr unsigned int BOOLDBBJIBN_TypeDefinitionIndex = 15827;

class BOOLDBBJIBN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::CDPJCCAIEDP HBDPAIKANDB; // 0x18
	::System::String* MOEKHHFNIFG; // 0x28
	::System::Int32 AMKFOKBDKHN; // 0x30
	::System::Byte GCHCDJCFCEG; // 0x34
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x35
	::System::Boolean GOAJPBAKLPE; // 0x36
	::System::Byte ACIOBDEBDNK; // 0x37
	::System::Int32 ADPLGNPNMGE; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Boolean BBEPMDLLNNO; // 0x3D
	::System::Boolean JLLGNKBCPPA; // 0x3E

	::System::Void _ctor(::CDPJCCAIEDP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CDPJCCAIEDP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BOOLDBBJIBN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean EEAKIFPAEBA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_EEAKIFPAEBA_OFFSET))(this);
	}

	::System::Boolean CHLNFODLGDI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_CHLNFODLGDI_OFFSET))(this);
	}

	::System::Boolean NNIANDNNPNF()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_NNIANDNNPNF_OFFSET))(this);
	}

	::System::Int32 OIJPAKKAHHN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_OIJPAKKAHHN_OFFSET))(this);
	}

	::System::String* JHHOBKPDHAC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_JHHOBKPDHAC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 CCDILGLGIGE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_CCDILGLGIGE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOOLDBBJIBN_LJANCIBECFG_OFFSET))(this);
	}
};
