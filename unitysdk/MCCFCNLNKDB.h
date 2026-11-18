#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BDBPPMMILJB.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MCCFCNLNKDB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B3108F0)
#define MCCFCNLNKDB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B3104C0)
#define MCCFCNLNKDB_GBNFLNFANAI_OFFSET UNITYSDK_OFFSET(0x1B3101F0)
#define MCCFCNLNKDB_LIIGBGKIDDO_OFFSET UNITYSDK_OFFSET(0x1B3104D0)
#define MCCFCNLNKDB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B3108E0)
#define MCCFCNLNKDB_PPIFNHNGCGO_OFFSET UNITYSDK_OFFSET(0x1B3107A0)
#define MCCFCNLNKDB__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3101E0)

inline static constexpr unsigned int MCCFCNLNKDB_TypeDefinitionIndex = 12335;

class MCCFCNLNKDB : public ::System::Object
{
public:
	::BDBPPMMILJB HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* OLKGFEFDHKM; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Collections::Generic::List_1<::System::Int32>* FFBOALLKGEI; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 PCMOJLNOPPM; // 0x3C

	::System::Void _ctor(::BDBPPMMILJB LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::BDBPPMMILJB, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + MCCFCNLNKDB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* GBNFLNFANAI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCFCNLNKDB_GBNFLNFANAI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MCCFCNLNKDB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LIIGBGKIDDO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCFCNLNKDB_LIIGBGKIDDO_OFFSET))(this);
	}

	::System::Int32 PPIFNHNGCGO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCFCNLNKDB_PPIFNHNGCGO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCFCNLNKDB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MCCFCNLNKDB_COFGIJJOFLP_OFFSET))(this);
	}
};
