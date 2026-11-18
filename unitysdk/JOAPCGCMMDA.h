#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JMAEGMENCOF.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JOAPCGCMMDA_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B89E0E0)
#define JOAPCGCMMDA_COMIJPELGDB_OFFSET UNITYSDK_OFFSET(0x1B89E4B0)
#define JOAPCGCMMDA_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B89E0D0)
#define JOAPCGCMMDA_HPLIDDDMDAE_OFFSET UNITYSDK_OFFSET(0x1B89E1E0)
#define JOAPCGCMMDA_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B89E1D0)
#define JOAPCGCMMDA__CTOR_OFFSET UNITYSDK_OFFSET(0x1B89E0C0)

inline static constexpr unsigned int JOAPCGCMMDA_TypeDefinitionIndex = 16111;

class JOAPCGCMMDA : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::Int32>* KDMLGFJPDBH; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* IIAMDAOCFHC; // 0x20
	::JMAEGMENCOF HBDPAIKANDB; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Byte CNIAANMNOCF; // 0x39
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x3A

	::System::Void _ctor(::JMAEGMENCOF LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JMAEGMENCOF, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JOAPCGCMMDA__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JOAPCGCMMDA_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAPCGCMMDA_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAPCGCMMDA_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* HPLIDDDMDAE()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAPCGCMMDA_HPLIDDDMDAE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* COMIJPELGDB()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JOAPCGCMMDA_COMIJPELGDB_OFFSET))(this);
	}
};
