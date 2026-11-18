#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IFMDDIOEJGI.h"
#include "unitysdk/OGNIAKLKEEH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define AFIBACABJKB_AILJCNIMCOL_OFFSET UNITYSDK_OFFSET(0x19AB9650)
#define AFIBACABJKB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19AB9560)
#define AFIBACABJKB_DKANCJJFFNC_OFFSET UNITYSDK_OFFSET(0x19AB9440)
#define AFIBACABJKB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19AB9550)
#define AFIBACABJKB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19AB9950)
#define AFIBACABJKB__CTOR_OFFSET UNITYSDK_OFFSET(0x19AB9430)

inline static constexpr unsigned int AFIBACABJKB_TypeDefinitionIndex = 14611;

class AFIBACABJKB : public ::System::Object
{
public:
	::OGNIAKLKEEH HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* JMFAKOCINFA; // 0x28
	::System::Collections::Generic::List_1<::IFMDDIOEJGI>* AOLMMJBBKMA; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A

	::System::Void _ctor(::OGNIAKLKEEH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OGNIAKLKEEH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AFIBACABJKB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DKANCJJFFNC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIBACABJKB_DKANCJJFFNC_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AFIBACABJKB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIBACABJKB_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::IFMDDIOEJGI>* AILJCNIMCOL()
	{
		return ((::System::Collections::Generic::List_1<::IFMDDIOEJGI>*(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIBACABJKB_AILJCNIMCOL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AFIBACABJKB_LJANCIBECFG_OFFSET))(this);
	}
};
