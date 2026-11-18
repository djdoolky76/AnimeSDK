#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IKOPEHLPKNG.h"
#include "unitysdk/JLGIMBLNHOD.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define HBOOFJJAJHI_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BAD67E0)
#define HBOOFJJAJHI_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BAD6BE0)
#define HBOOFJJAJHI_IPJLIBHNAHL_OFFSET UNITYSDK_OFFSET(0x1BAD68E0)
#define HBOOFJJAJHI_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BAD68D0)
#define HBOOFJJAJHI__CTOR_OFFSET UNITYSDK_OFFSET(0x1BAD67D0)

inline static constexpr unsigned int HBOOFJJAJHI_TypeDefinitionIndex = 13771;

class HBOOFJJAJHI : public ::System::Object
{
public:
	::JLGIMBLNHOD HBDPAIKANDB; // 0x10
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x20
	::System::Collections::Generic::List_1<::IKOPEHLPKNG>* EPNHPFHHGEL; // 0x28
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x32

	::System::Void _ctor(::JLGIMBLNHOD LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::JLGIMBLNHOD, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + HBOOFJJAJHI__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOFJJAJHI_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOFJJAJHI_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::IKOPEHLPKNG>* IPJLIBHNAHL()
	{
		return ((::System::Collections::Generic::List_1<::IKOPEHLPKNG>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HBOOFJJAJHI_IPJLIBHNAHL_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HBOOFJJAJHI_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
