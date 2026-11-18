#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOLOBILHDNO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define NPJPPOHHIIE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1C194930)
#define NPJPPOHHIIE_FAIBHNMDEKI_OFFSET UNITYSDK_OFFSET(0x1C1947E0)
#define NPJPPOHHIIE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1C194A20)
#define NPJPPOHHIIE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1C194920)
#define NPJPPOHHIIE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1947D0)

inline static constexpr unsigned int NPJPPOHHIIE_TypeDefinitionIndex = 17215;

class NPJPPOHHIIE : public ::System::Object
{
public:
	::HOLOBILHDNO HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Int32 BENOFMIKOPE; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Byte ACIOBDEBDNK; // 0x2D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2E

	::System::Void _ctor(::HOLOBILHDNO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::HOLOBILHDNO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NPJPPOHHIIE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 FAIBHNMDEKI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJPPOHHIIE_FAIBHNMDEKI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJPPOHHIIE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPJPPOHHIIE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPJPPOHHIIE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
