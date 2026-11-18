#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LHNOBLMFEAN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define ECPLKJIJKKG_CECOBNLKPCD_OFFSET UNITYSDK_OFFSET(0x1A197BF0)
#define ECPLKJIJKKG_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1A197B00)
#define ECPLKJIJKKG_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1A197E50)
#define ECPLKJIJKKG_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1A197AF0)
#define ECPLKJIJKKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A197AE0)

inline static constexpr unsigned int ECPLKJIJKKG_TypeDefinitionIndex = 17393;

class ECPLKJIJKKG : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::System::String*>* GJBNHAJNLKD; // 0x10
	::LHNOBLMFEAN HBDPAIKANDB; // 0x18
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte CNIAANMNOCF; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::LHNOBLMFEAN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::LHNOBLMFEAN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + ECPLKJIJKKG__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPLKJIJKKG_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPLKJIJKKG_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::String*>* CECOBNLKPCD()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ECPLKJIJKKG_CECOBNLKPCD_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ECPLKJIJKKG_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}
};
