#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NHPMMIGFDML.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define BFKEOJBMGFK_BPIEHENKEIM_OFFSET UNITYSDK_OFFSET(0x1775A590)
#define BFKEOJBMGFK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1775A490)
#define BFKEOJBMGFK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1775A580)
#define BFKEOJBMGFK_KOCLOKHKBPL_OFFSET UNITYSDK_OFFSET(0x1775A6A0)
#define BFKEOJBMGFK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1775A480)
#define BFKEOJBMGFK_PAGPGIPKICO_OFFSET UNITYSDK_OFFSET(0x1775A370)
#define BFKEOJBMGFK__CTOR_OFFSET UNITYSDK_OFFSET(0x1775A360)

inline static constexpr unsigned int BFKEOJBMGFK_TypeDefinitionIndex = 16262;

class BFKEOJBMGFK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* CBGIMEIFDJE; // 0x18
	::NHPMMIGFDML HBDPAIKANDB; // 0x20
	::System::Collections::Generic::List_1<::System::Int32>* EMJECIONOKH; // 0x30
	::System::String* AONAANICGAD; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Byte CNIAANMNOCF; // 0x42

	::System::Void _ctor(::NHPMMIGFDML LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NHPMMIGFDML, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + BFKEOJBMGFK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* PAGPGIPKICO()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEOJBMGFK_PAGPGIPKICO_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEOJBMGFK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEOJBMGFK_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BFKEOJBMGFK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BPIEHENKEIM()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEOJBMGFK_BPIEHENKEIM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* KOCLOKHKBPL()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + BFKEOJBMGFK_KOCLOKHKBPL_OFFSET))(this);
	}
};
