#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CAMPGPOKBGM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define MABEBLNONHO_ADLOHBAPNLL_OFFSET UNITYSDK_OFFSET(0x19597CF0)
#define MABEBLNONHO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19597850)
#define MABEBLNONHO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19597CE0)
#define MABEBLNONHO_HIGENBLIONK_OFFSET UNITYSDK_OFFSET(0x19597940)
#define MABEBLNONHO_LJAJKEDFMML_OFFSET UNITYSDK_OFFSET(0x19597B90)
#define MABEBLNONHO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19597CD0)
#define MABEBLNONHO_MEBGDBEMNHA_OFFSET UNITYSDK_OFFSET(0x19597A80)
#define MABEBLNONHO_PFMJELMIOHB_OFFSET UNITYSDK_OFFSET(0x19597E30)
#define MABEBLNONHO__CTOR_OFFSET UNITYSDK_OFFSET(0x19597840)

inline static constexpr unsigned int MABEBLNONHO_TypeDefinitionIndex = 13109;

class MABEBLNONHO : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* CHIFICFIBIN; // 0x18
	::System::String* OMJOHNPPNLK; // 0x20
	::CAMPGPOKBGM HBDPAIKANDB; // 0x28
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte ACIOBDEBDNK; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 INEDIFBLDAA; // 0x3C
	::System::Int32 FKBABFJDILG; // 0x40
	::System::Int32 EPALDOFCPEB; // 0x44

	::System::Void _ctor(::CAMPGPOKBGM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CAMPGPOKBGM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MABEBLNONHO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MABEBLNONHO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HIGENBLIONK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABEBLNONHO_HIGENBLIONK_OFFSET))(this);
	}

	::System::String* MEBGDBEMNHA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABEBLNONHO_MEBGDBEMNHA_OFFSET))(this);
	}

	::System::Int32 LJAJKEDFMML()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABEBLNONHO_LJAJKEDFMML_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MABEBLNONHO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MABEBLNONHO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 ADLOHBAPNLL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MABEBLNONHO_ADLOHBAPNLL_OFFSET))(this);
	}

	::System::String* PFMJELMIOHB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MABEBLNONHO_PFMJELMIOHB_OFFSET))(this);
	}
};
