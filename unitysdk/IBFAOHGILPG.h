#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PFNOINNHGCN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }

#define IBFAOHGILPG_CCDBAOOFMFA_OFFSET UNITYSDK_OFFSET(0x1BAE46E0)
#define IBFAOHGILPG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAE4B60)
#define IBFAOHGILPG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAE4D90)
#define IBFAOHGILPG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAE4930)
#define IBFAOHGILPG_OGNMEDNMNHE_OFFSET UNITYSDK_OFFSET(0x1BAE47F0)
#define IBFAOHGILPG_OLMMLKDHLBJ_OFFSET UNITYSDK_OFFSET(0x1BAE4940)
#define IBFAOHGILPG_PDAADHDFGKP_OFFSET UNITYSDK_OFFSET(0x1BAE4C50)
#define IBFAOHGILPG_PKILOHFGFKF_OFFSET UNITYSDK_OFFSET(0x1BAE4A50)
#define IBFAOHGILPG__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAE46D0)

inline static constexpr unsigned int IBFAOHGILPG_TypeDefinitionIndex = 15771;

class IBFAOHGILPG : public ::System::Object
{
public:
	::System::String* LBJNIKIHBPM; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::String* GFPLKBDCIPE; // 0x20
	::PFNOINNHGCN HBDPAIKANDB; // 0x28
	::System::String* NILKOMOHAEI; // 0x38
	::System::Int32 PCMOJLNOPPM; // 0x40
	::System::Int32 HDAPAODLBHE; // 0x44
	::System::Byte ACIOBDEBDNK; // 0x48
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x49
	::System::Byte CNIAANMNOCF; // 0x4A
	::System::Byte _padding0[0x1];
	::System::Int32 JFIENNOHHDO; // 0x4C

	::System::Void _ctor(::PFNOINNHGCN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::PFNOINNHGCN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + IBFAOHGILPG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* CCDBAOOFMFA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFAOHGILPG_CCDBAOOFMFA_OFFSET))(this);
	}

	::System::Int32 OGNMEDNMNHE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFAOHGILPG_OGNMEDNMNHE_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFAOHGILPG_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* OLMMLKDHLBJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFAOHGILPG_OLMMLKDHLBJ_OFFSET))(this);
	}

	::System::String* PKILOHFGFKF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFAOHGILPG_PKILOHFGFKF_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFAOHGILPG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 PDAADHDFGKP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IBFAOHGILPG_PDAADHDFGKP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IBFAOHGILPG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
