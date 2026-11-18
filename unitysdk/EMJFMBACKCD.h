#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KGHMFCDIADG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define EMJFMBACKCD_ALMJBHFEOFA_OFFSET UNITYSDK_OFFSET(0x19F4D220)
#define EMJFMBACKCD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x19F4D790)
#define EMJFMBACKCD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x19F4D780)
#define EMJFMBACKCD_HDNCCEDDKDG_OFFSET UNITYSDK_OFFSET(0x19F4D880)
#define EMJFMBACKCD_JAADOODLCFE_OFFSET UNITYSDK_OFFSET(0x19F4D990)
#define EMJFMBACKCD_JFCNOLHFLHO_OFFSET UNITYSDK_OFFSET(0x19F4D360)
#define EMJFMBACKCD_JGLDDAKFLPG_OFFSET UNITYSDK_OFFSET(0x19F4D4A0)
#define EMJFMBACKCD_JOFHCONEIAK_OFFSET UNITYSDK_OFFSET(0x19F4DAD0)
#define EMJFMBACKCD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x19F4D770)
#define EMJFMBACKCD_PGNHGLOPJEM_OFFSET UNITYSDK_OFFSET(0x19F4D0E0)
#define EMJFMBACKCD__CTOR_OFFSET UNITYSDK_OFFSET(0x19F4D0D0)

inline static constexpr unsigned int EMJFMBACKCD_TypeDefinitionIndex = 13083;

class EMJFMBACKCD : public ::System::Object
{
public:
	::System::String* CEAJOGHGPLL; // 0x10
	::System::String* PCDAJCJAOOO; // 0x18
	::KGHMFCDIADG HBDPAIKANDB; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* APBIHNDINCI; // 0x38
	::System::Int32 MJLMFMMGPOM; // 0x40
	::System::Int32 NAFDHMFICCJ; // 0x44
	::System::Int32 BMFIPJEIALD; // 0x48
	::System::Byte ACIOBDEBDNK; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte CNIAANMNOCF; // 0x4E
	::System::Byte _padding0[0x1];
	::System::Int32 OOONGDPBPFJ; // 0x50

	::System::Void _ctor(::KGHMFCDIADG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::KGHMFCDIADG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + EMJFMBACKCD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PGNHGLOPJEM()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_PGNHGLOPJEM_OFFSET))(this);
	}

	::System::Int32 ALMJBHFEOFA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_ALMJBHFEOFA_OFFSET))(this);
	}

	::System::Int32 JFCNOLHFLHO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_JFCNOLHFLHO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JGLDDAKFLPG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_JGLDDAKFLPG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + EMJFMBACKCD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* HDNCCEDDKDG()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_HDNCCEDDKDG_OFFSET))(this);
	}

	::System::Int32 JAADOODLCFE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_JAADOODLCFE_OFFSET))(this);
	}

	::System::String* JOFHCONEIAK()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + EMJFMBACKCD_JOFHCONEIAK_OFFSET))(this);
	}
};
