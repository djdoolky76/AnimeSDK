#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FLHPJNFEINM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EPLMBDGMEHJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A1A5BD0)
#define EPLMBDGMEHJ_EHHFJFHDGOD_OFFSET UNITYSDK_OFFSET(0x1A1A5880)
#define EPLMBDGMEHJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A1A5AA0)
#define EPLMBDGMEHJ_JCGKIBKMOGF_OFFSET UNITYSDK_OFFSET(0x1A1A5990)
#define EPLMBDGMEHJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A1A5AB0)
#define EPLMBDGMEHJ_OEBELJGDNCE_OFFSET UNITYSDK_OFFSET(0x1A1A5AC0)
#define EPLMBDGMEHJ_OFMCMOOJONC_OFFSET UNITYSDK_OFFSET(0x1A1A5CC0)
#define EPLMBDGMEHJ__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1A5870)

inline static constexpr unsigned int EPLMBDGMEHJ_TypeDefinitionIndex = 10153;

class EPLMBDGMEHJ : public ::System::Object
{
public:
	::System::String* GJIFBJLKBKO; // 0x10
	::System::String* OCOLDKKJILF; // 0x18
	::FLHPJNFEINM HBDPAIKANDB; // 0x20
	::System::String* PBJLNCHLBOH; // 0x30
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x38
	::System::String* LLCNKKJNDJP; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::FLHPJNFEINM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FLHPJNFEINM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* EHHFJFHDGOD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ_EHHFJFHDGOD_OFFSET))(this);
	}

	::System::String* JCGKIBKMOGF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ_JCGKIBKMOGF_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* OEBELJGDNCE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ_OEBELJGDNCE_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* OFMCMOOJONC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPLMBDGMEHJ_OFMCMOOJONC_OFFSET))(this);
	}
};
