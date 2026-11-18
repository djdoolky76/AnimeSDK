#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FNIGJFNCBDC.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JAKPMDAELKD_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BC5700)
#define JAKPMDAELKD_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BC5AC0)
#define JAKPMDAELKD_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BC56F0)
#define JAKPMDAELKD_NGKGFHGGNHN_OFFSET UNITYSDK_OFFSET(0x18BC57F0)
#define JAKPMDAELKD__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC56E0)

inline static constexpr unsigned int JAKPMDAELKD_TypeDefinitionIndex = 15279;

class JAKPMDAELKD : public ::System::Object
{
public:
	::FNIGJFNCBDC HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* FGAJMMMIACO; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::FNIGJFNCBDC LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::FNIGJFNCBDC, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JAKPMDAELKD__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKPMDAELKD_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKPMDAELKD_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NGKGFHGGNHN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JAKPMDAELKD_NGKGFHGGNHN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JAKPMDAELKD_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
