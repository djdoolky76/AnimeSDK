#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CIDMDADIIDJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ABFDGKLIKDI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A569880)
#define ABFDGKLIKDI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A569CD0)
#define ABFDGKLIKDI_FPHICNFENOJ_OFFSET UNITYSDK_OFFSET(0x1A569A80)
#define ABFDGKLIKDI_HKKGIKHOFCM_OFFSET UNITYSDK_OFFSET(0x1A569970)
#define ABFDGKLIKDI_KEGFFDCFCBI_OFFSET UNITYSDK_OFFSET(0x1A569770)
#define ABFDGKLIKDI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A569CE0)
#define ABFDGKLIKDI_NGMFBELJJAG_OFFSET UNITYSDK_OFFSET(0x1A569B90)
#define ABFDGKLIKDI__CTOR_OFFSET UNITYSDK_OFFSET(0x1A569760)

inline static constexpr unsigned int ABFDGKLIKDI_TypeDefinitionIndex = 17430;

class ABFDGKLIKDI : public ::System::Object
{
public:
	::System::String* MOALFBKCAPG; // 0x10
	::System::String* CDPOHKDBLNC; // 0x18
	::System::String* IMAFCDDJOME; // 0x20
	::CIDMDADIIDJ HBDPAIKANDB; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* GAIELNEFPKP; // 0x40
	::System::String* BOGKNMIOLCA; // 0x48
	::System::String* IFINGCFFNNL; // 0x50
	::System::String* HNCEKCCOPKE; // 0x58
	::System::Int32 OKBBGPGIODD; // 0x60
	::System::Byte CNIAANMNOCF; // 0x64
	::System::Byte ACIOBDEBDNK; // 0x65
	::System::Byte GCHCDJCFCEG; // 0x66
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x67
	::System::Int32 PMLIMFIBIFO; // 0x68
	::System::Int32 GPLKCHANEHO; // 0x6C
	::System::Int32 GENGAFDJBCO; // 0x70
	::System::Int32 DAHFBBGENIK; // 0x74
	::System::Int32 PCMOJLNOPPM; // 0x78

	::System::Void _ctor(::CIDMDADIIDJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CIDMDADIIDJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ABFDGKLIKDI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* KEGFFDCFCBI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFDGKLIKDI_KEGFFDCFCBI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFDGKLIKDI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HKKGIKHOFCM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFDGKLIKDI_HKKGIKHOFCM_OFFSET))(this);
	}

	::System::String* FPHICNFENOJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFDGKLIKDI_FPHICNFENOJ_OFFSET))(this);
	}

	::System::Int32 NGMFBELJJAG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFDGKLIKDI_NGMFBELJJAG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ABFDGKLIKDI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ABFDGKLIKDI_LJANCIBECFG_OFFSET))(this);
	}
};
