#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NLPEOLJJCIA.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define DCEKIKLIKGM_BAJELALLONC_OFFSET UNITYSDK_OFFSET(0x16615800)
#define DCEKIKLIKGM_CNPMPBOFMFN_OFFSET UNITYSDK_OFFSET(0x16615CE0)
#define DCEKIKLIKGM_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x16615AE0)
#define DCEKIKLIKGM_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x166157F0)
#define DCEKIKLIKGM_GBNFNKCMNBF_OFFSET UNITYSDK_OFFSET(0x16615DF0)
#define DCEKIKLIKGM_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x16615AD0)
#define DCEKIKLIKGM_MIJKNCHMDKC_OFFSET UNITYSDK_OFFSET(0x16615BD0)
#define DCEKIKLIKGM__CTOR_OFFSET UNITYSDK_OFFSET(0x166157E0)

inline static constexpr unsigned int DCEKIKLIKGM_TypeDefinitionIndex = 13235;

class DCEKIKLIKGM : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* GHADLPOJMDP; // 0x18
	::System::String* AAGNOINIKAC; // 0x20
	::System::String* ICLKHAOKKEG; // 0x28
	::NLPEOLJJCIA HBDPAIKANDB; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x40
	::System::Byte CNIAANMNOCF; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 AEGKHEABBOA; // 0x44

	::System::Void _ctor(::NLPEOLJJCIA LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::NLPEOLJJCIA, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + DCEKIKLIKGM__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DCEKIKLIKGM_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Collections::Generic::List_1<::System::Int32>* BAJELALLONC()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEKIKLIKGM_BAJELALLONC_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEKIKLIKGM_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEKIKLIKGM_COFGIJJOFLP_OFFSET))(this);
	}

	::System::String* MIJKNCHMDKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEKIKLIKGM_MIJKNCHMDKC_OFFSET))(this);
	}

	::System::String* CNPMPBOFMFN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEKIKLIKGM_CNPMPBOFMFN_OFFSET))(this);
	}

	::System::Int32 GBNFNKCMNBF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + DCEKIKLIKGM_GBNFNKCMNBF_OFFSET))(this);
	}
};
