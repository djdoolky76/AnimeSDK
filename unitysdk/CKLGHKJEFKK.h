#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CELPPGBOAOM.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define CKLGHKJEFKK_AODOGEGCKKI_OFFSET UNITYSDK_OFFSET(0x16611C20)
#define CKLGHKJEFKK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x166121C0)
#define CKLGHKJEFKK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x16611C10)
#define CKLGHKJEFKK_JGOEEFJHEMI_OFFSET UNITYSDK_OFFSET(0x16611EF0)
#define CKLGHKJEFKK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x166122B0)
#define CKLGHKJEFKK_MJEKGNJNEEO_OFFSET UNITYSDK_OFFSET(0x166122C0)
#define CKLGHKJEFKK_MKNKGJLNGIG_OFFSET UNITYSDK_OFFSET(0x16611940)
#define CKLGHKJEFKK__CTOR_OFFSET UNITYSDK_OFFSET(0x16611930)

inline static constexpr unsigned int CKLGHKJEFKK_TypeDefinitionIndex = 10736;

class CKLGHKJEFKK : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* DBAIPFCAPJB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JFNPJLNMABI; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* JFFLACEGKJO; // 0x28
	::CELPPGBOAOM HBDPAIKANDB; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 DCADPBEHDAN; // 0x44

	::System::Void _ctor(::CELPPGBOAOM LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::CELPPGBOAOM, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + CKLGHKJEFKK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* MKNKGJLNGIG()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLGHKJEFKK_MKNKGJLNGIG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CKLGHKJEFKK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* AODOGEGCKKI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLGHKJEFKK_AODOGEGCKKI_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JGOEEFJHEMI()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLGHKJEFKK_JGOEEFJHEMI_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLGHKJEFKK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLGHKJEFKK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Int32 MJEKGNJNEEO()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CKLGHKJEFKK_MJEKGNJNEEO_OFFSET))(this);
	}
};
