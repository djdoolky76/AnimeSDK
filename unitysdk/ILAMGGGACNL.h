#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EKGOCKJCNNJ.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ILAMGGGACNL_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17C1E550)
#define ILAMGGGACNL_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17C1E640)
#define ILAMGGGACNL_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17C1E650)
#define ILAMGGGACNL_LNKDODJDIOC_OFFSET UNITYSDK_OFFSET(0x17C1E280)
#define ILAMGGGACNL__CTOR_OFFSET UNITYSDK_OFFSET(0x17C1E270)

inline static constexpr unsigned int ILAMGGGACNL_TypeDefinitionIndex = 17165;

class ILAMGGGACNL : public ::System::Object
{
public:
	::EKGOCKJCNNJ HBDPAIKANDB; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* JCJKNCHGMCE; // 0x20
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::EKGOCKJCNNJ LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EKGOCKJCNNJ, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ILAMGGGACNL__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LNKDODJDIOC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAMGGGACNL_LNKDODJDIOC_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAMGGGACNL_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ILAMGGGACNL_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ILAMGGGACNL_LJANCIBECFG_OFFSET))(this);
	}
};
