#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FEOILFLBDGA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define EPMKJBCCIHN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19525590)
#define EPMKJBCCIHN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19525680)
#define EPMKJBCCIHN_GDAGLOCKJPJ_OFFSET UNITYSDK_OFFSET(0x19525360)
#define EPMKJBCCIHN_JHJIGNIHMGG_OFFSET UNITYSDK_OFFSET(0x19525480)
#define EPMKJBCCIHN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19525470)
#define EPMKJBCCIHN_PEMKIGPHAIL_OFFSET UNITYSDK_OFFSET(0x19525690)
#define EPMKJBCCIHN__CTOR_OFFSET UNITYSDK_OFFSET(0x19525350)

inline static constexpr unsigned int EPMKJBCCIHN_TypeDefinitionIndex = 15588;

class EPMKJBCCIHN : public ::System::Object
{
public:
	::FEOILFLBDGA HBDPAIKANDB; // 0x10
	::System::String* HNHKCJBNPNM; // 0x20
	::System::String* IJOAGEACCFH; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::String* JDLCLPBELMK; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::FEOILFLBDGA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FEOILFLBDGA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EPMKJBCCIHN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* GDAGLOCKJPJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMKJBCCIHN_GDAGLOCKJPJ_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMKJBCCIHN_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* JHJIGNIHMGG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMKJBCCIHN_JHJIGNIHMGG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMKJBCCIHN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EPMKJBCCIHN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* PEMKIGPHAIL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EPMKJBCCIHN_PEMKIGPHAIL_OFFSET))(this);
	}
};
