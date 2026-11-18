#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MILCGBPMOML.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;

#define HOGGDOMHNEE_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x152DDA30)
#define HOGGDOMHNEE_DPPAPDAAAMM_OFFSET UNITYSDK_OFFSET(0x152DD8F0)
#define HOGGDOMHNEE_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x152DD8E0)
#define HOGGDOMHNEE_GAADLCELLEM_OFFSET UNITYSDK_OFFSET(0x152DDB20)
#define HOGGDOMHNEE_JJGCCDAEMMF_OFFSET UNITYSDK_OFFSET(0x152DD790)
#define HOGGDOMHNEE_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x152DD8D0)
#define HOGGDOMHNEE__CTOR_OFFSET UNITYSDK_OFFSET(0x152DD780)

inline static constexpr unsigned int HOGGDOMHNEE_TypeDefinitionIndex = 10424;

class HOGGDOMHNEE : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::MILCGBPMOML HBDPAIKANDB; // 0x18
	::System::Int32 OIJHNPLHMJE; // 0x28
	::System::Byte CNIAANMNOCF; // 0x2C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x2D
	::System::Byte ACIOBDEBDNK; // 0x2E
	::System::Byte _padding0[0x1];
	::System::Int32 NEILBOBPFNC; // 0x30
	::System::Int32 HODKOKGLEPH; // 0x34

	::System::Void _ctor(::MILCGBPMOML LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MILCGBPMOML, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HOGGDOMHNEE__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JJGCCDAEMMF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGGDOMHNEE_JJGCCDAEMMF_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGGDOMHNEE_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HOGGDOMHNEE_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DPPAPDAAAMM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGGDOMHNEE_DPPAPDAAAMM_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGGDOMHNEE_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 GAADLCELLEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + HOGGDOMHNEE_GAADLCELLEM_OFFSET))(this);
	}
};
