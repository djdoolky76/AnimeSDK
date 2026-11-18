#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EGFJBMBJBMK.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NHGINPEDMCN_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1BF6CC70)
#define NHGINPEDMCN_DPBAFANMMJI_OFFSET UNITYSDK_OFFSET(0x1BF6CB50)
#define NHGINPEDMCN_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1BF6CD60)
#define NHGINPEDMCN_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1BF6CC60)
#define NHGINPEDMCN_NBBIFGGNLMA_OFFSET UNITYSDK_OFFSET(0x1BF6CEB0)
#define NHGINPEDMCN_OMEENAIGOKL_OFFSET UNITYSDK_OFFSET(0x1BF6CD70)
#define NHGINPEDMCN__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF6CB40)

inline static constexpr unsigned int NHGINPEDMCN_TypeDefinitionIndex = 13603;

class NHGINPEDMCN : public ::System::Object
{
public:
	::EGFJBMBJBMK HBDPAIKANDB; // 0x10
	::System::String* IFIKBMMGDCH; // 0x20
	::System::String* IHCGDMOFNCM; // 0x28
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x30
	::System::Collections::Generic::List_1<::System::Int32>* CFIGCPCNGBD; // 0x38
	::System::Byte CNIAANMNOCF; // 0x40
	::System::Byte ACIOBDEBDNK; // 0x41
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x42
	::System::Byte _padding0[0x1];
	::System::Int32 POKJNGILNLB; // 0x44
	::System::Int32 DOIFKMOMEKL; // 0x48
	::System::Int32 FAJAHHMEIFB; // 0x4C

	::System::Void _ctor(::EGFJBMBJBMK LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EGFJBMBJBMK, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + NHGINPEDMCN__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* DPBAFANMMJI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGINPEDMCN_DPBAFANMMJI_OFFSET))(this);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGINPEDMCN_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGINPEDMCN_COFGIJJOFLP_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NHGINPEDMCN_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OMEENAIGOKL()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGINPEDMCN_OMEENAIGOKL_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* NBBIFGGNLMA()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NHGINPEDMCN_NBBIFGGNLMA_OFFSET))(this);
	}
};
