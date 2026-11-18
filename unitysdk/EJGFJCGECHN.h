#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBGCPHMKIID.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EJGFJCGECHN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x187ADC50)
#define EJGFJCGECHN_ENJENAJGHFI_OFFSET UNITYSDK_OFFSET(0x187ADF80)
#define EJGFJCGECHN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x187ADF60)
#define EJGFJCGECHN_HGJBIHIGGHB_OFFSET UNITYSDK_OFFSET(0x187ADE50)
#define EJGFJCGECHN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x187ADF70)
#define EJGFJCGECHN_NILPHCJELOL_OFFSET UNITYSDK_OFFSET(0x187ADD40)
#define EJGFJCGECHN__CTOR_OFFSET UNITYSDK_OFFSET(0x187ADC40)

inline static constexpr unsigned int EJGFJCGECHN_TypeDefinitionIndex = 13908;

class EJGFJCGECHN : public ::System::Object
{
public:
	::System::String* MALFMFNFLPH; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* OMDLAHBLCAM; // 0x20
	::GBGCPHMKIID HBDPAIKANDB; // 0x28
	::System::String* CPDIEBNDFLB; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42

	::System::Void _ctor(::GBGCPHMKIID LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GBGCPHMKIID, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EJGFJCGECHN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGFJCGECHN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* NILPHCJELOL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGFJCGECHN_NILPHCJELOL_OFFSET))(this);
	}

	::System::String* HGJBIHIGGHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGFJCGECHN_HGJBIHIGGHB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EJGFJCGECHN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGFJCGECHN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ENJENAJGHFI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EJGFJCGECHN_ENJENAJGHFI_OFFSET))(this);
	}
};
