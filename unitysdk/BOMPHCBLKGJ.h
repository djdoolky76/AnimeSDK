#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HEBEDMJMODF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define BOMPHCBLKGJ_ACDOMAEJONK_OFFSET UNITYSDK_OFFSET(0x19F249D0)
#define BOMPHCBLKGJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F24580)
#define BOMPHCBLKGJ_DCGJGALIIHB_OFFSET UNITYSDK_OFFSET(0x19F24C50)
#define BOMPHCBLKGJ_FLMBHFDFDGA_OFFSET UNITYSDK_OFFSET(0x19F248C0)
#define BOMPHCBLKGJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F24560)
#define BOMPHCBLKGJ_LBAGPMHCOCN_OFFSET UNITYSDK_OFFSET(0x19F24780)
#define BOMPHCBLKGJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F24570)
#define BOMPHCBLKGJ_MNNPIMEDAII_OFFSET UNITYSDK_OFFSET(0x19F24670)
#define BOMPHCBLKGJ_NLPLFAKMKPH_OFFSET UNITYSDK_OFFSET(0x19F24B10)
#define BOMPHCBLKGJ__CTOR_OFFSET UNITYSDK_OFFSET(0x19F24550)

inline static constexpr unsigned int BOMPHCBLKGJ_TypeDefinitionIndex = 9185;

class BOMPHCBLKGJ : public ::System::Object
{
public:
	::System::String* FGECIGPJPCF; // 0x10
	::HEBEDMJMODF HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* DMEDHCMNAJK; // 0x30
	::System::String* BPBDGHOMFED; // 0x38
	::System::String* IMAFCDDJOME; // 0x40
	::System::Int32 BDLMCMBNHHK; // 0x48
	::System::Byte CNIAANMNOCF; // 0x4C
	::System::Byte ACIOBDEBDNK; // 0x4D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 BEFGHBANBAB; // 0x50
	::System::Int32 PMOFENEKPKB; // 0x54

	::System::Void _ctor(::HEBEDMJMODF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HEBEDMJMODF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MNNPIMEDAII()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_MNNPIMEDAII_OFFSET))(this);
	}

	::System::Int32 LBAGPMHCOCN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_LBAGPMHCOCN_OFFSET))(this);
	}

	::System::String* FLMBHFDFDGA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_FLMBHFDFDGA_OFFSET))(this);
	}

	::System::Int32 ACDOMAEJONK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_ACDOMAEJONK_OFFSET))(this);
	}

	::System::Int32 NLPLFAKMKPH()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_NLPLFAKMKPH_OFFSET))(this);
	}

	::System::String* DCGJGALIIHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOMPHCBLKGJ_DCGJGALIIHB_OFFSET))(this);
	}
};
