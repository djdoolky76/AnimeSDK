#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ICCNICCBNHF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define ILDFMNDAJKI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1610C8F0)
#define ILDFMNDAJKI_DHNMMOMLHEI_OFFSET UNITYSDK_OFFSET(0x1610CC20)
#define ILDFMNDAJKI_FLOFMAKBJMD_OFFSET UNITYSDK_OFFSET(0x1610CE40)
#define ILDFMNDAJKI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1610CC10)
#define ILDFMNDAJKI_JENLKGPMNKB_OFFSET UNITYSDK_OFFSET(0x1610CB00)
#define ILDFMNDAJKI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1610C9E0)
#define ILDFMNDAJKI_NGJDIOJDLBE_OFFSET UNITYSDK_OFFSET(0x1610CD30)
#define ILDFMNDAJKI_PHMJDAHAGNP_OFFSET UNITYSDK_OFFSET(0x1610C9F0)
#define ILDFMNDAJKI__CTOR_OFFSET UNITYSDK_OFFSET(0x1610C8E0)

inline static constexpr unsigned int ILDFMNDAJKI_TypeDefinitionIndex = 13004;

class ILDFMNDAJKI : public ::System::Object
{
public:
	::ICCNICCBNHF HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::String* JCMPHEFPFEJ; // 0x28
	::System::String* PKCBLDJJNBI; // 0x30
	::System::String* IGAPGEKANHA; // 0x38
	::System::String* LJGOHCPAAKD; // 0x40
	::System::String* LGMKOKDNCCG; // 0x48
	::System::Byte CNIAANMNOCF; // 0x50
	::System::Byte ACIOBDEBDNK; // 0x51
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x52

	::System::Void _ctor(::ICCNICCBNHF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::ICCNICCBNHF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ILDFMNDAJKI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* PHMJDAHAGNP()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_PHMJDAHAGNP_OFFSET))(this);
	}

	::System::String* JENLKGPMNKB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_JENLKGPMNKB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DHNMMOMLHEI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_DHNMMOMLHEI_OFFSET))(this);
	}

	::System::String* NGJDIOJDLBE()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_NGJDIOJDLBE_OFFSET))(this);
	}

	::System::String* FLOFMAKBJMD()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILDFMNDAJKI_FLOFMAKBJMD_OFFSET))(this);
	}
};
