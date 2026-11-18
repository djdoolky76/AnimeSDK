#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/EDHBODIIKGH.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GPOLBAOBJBK_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1933C600)
#define GPOLBAOBJBK_COGLGAOMCAI_OFFSET UNITYSDK_OFFSET(0x1933C4D0)
#define GPOLBAOBJBK_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1933C5E0)
#define GPOLBAOBJBK_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1933C5F0)
#define GPOLBAOBJBK__CTOR_OFFSET UNITYSDK_OFFSET(0x1933C4C0)

inline static constexpr unsigned int GPOLBAOBJBK_TypeDefinitionIndex = 16520;

class GPOLBAOBJBK : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::String* MJMJKHCPAMG; // 0x18
	::System::Collections::Generic::List_1<::System::String*>* GFPKOJGJIHC; // 0x20
	::EDHBODIIKGH HBDPAIKANDB; // 0x28
	::System::String* CIGLKGLMFLA; // 0x38
	::System::Collections::Generic::List_1<::System::Int32>* ELONCILEDIF; // 0x40
	::System::Int32 CLDPLBONKAJ; // 0x48
	::System::Byte CNIAANMNOCF; // 0x4C
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x4D
	::System::Byte ACIOBDEBDNK; // 0x4E
	::System::Boolean PNFHCEOHDKI; // 0x4F
	::System::Int32 OBBKFFNDAIN; // 0x50
	::System::Int32 CKIPBJFOOCO; // 0x54

	::System::Void _ctor(::EDHBODIIKGH LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::EDHBODIIKGH, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + GPOLBAOBJBK__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::String* COGLGAOMCAI()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOLBAOBJBK_COGLGAOMCAI_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + GPOLBAOBJBK_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOLBAOBJBK_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPOLBAOBJBK_COFGIJJOFLP_OFFSET))(this);
	}
};
