#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DAPEHNFOGIN.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BOFOBEJOFJN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x17EFEC20)
#define BOFOBEJOFJN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x17EFED20)
#define BOFOBEJOFJN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x17EFED10)
#define BOFOBEJOFJN_NBANENMBIGB_OFFSET UNITYSDK_OFFSET(0x17EFED30)
#define BOFOBEJOFJN__CTOR_OFFSET UNITYSDK_OFFSET(0x17EFEC10)

inline static constexpr unsigned int BOFOBEJOFJN_TypeDefinitionIndex = 12280;

class BOFOBEJOFJN : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::DAPEHNFOGIN HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* FPBMEGEAKEC; // 0x28
	::System::Byte ACIOBDEBDNK; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::DAPEHNFOGIN LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DAPEHNFOGIN, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BOFOBEJOFJN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFOBEJOFJN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFOBEJOFJN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BOFOBEJOFJN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::String*>* NBANENMBIGB()
	{
		return ((::System::Collections::Generic::List_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BOFOBEJOFJN_NBANENMBIGB_OFFSET))(this);
	}
};
