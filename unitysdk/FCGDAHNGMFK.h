#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IGLDPLCELOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FCGDAHNGMFK_BHMMKDGCLGB_OFFSET UNITYSDK_OFFSET(0x15A6F200)
#define FCGDAHNGMFK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x15A6F4F0)
#define FCGDAHNGMFK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x15A6F4D0)
#define FCGDAHNGMFK_HKELPCLHLEC_OFFSET UNITYSDK_OFFSET(0x15A6F5E0)
#define FCGDAHNGMFK_LFPFCAFBOEK_OFFSET UNITYSDK_OFFSET(0x15A6F720)
#define FCGDAHNGMFK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x15A6F4E0)
#define FCGDAHNGMFK_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x15A6F0C0)
#define FCGDAHNGMFK__CTOR_OFFSET UNITYSDK_OFFSET(0x15A6F0B0)

inline static constexpr unsigned int FCGDAHNGMFK_TypeDefinitionIndex = 17777;

class FCGDAHNGMFK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* CDPMOEENODL; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::IGLDPLCELOD HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* OIBEAJNLJAB; // 0x30
	::System::Byte CNIAANMNOCF; // 0x38
	::System::Byte ACIOBDEBDNK; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C
	::System::Int32 POKJNGILNLB; // 0x40

	::System::Void _ctor(::IGLDPLCELOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IGLDPLCELOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + FCGDAHNGMFK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGDAHNGMFK_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BHMMKDGCLGB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGDAHNGMFK_BHMMKDGCLGB_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FCGDAHNGMFK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGDAHNGMFK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGDAHNGMFK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Int32 HKELPCLHLEC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGDAHNGMFK_HKELPCLHLEC_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LFPFCAFBOEK()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FCGDAHNGMFK_LFPFCAFBOEK_OFFSET))(this);
	}
};
