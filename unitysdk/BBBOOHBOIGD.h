#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FHFDMIHMHCG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BBBOOHBOIGD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EEB700)
#define BBBOOHBOIGD_ELMENLMEBLN_OFFSET UNITYSDK_OFFSET(0x17EEB480)
#define BBBOOHBOIGD_EONHCLBGJOA_OFFSET UNITYSDK_OFFSET(0x17EEB5C0)
#define BBBOOHBOIGD_FFFFNENFJLG_OFFSET UNITYSDK_OFFSET(0x17EEB050)
#define BBBOOHBOIGD_FJBDDHIFAKN_OFFSET UNITYSDK_OFFSET(0x17EEB340)
#define BBBOOHBOIGD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EEB330)
#define BBBOOHBOIGD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EEB320)
#define BBBOOHBOIGD__CTOR_OFFSET UNITYSDK_OFFSET(0x17EEB040)

inline static constexpr unsigned int BBBOOHBOIGD_TypeDefinitionIndex = 11277;

class BBBOOHBOIGD : public ::System::Object
{
public:
	::FHFDMIHMHCG HBDPAIKANDB; // 0x10
	::System::String* CNFLNMNKFCK; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* GGBCLEIENAK; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Int32 MFOKMKPJODC; // 0x38
	::System::Int32 IICEJJCNPCP; // 0x3C
	::System::Int32 CLGLENKFJOD; // 0x40
	::System::Int32 PCMOJLNOPPM; // 0x44
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x48
	::System::Byte CNIAANMNOCF; // 0x49
	::System::Byte ACIOBDEBDNK; // 0x4A

	::System::Void _ctor(::FHFDMIHMHCG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FHFDMIHMHCG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BBBOOHBOIGD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* FFFFNENFJLG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBOOHBOIGD_FFFFNENFJLG_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBOOHBOIGD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BBBOOHBOIGD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 FJBDDHIFAKN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBOOHBOIGD_FJBDDHIFAKN_OFFSET))(this);
	}

	::System::Int32 ELMENLMEBLN()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBOOHBOIGD_ELMENLMEBLN_OFFSET))(this);
	}

	::System::Int32 EONHCLBGJOA()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBOOHBOIGD_EONHCLBGJOA_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BBBOOHBOIGD_COFGIJJOFLP_OFFSET))(this);
	}
};
