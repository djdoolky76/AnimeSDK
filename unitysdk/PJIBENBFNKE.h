#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GBKEMPEEIBA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define PJIBENBFNKE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF91310)
#define PJIBENBFNKE_ECOGIKIPFLB_OFFSET UNITYSDK_OFFSET(0x1BF91680)
#define PJIBENBFNKE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF91400)
#define PJIBENBFNKE_IEALPJOKDCE_OFFSET UNITYSDK_OFFSET(0x1BF91410)
#define PJIBENBFNKE_KKHEEIDPDCN_OFFSET UNITYSDK_OFFSET(0x1BF91570)
#define PJIBENBFNKE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF91300)
#define PJIBENBFNKE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF912F0)

inline static constexpr unsigned int PJIBENBFNKE_TypeDefinitionIndex = 13653;

class PJIBENBFNKE : public ::System::Object
{
public:
	::System::String* OMDMEJBNGBG; // 0x10
	::System::String* IBANJIEJLBG; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::GBKEMPEEIBA HBDPAIKANDB; // 0x28
	::System::Single PFCPPJBIKFB; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::GBKEMPEEIBA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::GBKEMPEEIBA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PJIBENBFNKE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIBENBFNKE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIBENBFNKE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PJIBENBFNKE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Single IEALPJOKDCE()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIBENBFNKE_IEALPJOKDCE_OFFSET))(this);
	}

	::System::String* KKHEEIDPDCN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIBENBFNKE_KKHEEIDPDCN_OFFSET))(this);
	}

	::System::String* ECOGIKIPFLB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + PJIBENBFNKE_ECOGIKIPFLB_OFFSET))(this);
	}
};
