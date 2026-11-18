#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGACIEGHCON.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KHOPHGDHOGO_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1957CE80)
#define KHOPHGDHOGO_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1957D250)
#define KHOPHGDHOGO_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1957D240)
#define KHOPHGDHOGO_NPJIIEJECFM_OFFSET UNITYSDK_OFFSET(0x1957CF70)
#define KHOPHGDHOGO__CTOR_OFFSET UNITYSDK_OFFSET(0x1957CE70)

inline static constexpr unsigned int KHOPHGDHOGO_TypeDefinitionIndex = 9405;

class KHOPHGDHOGO : public ::System::Object
{
public:
	::JGACIEGHCON HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* KBEMEIOBJJA; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::JGACIEGHCON LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JGACIEGHCON, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + KHOPHGDHOGO__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPHGDHOGO_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NPJIIEJECFM()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPHGDHOGO_NPJIIEJECFM_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KHOPHGDHOGO_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + KHOPHGDHOGO_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
