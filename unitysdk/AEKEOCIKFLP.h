#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MOIFHDHBALO.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define AEKEOCIKFLP_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x194E74A0)
#define AEKEOCIKFLP_DGPFJFDHAIL_OFFSET UNITYSDK_OFFSET(0x194E70C0)
#define AEKEOCIKFLP_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x194E7490)
#define AEKEOCIKFLP_GKAMCMIJFHJ_OFFSET UNITYSDK_OFFSET(0x194E7350)
#define AEKEOCIKFLP_GLMIJCOEBKG_OFFSET UNITYSDK_OFFSET(0x194E7590)
#define AEKEOCIKFLP_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x194E7200)
#define AEKEOCIKFLP_MFLMGECAGIA_OFFSET UNITYSDK_OFFSET(0x194E7210)
#define AEKEOCIKFLP__CTOR_OFFSET UNITYSDK_OFFSET(0x194E70B0)

inline static constexpr unsigned int AEKEOCIKFLP_TypeDefinitionIndex = 14654;

class AEKEOCIKFLP : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* DEONCNCIMDB; // 0x18
	::MOIFHDHBALO HBDPAIKANDB; // 0x20
	::System::Int32 OLJOOPCEKKF; // 0x30
	::System::Int32 FEIOEHMLAIM; // 0x34
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 OKBBGPGIODD; // 0x3C

	::System::Void _ctor(::MOIFHDHBALO LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::MOIFHDHBALO, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + AEKEOCIKFLP__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 DGPFJFDHAIL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEOCIKFLP_DGPFJFDHAIL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEOCIKFLP_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MFLMGECAGIA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEOCIKFLP_MFLMGECAGIA_OFFSET))(this);
	}

	::System::Int32 GKAMCMIJFHJ()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEOCIKFLP_GKAMCMIJFHJ_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AEKEOCIKFLP_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEOCIKFLP_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* GLMIJCOEBKG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AEKEOCIKFLP_GLMIJCOEBKG_OFFSET))(this);
	}
};
