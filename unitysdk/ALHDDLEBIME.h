#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KCGGLBNAMFI.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ALHDDLEBIME_BENGMCFEKFA_OFFSET UNITYSDK_OFFSET(0x19ABD700)
#define ALHDDLEBIME_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19ABDAC0)
#define ALHDDLEBIME_EMNJMHGMNHM_OFFSET UNITYSDK_OFFSET(0x19ABD840)
#define ALHDDLEBIME_FDPKHJDNOHE_OFFSET UNITYSDK_OFFSET(0x19ABD5C0)
#define ALHDDLEBIME_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19ABD950)
#define ALHDDLEBIME_GHLJABDNIMA_OFFSET UNITYSDK_OFFSET(0x19ABD960)
#define ALHDDLEBIME_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19ABD5B0)
#define ALHDDLEBIME_NBDLOEDIBBE_OFFSET UNITYSDK_OFFSET(0x19ABD4A0)
#define ALHDDLEBIME__CTOR_OFFSET UNITYSDK_OFFSET(0x19ABD490)

inline static constexpr unsigned int ALHDDLEBIME_TypeDefinitionIndex = 16077;

class ALHDDLEBIME : public ::System::Object
{
public:
	::KCGGLBNAMFI HBDPAIKANDB; // 0x10
	::System::String* PFGBJGBABJJ; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::String* BOHMNLMIPBC; // 0x30
	::System::Int32 IBPAJNIOJFP; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x3C
	::System::Boolean EBPLPFFAIAG; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E
	::System::Byte CNIAANMNOCF; // 0x3F
	::System::Int32 CPKKINABDIL; // 0x40

	::System::Void _ctor(::KCGGLBNAMFI LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KCGGLBNAMFI, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ALHDDLEBIME__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* NBDLOEDIBBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHDDLEBIME_NBDLOEDIBBE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHDDLEBIME_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 FDPKHJDNOHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHDDLEBIME_FDPKHJDNOHE_OFFSET))(this);
	}

	::System::Int32 BENGMCFEKFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHDDLEBIME_BENGMCFEKFA_OFFSET))(this);
	}

	::System::String* EMNJMHGMNHM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHDDLEBIME_EMNJMHGMNHM_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ALHDDLEBIME_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean GHLJABDNIMA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHDDLEBIME_GHLJABDNIMA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALHDDLEBIME_COFGIJJOFLP_OFFSET))(this);
	}
};
