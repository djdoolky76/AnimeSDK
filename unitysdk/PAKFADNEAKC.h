#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DADMGGNJAPE.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PAKFADNEAKC_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1B344CF0)
#define PAKFADNEAKC_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1B344CD0)
#define PAKFADNEAKC_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1B344CE0)
#define PAKFADNEAKC_LKINMLPFBOO_OFFSET UNITYSDK_OFFSET(0x1B344A00)
#define PAKFADNEAKC__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3449F0)

inline static constexpr unsigned int PAKFADNEAKC_TypeDefinitionIndex = 17591;

class PAKFADNEAKC : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::System::Collections::Generic::List_1<::System::Int32>* MCJKIIICPIL; // 0x18
	::DADMGGNJAPE HBDPAIKANDB; // 0x20
	::System::Byte CNIAANMNOCF; // 0x30
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x31
	::System::Byte ACIOBDEBDNK; // 0x32

	::System::Void _ctor(::DADMGGNJAPE LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::DADMGGNJAPE, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PAKFADNEAKC__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LKINMLPFBOO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKFADNEAKC_LKINMLPFBOO_OFFSET))(this);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAKFADNEAKC_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKFADNEAKC_LJANCIBECFG_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAKFADNEAKC_COFGIJJOFLP_OFFSET))(this);
	}
};
