#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OGFOIHECLCA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define JBFENNDLIJJ_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x18BC6020)
#define JBFENNDLIJJ_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x18BC5EF0)
#define JBFENNDLIJJ_JFDDJBFPMPE_OFFSET UNITYSDK_OFFSET(0x18BC5AE0)
#define JBFENNDLIJJ_JPJCBKOLIPN_OFFSET UNITYSDK_OFFSET(0x18BC5C20)
#define JBFENNDLIJJ_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x18BC5F00)
#define JBFENNDLIJJ_ODLPELGEBAJ_OFFSET UNITYSDK_OFFSET(0x18BC5F10)
#define JBFENNDLIJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x18BC5AD0)

inline static constexpr unsigned int JBFENNDLIJJ_TypeDefinitionIndex = 11021;

class JBFENNDLIJJ : public ::System::Object
{
public:
	::System::String* CJPFHJFDCFJ; // 0x10
	::OGFOIHECLCA HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* AGGIGCKLCDF; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x38
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x39
	::System::Byte CNIAANMNOCF; // 0x3A
	::System::Byte _padding0[0x1];
	::System::Int32 OHMKALGEHFI; // 0x3C

	::System::Void _ctor(::OGFOIHECLCA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::OGFOIHECLCA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + JBFENNDLIJJ__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Int32 JFDDJBFPMPE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFENNDLIJJ_JFDDJBFPMPE_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* JPJCBKOLIPN()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFENNDLIJJ_JPJCBKOLIPN_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBFENNDLIJJ_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFENNDLIJJ_LJANCIBECFG_OFFSET))(this);
	}

	::System::String* ODLPELGEBAJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFENNDLIJJ_ODLPELGEBAJ_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBFENNDLIJJ_COFGIJJOFLP_OFFSET))(this);
	}
};
