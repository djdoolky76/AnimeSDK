#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IJCKGLPDMAG.h"
#include "unitysdk/System/Object.h"

class KGBFLHNJHHN;
namespace System::Collections::Generic { template <typename T> class List_1; }

#define PGCBNDKDBFB_COFGIJJOFLP_OFFSET UNITYSDK_OFFSET(0x1D003690)
#define PGCBNDKDBFB_FOCAOAGCLCK_OFFSET UNITYSDK_OFFSET(0x1D0033A0)
#define PGCBNDKDBFB_LJANCIBECFG_OFFSET UNITYSDK_OFFSET(0x1D0033B0)
#define PGCBNDKDBFB_LKINMLPFBOO_OFFSET UNITYSDK_OFFSET(0x1D0033C0)
#define PGCBNDKDBFB__CTOR_OFFSET UNITYSDK_OFFSET(0x1D003390)

inline static constexpr unsigned int PGCBNDKDBFB_TypeDefinitionIndex = 10439;

class PGCBNDKDBFB : public ::System::Object
{
public:
	::KGBFLHNJHHN* JAIHFLGIDCA; // 0x10
	::IJCKGLPDMAG HBDPAIKANDB; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* MCJKIIICPIL; // 0x28
	::System::Boolean _EBJDBPALMML_k__BackingField; // 0x30
	::System::Byte ACIOBDEBDNK; // 0x31
	::System::Byte CNIAANMNOCF; // 0x32

	::System::Void _ctor(::IJCKGLPDMAG LJBPECKCCEA, ::KGBFLHNJHHN* NKMKJFCBBCK)
	{
		return ((::System::Void(*)(::PVOID, ::IJCKGLPDMAG, ::KGBFLHNJHHN*))((::PBYTE)hIl2Cpp + PGCBNDKDBFB__CTOR_OFFSET))(this, LJBPECKCCEA, NKMKJFCBBCK);
	}

	::System::Void FOCAOAGCLCK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PGCBNDKDBFB_FOCAOAGCLCK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean LJANCIBECFG()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCBNDKDBFB_LJANCIBECFG_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Int32>* LKINMLPFBOO()
	{
		return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCBNDKDBFB_LKINMLPFBOO_OFFSET))(this);
	}

	::System::Void COFGIJJOFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PGCBNDKDBFB_COFGIJJOFLP_OFFSET))(this);
	}
};
