#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NAGKOLBCGHP.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define CJCKBBLOHOH_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17F11F30)
#define CJCKBBLOHOH_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17F12020)
#define CJCKBBLOHOH_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17F11E10)
#define CJCKBBLOHOH_NOONPKCMIGE_OFFSET UNITYSDK_OFFSET(0x17F11E20)
#define CJCKBBLOHOH__CTOR_OFFSET UNITYSDK_OFFSET(0x17F11E00)

inline static constexpr unsigned int CJCKBBLOHOH_TypeDefinitionIndex = 17487;

class CJCKBBLOHOH : public ::System::Object
{
public:
	::NAGKOLBCGHP HBDPAIKANDB; // 0x10
	::System::String* NDHOLHCAMMK; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::NAGKOLBCGHP LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NAGKOLBCGHP, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CJCKBBLOHOH__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCKBBLOHOH_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* NOONPKCMIGE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCKBBLOHOH_NOONPKCMIGE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCKBBLOHOH_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CJCKBBLOHOH_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
