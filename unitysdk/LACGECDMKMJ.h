#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JOGKPLDAPMN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define LACGECDMKMJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1612A3E0)
#define LACGECDMKMJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1612A4D0)
#define LACGECDMKMJ_IECFOJODPHL_OFFSET UNITYSDK_OFFSET(0x16129F70)
#define LACGECDMKMJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1612A100)
#define LACGECDMKMJ_MGEOBCHPJCF_OFFSET UNITYSDK_OFFSET(0x1612A2A0)
#define LACGECDMKMJ_MKELBHKBKDC_OFFSET UNITYSDK_OFFSET(0x1612A110)
#define LACGECDMKMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16129F60)

inline static constexpr unsigned int LACGECDMKMJ_TypeDefinitionIndex = 15780;

class LACGECDMKMJ : public ::System::Object
{
public:
	::JOGKPLDAPMN HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* BMKCIKMHNPJ; // 0x28
	::System::String* ABAKDHGBIKD; // 0x30
	::System::Int32 FDLMOBIFOLL; // 0x38
	::System::Byte CNIAANMNOCF; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x3D
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3E

	::System::Void _ctor(::JOGKPLDAPMN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JOGKPLDAPMN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LACGECDMKMJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* IECFOJODPHL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGECDMKMJ_IECFOJODPHL_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGECDMKMJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* MKELBHKBKDC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGECDMKMJ_MKELBHKBKDC_OFFSET))(this);
	}

	::System::Int32 MGEOBCHPJCF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGECDMKMJ_MGEOBCHPJCF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LACGECDMKMJ_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LACGECDMKMJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
