#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DPDFFPFECBB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define LAHHENNOCIC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x190F4A00)
#define LAHHENNOCIC_DDLBGGBLEDJ_OFFSET UNITYSDK_OFFSET(0x190F4B00)
#define LAHHENNOCIC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x190F49F0)
#define LAHHENNOCIC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x190F4AF0)
#define LAHHENNOCIC_NILPHCJELOL_OFFSET UNITYSDK_OFFSET(0x190F45E0)
#define LAHHENNOCIC_PIPBPLEIPFK_OFFSET UNITYSDK_OFFSET(0x190F48B0)
#define LAHHENNOCIC__CTOR_OFFSET UNITYSDK_OFFSET(0x190F45D0)

inline static constexpr unsigned int LAHHENNOCIC_TypeDefinitionIndex = 9275;

class LAHHENNOCIC : public ::System::Object
{
public:
	::DPDFFPFECBB HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* CPDIEBNDFLB; // 0x28
	::System::String* ENIBBBIDPIA; // 0x30
	::System::Int32 PCMOJLNOPPM; // 0x38
	::System::Int32 OIKCPMJLMGI; // 0x3C
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::DPDFFPFECBB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DPDFFPFECBB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + LAHHENNOCIC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NILPHCJELOL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHENNOCIC_NILPHCJELOL_OFFSET))(this);
	}

	::System::Int32 PIPBPLEIPFK()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHENNOCIC_PIPBPLEIPFK_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LAHHENNOCIC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHENNOCIC_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHENNOCIC_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* DDLBGGBLEDJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + LAHHENNOCIC_DDLBGGBLEDJ_OFFSET))(this);
	}
};
