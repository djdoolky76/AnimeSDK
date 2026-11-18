#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDINIHPBNNB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define GDDMPLLLJNP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152CB7D0)
#define GDDMPLLLJNP_EEAGLNCOCKG_OFFSET UNITYSDK_OFFSET(0x152CB460)
#define GDDMPLLLJNP_EGDJKCNICGC_OFFSET UNITYSDK_OFFSET(0x152CB6C0)
#define GDDMPLLLJNP_FEGKDNNEKLJ_OFFSET UNITYSDK_OFFSET(0x152CB350)
#define GDDMPLLLJNP_FEPIMDFIEKK_OFFSET UNITYSDK_OFFSET(0x152CB5A0)
#define GDDMPLLLJNP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152CB6B0)
#define GDDMPLLLJNP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152CB340)
#define GDDMPLLLJNP__CTOR_OFFSET UNITYSDK_OFFSET(0x152CB330)

inline static constexpr unsigned int GDDMPLLLJNP_TypeDefinitionIndex = 16137;

class GDDMPLLLJNP : public ::System::Object
{
public:
	::System::String* GMFMOHOKJCN; // 0x10
	::FDINIHPBNNB HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* BLDNICDCALN; // 0x30
	::System::String* HAJOBJINPBG; // 0x38
	::System::Int32 GNDFECLMMNI; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x44
	::System::Byte CNIAANMNOCF; // 0x45
	::System::Byte ACIOBDEBDNK; // 0x46

	::System::Void _ctor(::FDINIHPBNNB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FDINIHPBNNB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GDDMPLLLJNP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMPLLLJNP_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* FEGKDNNEKLJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMPLLLJNP_FEGKDNNEKLJ_OFFSET))(this);
	}

	::System::Int32 EEAGLNCOCKG()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMPLLLJNP_EEAGLNCOCKG_OFFSET))(this);
	}

	::System::String* FEPIMDFIEKK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMPLLLJNP_FEPIMDFIEKK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GDDMPLLLJNP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* EGDJKCNICGC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMPLLLJNP_EGDJKCNICGC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDDMPLLLJNP_COFGIJJOFLP_OFFSET))(this);
	}
};
